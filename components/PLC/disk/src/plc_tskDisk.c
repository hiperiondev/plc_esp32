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

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <esp_log.h>

#include "plc_disk.h"
#include "plc_globals.h"
#include "plc_tskDisk.h"

//static const char *TAG = "plc_tskDisk";

//--------------------------------------------------------------------------------
// Disk Task 
// Controls SPIFSS memory and SD Card files
// Running on Core 0
//--------------------------------------------------------------------------------

void TaskDisk(void *pvParameters) {
    FILE *f;
    (void) pvParameters;

    //------------------------------------------------------
    // Regular boot: Mount FFAT Disk
    // First boot: Format FFAT disk
    //------------------------------------------------------

    mountDisk();

    //------------------------------------------------------
    // Regular boot: Load saved settings from FFAT Disk
    // First boot: Load default settings and Save to Disk
    //------------------------------------------------------

    loadSettings();

    //------------------------------------------------------
    // Clear auxiliary networks and Unlock tasks
    //------------------------------------------------------

    clearEmptyNetwork();

//----------------------------------------------------
// Task Main loop
//----------------------------------------------------

    while (1) {

        //----------------------------------------------------
        // Update Network currently in edition mode to disk
        //----------------------------------------------------

        if (updateSelectedProgramDisk && sd_available) {
            char file_user_program[1024];
            sprintf(file_user_program, "%s%s", PLC_SD_MOUNT_POINT, FILENAME_USER_PROGRAMS[settings.ladder.UserProgram]);
            f = fopen(file_user_program, "r+");
            fseek(f, SEEK_SET, showingNetwork * sizeof(onlineNetwork));
            fwrite((uint8_t *)&onlineNetwork, sizeof(onlineNetwork), 1, f);
            fclose(f);

            updateSelectedProgramDisk = 0;
        }

        vTaskDelay(5 / portTICK_RATE_MS);
    }
}
