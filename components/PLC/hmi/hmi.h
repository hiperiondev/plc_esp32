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

#ifndef HMI_H
#define HMI_H

#include "lvgl.h"


#define PG_EVENT(id, name)  static uint8_t ud_##name = id; \
                            name->user_data = &ud_##name; \
                            lv_obj_set_event_cb(name, event_cb);

enum pages {
    PMAIN,
    PCONFIGURATION,
    PWIFI,
    PWIFISCAN,
    PIO,
    PFIRMWARE,
    PLADDER,
    PPROGRAM,
    PYESNO,
    PSWITCHES,
    PPASSWORD
};

lv_obj_t *page_main;
lv_obj_t *page_configuration;
lv_obj_t *page_wifi;
lv_obj_t *page_wifi_scan;
lv_obj_t *page_io;
lv_obj_t *page_firmware;
lv_obj_t *page_ladder;
lv_obj_t *page_program;
lv_obj_t *page_yesno;
lv_obj_t *page_switches;
lv_obj_t *page_password;

char filename[254];

extern lv_font_t lv_font_123abc_16;

void hmi_init();
void hmi_switch_page(lv_obj_t *self, uint8_t target);

#endif
