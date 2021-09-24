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

#include "page_configuration.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
lv_obj_t *parent;

lv_obj_t *button_1_ev_0;
lv_obj_t *button_2_ev_0;
lv_obj_t *button_3_ev_0;
lv_obj_t *button_4_ev_0;
lv_obj_t *button_5_ev_0;
lv_obj_t *button_6_ev_0;

enum e_pConfig {
    PGCONF_BUTTON1,
    PGCONF_BUTTON2,
    PGCONF_BUTTON3,
    PGCONF_BUTTON4,
    PGCONF_BUTTON5,
    PGCONF_BUTTON6
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGCONF_BUTTON1:
                hmi_switch_page(parent, PPROGRAM);
                break;
            case PGCONF_BUTTON2:
                hmi_switch_page(parent, PFIRMWARE);
                break;
            case PGCONF_BUTTON3:
                hmi_switch_page(parent, PIO);
                break;
            case PGCONF_BUTTON4:
                break;
            case PGCONF_BUTTON5:
                hmi_switch_page(parent, PWIFI);
                break;
            case PGCONF_BUTTON6:
                hmi_switch_page(parent, PMAIN);
                break;
        }
    }
}

lv_obj_t* page_configuration_create() {
    parent = lv_obj_create(NULL, NULL);

    static lv_style_t button_1_s0;
    lv_style_init(&button_1_s0);
    lv_style_set_radius(&button_1_s0, LV_STATE_DEFAULT, 10);
    static char *str_3888425 = "PLC";

    lv_style_set_value_str(&button_1_s0, LV_STATE_DEFAULT, str_3888425);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_CHECKED, 10);
    static char *str_321bd19 = "PLC";

    lv_style_set_value_str(&button_1_s0, LV_STATE_CHECKED, str_321bd19);
    lv_style_set_value_font(&button_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_FOCUSED, 10);
    static char *str_8e41860 = "PLC";

    lv_style_set_value_str(&button_1_s0, LV_STATE_FOCUSED, str_8e41860);
    lv_style_set_value_font(&button_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_EDITED, 10);
    static char *str_48feb87 = "PLC";

    lv_style_set_value_str(&button_1_s0, LV_STATE_EDITED, str_48feb87);
    lv_style_set_value_font(&button_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_HOVERED, 10);
    static char *str_1564a56 = "PLC";

    lv_style_set_value_str(&button_1_s0, LV_STATE_HOVERED, str_1564a56);
    lv_style_set_value_font(&button_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_PRESSED, 10);
    static char *str_99e12f5 = "PLC";

    lv_style_set_value_str(&button_1_s0, LV_STATE_PRESSED, str_99e12f5);
    lv_style_set_value_font(&button_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_DISABLED, 10);
    static char *str_d7a6566 = "PLC";

    lv_style_set_value_str(&button_1_s0, LV_STATE_DISABLED, str_d7a6566);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_1 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_1, 0, &button_1_s0);
    lv_obj_set_hidden(button_1, false);
    lv_obj_set_click(button_1, true);
    lv_obj_set_drag(button_1, false);
    lv_obj_set_pos(button_1, 6, 6);
    lv_obj_set_size(button_1, 151, 73);
    lv_btn_set_checkable(button_1, false);
    lv_btn_set_fit(button_1, LV_FIT_NONE);
    PG_EVENT(PGCONF_BUTTON1, button_1);
    button_1_ev_0 = button_1;

    static lv_style_t button_2_s0;
    lv_style_init(&button_2_s0);
    lv_style_set_radius(&button_2_s0, LV_STATE_DEFAULT, 10);
    static char *str_2c6c69b = "SYSTEM";

    lv_style_set_value_str(&button_2_s0, LV_STATE_DEFAULT, str_2c6c69b);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_CHECKED, 10);
    static char *str_318316c = "SYSTEM";

    lv_style_set_value_str(&button_2_s0, LV_STATE_CHECKED, str_318316c);
    lv_style_set_value_font(&button_2_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_FOCUSED, 10);
    static char *str_948ecce = "SYSTEM";

    lv_style_set_value_str(&button_2_s0, LV_STATE_FOCUSED, str_948ecce);
    lv_style_set_value_font(&button_2_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_EDITED, 10);
    static char *str_2de221a = "SYSTEM";

    lv_style_set_value_str(&button_2_s0, LV_STATE_EDITED, str_2de221a);
    lv_style_set_value_font(&button_2_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_HOVERED, 10);
    static char *str_b337611 = "SYSTEM";

    lv_style_set_value_str(&button_2_s0, LV_STATE_HOVERED, str_b337611);
    lv_style_set_value_font(&button_2_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_PRESSED, 10);
    static char *str_2b48e77 = "SYSTEM";

    lv_style_set_value_str(&button_2_s0, LV_STATE_PRESSED, str_2b48e77);
    lv_style_set_value_font(&button_2_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_DISABLED, 10);
    static char *str_aececcf = "SYSTEM";

    lv_style_set_value_str(&button_2_s0, LV_STATE_DISABLED, str_aececcf);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_2 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_2, 0, &button_2_s0);
    lv_obj_set_hidden(button_2, false);
    lv_obj_set_click(button_2, true);
    lv_obj_set_drag(button_2, false);
    lv_obj_set_pos(button_2, 6, 163);
    lv_obj_set_size(button_2, 151, 73);
    lv_btn_set_checkable(button_2, false);
    PG_EVENT(PGCONF_BUTTON2, button_2);
    button_2_ev_0 = button_2;

    static lv_style_t button_3_s0;
    lv_style_init(&button_3_s0);
    lv_style_set_radius(&button_3_s0, LV_STATE_DEFAULT, 10);
    static char *str_1719789 = "I/O";

    lv_style_set_value_str(&button_3_s0, LV_STATE_DEFAULT, str_1719789);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_CHECKED, 10);
    static char *str_9495c53 = "I/O";

    lv_style_set_value_str(&button_3_s0, LV_STATE_CHECKED, str_9495c53);
    lv_style_set_value_font(&button_3_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_FOCUSED, 10);
    static char *str_0a4d1a8 = "I/O";

    lv_style_set_value_str(&button_3_s0, LV_STATE_FOCUSED, str_0a4d1a8);
    lv_style_set_value_font(&button_3_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_EDITED, 10);
    static char *str_4604d64 = "I/O";

    lv_style_set_value_str(&button_3_s0, LV_STATE_EDITED, str_4604d64);
    lv_style_set_value_font(&button_3_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_HOVERED, 10);
    static char *str_5c9cde9 = "I/O";

    lv_style_set_value_str(&button_3_s0, LV_STATE_HOVERED, str_5c9cde9);
    lv_style_set_value_font(&button_3_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_PRESSED, 10);
    static char *str_8b920ad = "I/O";

    lv_style_set_value_str(&button_3_s0, LV_STATE_PRESSED, str_8b920ad);
    lv_style_set_value_font(&button_3_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_DISABLED, 10);
    static char *str_83c1c41 = "I/O";

    lv_style_set_value_str(&button_3_s0, LV_STATE_DISABLED, str_83c1c41);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_3 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_3, 0, &button_3_s0);
    lv_obj_set_hidden(button_3, false);
    lv_obj_set_click(button_3, true);
    lv_obj_set_drag(button_3, false);
    lv_obj_set_pos(button_3, 6, 85);
    lv_obj_set_size(button_3, 151, 73);
    lv_btn_set_checkable(button_3, false);
    PG_EVENT(PGCONF_BUTTON3, button_3);
    button_3_ev_0 = button_3;

    static lv_style_t button_4_s0;
    lv_style_init(&button_4_s0);
    lv_style_set_radius(&button_4_s0, LV_STATE_DEFAULT, 10);
    static char *str_8e2d3ae = "HMI";

    lv_style_set_value_str(&button_4_s0, LV_STATE_DEFAULT, str_8e2d3ae);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_CHECKED, 10);
    static char *str_780d422 = "HMI";

    lv_style_set_value_str(&button_4_s0, LV_STATE_CHECKED, str_780d422);
    lv_style_set_value_font(&button_4_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_FOCUSED, 10);
    static char *str_1f80558 = "HMI";

    lv_style_set_value_str(&button_4_s0, LV_STATE_FOCUSED, str_1f80558);
    lv_style_set_value_font(&button_4_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_EDITED, 10);
    static char *str_5644d0a = "HMI";

    lv_style_set_value_str(&button_4_s0, LV_STATE_EDITED, str_5644d0a);
    lv_style_set_value_font(&button_4_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_HOVERED, 10);
    static char *str_af112d7 = "HMI";

    lv_style_set_value_str(&button_4_s0, LV_STATE_HOVERED, str_af112d7);
    lv_style_set_value_font(&button_4_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_PRESSED, 10);
    static char *str_77b5b30 = "HMI";

    lv_style_set_value_str(&button_4_s0, LV_STATE_PRESSED, str_77b5b30);
    lv_style_set_value_font(&button_4_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_DISABLED, 10);
    static char *str_9a83038 = "HMI";

    lv_style_set_value_str(&button_4_s0, LV_STATE_DISABLED, str_9a83038);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_4 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_4, 0, &button_4_s0);
    lv_obj_set_hidden(button_4, false);
    lv_obj_set_click(button_4, true);
    lv_obj_set_drag(button_4, false);
    lv_obj_set_pos(button_4, 165, 6);
    lv_obj_set_size(button_4, 151, 73);
    lv_btn_set_checkable(button_4, false);
    PG_EVENT(PGCONF_BUTTON4, button_4);
    button_4_ev_0 = button_4;

    static lv_style_t button_5_s0;
    lv_style_init(&button_5_s0);
    lv_style_set_radius(&button_5_s0, LV_STATE_DEFAULT, 10);
    static char *str_eea6d1a = "NETWORK";

    lv_style_set_value_str(&button_5_s0, LV_STATE_DEFAULT, str_eea6d1a);
    lv_style_set_value_font(&button_5_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_CHECKED, 10);
    static char *str_a60ab4d = "NETWORK";

    lv_style_set_value_str(&button_5_s0, LV_STATE_CHECKED, str_a60ab4d);
    lv_style_set_value_font(&button_5_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_FOCUSED, 10);
    static char *str_32b4f2e = "NETWORK";

    lv_style_set_value_str(&button_5_s0, LV_STATE_FOCUSED, str_32b4f2e);
    lv_style_set_value_font(&button_5_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_EDITED, 10);
    static char *str_7289481 = "NETWORK";

    lv_style_set_value_str(&button_5_s0, LV_STATE_EDITED, str_7289481);
    lv_style_set_value_font(&button_5_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_HOVERED, 10);
    static char *str_52c9a28 = "NETWORK";

    lv_style_set_value_str(&button_5_s0, LV_STATE_HOVERED, str_52c9a28);
    lv_style_set_value_font(&button_5_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_PRESSED, 10);
    static char *str_32eb132 = "NETWORK";

    lv_style_set_value_str(&button_5_s0, LV_STATE_PRESSED, str_32eb132);
    lv_style_set_value_font(&button_5_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_DISABLED, 10);
    static char *str_a27baae = "NETWORK";

    lv_style_set_value_str(&button_5_s0, LV_STATE_DISABLED, str_a27baae);
    lv_style_set_value_font(&button_5_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_5 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_5, 0, &button_5_s0);
    lv_obj_set_hidden(button_5, false);
    lv_obj_set_click(button_5, true);
    lv_obj_set_drag(button_5, false);
    lv_obj_set_pos(button_5, 165, 85);
    lv_obj_set_size(button_5, 151, 73);
    lv_btn_set_checkable(button_5, false);
    lv_btn_set_fit(button_5, LV_FIT_NONE);
    PG_EVENT(PGCONF_BUTTON5, button_5);
    button_5_ev_0 = button_5;

    static lv_style_t button_6_s0;
    lv_style_init(&button_6_s0);
    lv_style_set_radius(&button_6_s0, LV_STATE_DEFAULT, 10);
    static char *str_f22c406 = "HOME";

    lv_style_set_value_str(&button_6_s0, LV_STATE_DEFAULT, str_f22c406);
    lv_style_set_value_font(&button_6_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_CHECKED, 10);
    static char *str_e30d69c = "HOME";

    lv_style_set_value_str(&button_6_s0, LV_STATE_CHECKED, str_e30d69c);
    lv_style_set_value_font(&button_6_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_FOCUSED, 10);
    static char *str_ddb8e8f = "HOME";

    lv_style_set_value_str(&button_6_s0, LV_STATE_FOCUSED, str_ddb8e8f);
    lv_style_set_value_font(&button_6_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_EDITED, 10);
    static char *str_92ed873 = "HOME";

    lv_style_set_value_str(&button_6_s0, LV_STATE_EDITED, str_92ed873);
    lv_style_set_value_font(&button_6_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_HOVERED, 10);
    static char *str_434474a = "HOME";

    lv_style_set_value_str(&button_6_s0, LV_STATE_HOVERED, str_434474a);
    lv_style_set_value_font(&button_6_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_PRESSED, 10);
    static char *str_44c6275 = "HOME";

    lv_style_set_value_str(&button_6_s0, LV_STATE_PRESSED, str_44c6275);
    lv_style_set_value_font(&button_6_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_DISABLED, 10);
    static char *str_5a18715 = "HOME";

    lv_style_set_value_str(&button_6_s0, LV_STATE_DISABLED, str_5a18715);
    lv_style_set_value_font(&button_6_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_6 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_6, 0, &button_6_s0);
    lv_obj_set_hidden(button_6, false);
    lv_obj_set_click(button_6, true);
    lv_obj_set_drag(button_6, false);
    lv_obj_set_pos(button_6, 165, 163);
    lv_obj_set_size(button_6, 151, 73);
    lv_btn_set_checkable(button_6, false);
    lv_btn_set_fit(button_6, LV_FIT_NONE);
    PG_EVENT(PGCONF_BUTTON6, button_6);
    button_6_ev_0 = button_6;

    return parent;
}
