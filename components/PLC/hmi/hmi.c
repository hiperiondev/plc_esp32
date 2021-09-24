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
#include <esp_log.h>

#include "hmi.h"

#include "page_main/page_main.h"
#include "page_configuration/page_configuration.h"
#include "page_wifi/page_wifi.h"
#include "page_wifi_scan/page_wifi_scan.h"
#include "page_io/page_io.h"
#include "page_firmware/page_firmware.h"
#include "page_ladder/page_ladder.h"
#include "page_program/page_program.h"
#include "page_yesno/page_yesno.h"
#include "page_switches/page_switches.h"
#include "page_password/page_password.h"

#define TAG "plc_hmi"

void hmi_switch_page(lv_obj_t *self, uint8_t target) {
    lv_obj_del(self);
    switch (target) {
        case PMAIN:
            page_main = page_main_create();
            lv_scr_load(page_main);
            break;
        case PCONFIGURATION:
            page_configuration = page_configuration_create();
            lv_scr_load(page_configuration);
            break;
        case PWIFI:
            page_wifi = page_wifi_create();
            lv_scr_load(page_wifi);
            break;
        case PWIFISCAN:
            page_wifi_scan = page_wifi_scan_create();
            lv_scr_load(page_wifi_scan);
            break;
        case PIO:
            page_io = page_io_create();
            lv_scr_load(page_io);
            break;
        case PFIRMWARE:
            page_firmware = page_firmware_create();
            lv_scr_load(page_firmware);
            break;
        case PLADDER:
            page_ladder = page_ladder_create();
            lv_scr_load(page_ladder);
            break;
        case PPROGRAM:
            page_program = page_program_create();
            lv_scr_load(page_program);
            break;
        case PYESNO:
            page_yesno = page_yesno_create();
            lv_scr_load(page_yesno);
            break;
        case PSWITCHES:
            page_switches = page_switches_create();
            lv_scr_load(page_switches);
            break;
        case PPASSWORD:
            page_password = page_password_create();
            lv_scr_load(page_password);
            break;
    }
}

void hmi_init(){
	page_main = page_main_create();
	lv_scr_load(page_main);
}
