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

#include <stdlib.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_timer.h>
#include <nvs.h>
#include <nvs_flash.h>

#include "plc_globals.h"
#include "plc_tskHmi.h"

#include "app_main.h"

void app_main(void) {
    nvs_flash_init();

    xTaskCreatePinnedToCore(
            TaskHmi,
            "HMI",
            4096,
            NULL,
            10,
            NULL,
            0
    );

    xTaskCreatePinnedToCore(
            TaskDisk,
            "Disk Management",
            4096,
            NULL,
            0,
            NULL,
            0
    );


    xTaskCreatePinnedToCore(
            TaskLadder,
            "Ladder Logic",
            50000,  // Networks structure size is 76000 leaving 4K free
            NULL,
            0,
            NULL,
            1
    );

    while (1)
        vTaskDelay(1000 / portTICK_RATE_MS);
}
