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
#include <esp_timer.h>
#include <esp_log.h>

#include "plc_globals.h"
#include "plc_ladder.h"

static const char *TAG = "plc_ladderGeneral";

const uint8_t configInputCanBeAnalog[IO_LOCAL_IN_QTY] = { 0, 0, 0, 0, 0, 0, 1, 1 };
const uint8_t configOutputCanBeAnalog[IO_LOCAL_OUT_QTY] = { 0, 0, 0, 0, 1, 1 };
     uint16_t editionMode = 0;
     uint16_t NetworkFlagsOnline[NET_COLUMNS - 1];
//--------------------------------------------------------------------------------
// Calculate Scan Time in us 
//--------------------------------------------------------------------------------

void scanTime(void) {
    unsigned long scanTimeMicros = esp_timer_get_time();
    actualScanTime = scanTimeMicros - startTime;
    startTime = scanTimeMicros;
}

//--------------------------------------------------------------------------------
// Copy values to history for RE and FE instructions 
//--------------------------------------------------------------------------------

void savePreviousValues(void) {
    for (int i = 0; i < QTY_M; i++) {
        Mh[i] = M[i];
    }
    for (int i = 0; i < QTY_I; i++) {
        Ih[i] = I[i];
    }
    for (int i = 0; i < QTY_Q; i++) {
        Qh[i] = Q[i];
    }
    for (int i = 0; i < QTY_C; i++) {
        Crh[i] = Cr[i];
        Cdh[i] = Cd[i];
    }
    for (int i = 0; i < QTY_T; i++) {
        Tdh[i] = Td[i];
        Trh[i] = Tr[i];
    }
}

//--------------------------------------------------------------------------------
// Deletes PLC Memory Areas
//--------------------------------------------------------------------------------

void clearMemory(void) {
    for (int i = 0; i < QTY_M; i++) {
        Mh[i] = 0;
        M[i] = 0;
    }
    for (int i = 0; i < QTY_I; i++) {
        Ih[i] = 0;
        I[i] = 0;
    }
    for (int i = 0; i < QTY_Q; i++) {
        Qh[i] = 0;
        Q[i] = 0;
    }
    for (int i = 0; i < QTY_C; i++) {
        Cdh[i] = 0;
        Cd[i] = 0;
        Crh[i] = 0;
        Cr[i] = 0;
    }
    for (int i = 0; i < QTY_T; i++) {
        Tdh[i] = 0;
        Td[i] = 0;
        Trh[i] = 0;
        Tr[i] = 0;
    }
}

//--------------------------------------------------------------------------------
// Wait for tskDisk to load the User Settings  
//--------------------------------------------------------------------------------

void ladderWaitSettings(void) {
    ESP_LOGI(TAG, "TaskLadder - Waiting for Unlock\n");
    while ((bootSequence != BOOT_TASK_UNLOCKED) && (bootSequence != BOOT_DISK_ERROR)) {
        vTaskDelay(1000 / portTICK_RATE_MS); // forces to update bootSequence global variable
        ESP_LOGI(TAG, "bootSequence: %d", bootSequence);
    }

    if (bootSequence == BOOT_DISK_ERROR)
        loadSelectedProgram = 0;

    ESP_LOGI(TAG, "TaskLadder - Task Unlocked\n");
}

//--------------------------------------------------------------------------------
// Deletes all Networks (all values to 0)    
//--------------------------------------------------------------------------------

void clearProgram(Network Networks[]) {
    for (int n = 0; n < settings.ladder.NetworksQuantity; n++) {
        Networks[n].Bars[0] = 0;
        Networks[n].Bars[1] = 0;
        Networks[n].Bars[2] = 0;
        Networks[n].Bars[3] = 0;
        Networks[n].Bars[4] = 0;
        for (int c = 0; c < NET_COLUMNS; c++) {
            for (int r = 0; r < NET_ROWS; r++) {
                Networks[n].Cells[r][c].Code = 0;
                Networks[n].Cells[r][c].Data = 0;
                Networks[n].Cells[r][c].Type = 0;
            }
        }
    }
    ESP_LOGI(TAG, "TaskLadder - PROGRAM RAM CLEARED\n");
}
