/*
 * Copyright 2021 Emiliano Gonzalez (egonzalez . hiperion @ gmail . com))
 * * Project Site:  *
 *
 * This is based on other projects:
 *    PLsi (https://github.com/ElPercha/PLsi)
 *
 *    please contact their authors for more information.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 */

#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>

#include <esp_log.h>
#include <esp_err.h>

#include "plc_disk.h"
#include "plc_globals.h"
#include "PLC.h"
#include "plc_ladder.h"

static const char *TAG = "plc_diskGeneral";

//--------------------------------------------------------------------------------
// Initialize empty Network (all values to 0)
//--------------------------------------------------------------------------------

const char *FILENAME_USER_PROGRAMS[] = {
        "/PROGRAM1.lad",
        "/PROGRAM2.lad",
        "/PROGRAM3.lad",
        "/PROGRAM4.lad"
};

void clearEmptyNetwork(void) {
    if (bootSequence == BOOT_SETTINGS_LOADED) {
        for (int c = 0; c < NET_COLUMNS; c++) {
            for (int r = 0; r < NET_ROWS; r++) {
                emptyNetwork.Cells[r][c].Code = 0;
                emptyNetwork.Cells[r][c].Data = 0;
                emptyNetwork.Cells[r][c].Type = 0;
            }
        }
        for (int c = 0; c < NET_COLUMNS - 1; c++) {
            emptyNetwork.Bars[c] = 0;
        }
        copyMemoryNetwork = emptyNetwork;
        onlineNetwork = emptyNetwork;
        editingNetwork = emptyNetwork;

        //Serial.println("TaskDisk - emptyNetwork and auxiliary Networks Initialized");
        bootSequence = BOOT_TASK_UNLOCKED;
    }
}

esp_err_t loadProgram(void) {
    if (programLoaded)
        return ESP_OK;

    if (!sd_available) {
        //if (settings.ladder.UserProgram == DEMO_PROGRAM_SLOT) {
        ESP_LOGE(TAG, "SD not available. LOADING DEMO...");
        loadDemoUserProgram(Networks);
        programLoaded = true;
        return ESP_OK;
        //}
    }

    FILE *f;
    if (loadSelectedProgram) {
        struct stat st;
        char file_user_program[1024];

        listDir(PLC_SD_MOUNT_POINT);
        clearProgram(Networks);

        sprintf(file_user_program, "%s%s", PLC_SD_MOUNT_POINT, FILENAME_USER_PROGRAMS[settings.ladder.UserProgram]);
        if (stat(file_user_program, &st) == 0) {
            ESP_LOGI(TAG, "TaskLadder - File %s exists. Will be loaded to RAM", FILENAME_USER_PROGRAMS[settings.ladder.UserProgram]);

            f = fopen(file_user_program, "r");
            if (f == NULL) {
                ESP_LOGE(TAG, "Failed to open file for reading");
                //return;
            }
            while (fread((uint8_t*) &Networks, sizeof(Networks), 1, f))
                ;
            fclose(f);

        } else {
            ESP_LOGI(TAG, "TaskLadder - File %s not exists. Program file is going to be created", file_user_program);
            clearProgram(Networks);
            if (settings.ladder.UserProgram == DEMO_PROGRAM_SLOT) {
                loadDemoUserProgram(Networks);
            }

            sprintf(file_user_program, "%s%s", PLC_SD_MOUNT_POINT, FILENAME_USER_PROGRAMS[settings.ladder.UserProgram]);
            ESP_LOGI(TAG, "writing: %s", file_user_program);

            f = fopen(file_user_program, "w");
            if (f == NULL) {
                ESP_LOGE(TAG, "Failed to open file for writing");
                //return;
            }
            fwrite((uint8_t*) &Networks, sizeof(Networks), 1, f);
            fclose(f);
        }

        //clearMemory();
        //loadSelectedProgram = 0;
    } else {
        //if (settings.ladder.UserProgram == DEMO_PROGRAM_SLOT) {
        ESP_LOGE(TAG, "NO PROGRAM!!! LOADING DEMO!!");
        loadDemoUserProgram(Networks);
        //}
    }
    programLoaded = true;
    return ESP_OK;
}

esp_err_t writeInProgram(uint8_t* Networks) {
    if (!sd_available)
        return ESP_ERR_NOT_SUPPORTED;
    FILE *f;
    f = fopen(FILENAME_USER_PROGRAMS[settings.ladder.UserProgram], "w");
    size_t StatusWrite = fwrite(Networks, sizeof(*Networks), 1, f);
    fclose(f);
    ESP_LOGI(TAG, "Status of File Write operation for INSERT: %d", StatusWrite);

    return ESP_OK;
}

esp_err_t listDir(const char *path) {
    struct dirent *entry;
    DIR *dp;

    dp = opendir(path);
    if (dp == NULL) {
        ESP_LOGI(TAG, "ERROR: can't open directory %s", path);
        return ESP_FAIL;
    }

    ESP_LOGI(TAG, "DIR %s", path);
    while ((entry = readdir(dp)))
        ESP_LOGI(TAG, " > %s", entry->d_name);

    closedir(dp);
    return ESP_OK;
}
