/*
 Copyright (c) 2019 Prieto Lucas. All rights reserved.
 This file is part of the PLsi project.

 PLsi is free software and hardware: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 PLsi is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <esp_log.h>
#include <esp_err.h>

#include "plc_globals.h"
#include "plc_wifi_plsi.h"

static const char *TAG = "plc_wifiGeneral";
//--------------------------------------------------------------------------------
// Wait for tskDisk to load the User Settings  
//--------------------------------------------------------------------------------

void wifiWaitSettings(void) {
    ESP_LOGI(TAG, "TaskWiFi - Waiting for Unlock\n");
    while (bootSequence != BOOT_TASK_UNLOCKED) {
        delay(10); // forces to update bootSequence global variable
    }
    ESP_LOGI(TAG, "TaskWifi - Task Unlocked\n");
}
