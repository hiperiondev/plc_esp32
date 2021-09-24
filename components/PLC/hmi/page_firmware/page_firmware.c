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

#include "page_firmware.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
lv_obj_t *parent;

lv_obj_t *text_area_1_ev_0;
lv_obj_t *button_2_ev_0;
lv_obj_t *text_area_2_ev_0;
lv_obj_t *button_1_ev_0;

enum e_pFirmware {
    PGFW_BUTTON1,
    PGFW_BUTTON2,
    PGFW_TXAREA1,
    PGFW_TXAREA2
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGFW_BUTTON1:

                break;
            case PGFW_BUTTON2:
                hmi_switch_page(parent, PCONFIGURATION);
                break;
            case PGFW_TXAREA1:

                break;
            case PGFW_TXAREA2:

                break;
        }
    }
}

lv_obj_t* page_firmware_create() {
    parent = lv_obj_create(NULL, NULL);

    static lv_style_t text_area_1_s0;
    lv_style_init(&text_area_1_s0);
    lv_style_set_text_font(&text_area_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    static lv_style_t text_area_1_s1;
    lv_style_init(&text_area_1_s1);
    static lv_style_t text_area_1_s2;
    lv_style_init(&text_area_1_s2);
    static lv_style_t text_area_1_s3;
    lv_style_init(&text_area_1_s3);
    static lv_style_t text_area_1_s4;
    lv_style_init(&text_area_1_s4);
    lv_style_set_text_font(&text_area_1_s4, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s4, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s4, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s4, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s4, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s4, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_1_s4, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *text_area_1 = lv_textarea_create(parent, NULL);
    lv_obj_add_style(text_area_1, 0, &text_area_1_s0);
    lv_obj_add_style(text_area_1, 1, &text_area_1_s1);
    lv_obj_add_style(text_area_1, 2, &text_area_1_s2);
    lv_obj_add_style(text_area_1, 3, &text_area_1_s3);
    lv_obj_add_style(text_area_1, 4, &text_area_1_s4);
    lv_obj_set_hidden(text_area_1, false);
    lv_obj_set_click(text_area_1, true);
    lv_obj_set_drag(text_area_1, false);
    lv_obj_set_pos(text_area_1, 7, 7);
    lv_obj_set_size(text_area_1, 219, 30);
    lv_textarea_set_text(text_area_1, "FIRMWARE UPDATE");
    lv_textarea_set_placeholder_text(text_area_1, "");
    lv_textarea_set_cursor_blink_time(text_area_1, 144);
    lv_textarea_set_one_line(text_area_1, false);
    lv_textarea_set_pwd_mode(text_area_1, false);
    lv_textarea_set_max_length(text_area_1, 0);
    lv_textarea_set_scroll_propagation(text_area_1, false);
    lv_textarea_set_edge_flash(text_area_1, false);
    lv_textarea_set_cursor_hidden(text_area_1, true);
    PG_EVENT(PGFW_TXAREA1, text_area_1);
    text_area_1_ev_0 = text_area_1;

    static lv_style_t button_2_s0;
    lv_style_init(&button_2_s0);
    lv_style_set_radius(&button_2_s0, LV_STATE_DEFAULT, 10);
    static char *str_6f8ed88 = "BACK";

    lv_style_set_value_str(&button_2_s0, LV_STATE_DEFAULT, str_6f8ed88);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_CHECKED, 10);
    static char *str_31a232e = "BACK";

    lv_style_set_value_str(&button_2_s0, LV_STATE_CHECKED, str_31a232e);
    lv_style_set_value_font(&button_2_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_FOCUSED, 10);
    static char *str_67f16d1 = "BACK";

    lv_style_set_value_str(&button_2_s0, LV_STATE_FOCUSED, str_67f16d1);
    lv_style_set_value_font(&button_2_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_EDITED, 10);
    static char *str_0d1086c = "BACK";

    lv_style_set_value_str(&button_2_s0, LV_STATE_EDITED, str_0d1086c);
    lv_style_set_value_font(&button_2_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_HOVERED, 10);
    static char *str_d7e8d17 = "BACK";

    lv_style_set_value_str(&button_2_s0, LV_STATE_HOVERED, str_d7e8d17);
    lv_style_set_value_font(&button_2_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_PRESSED, 10);
    static char *str_c69cf2c = "BACK";

    lv_style_set_value_str(&button_2_s0, LV_STATE_PRESSED, str_c69cf2c);
    lv_style_set_value_font(&button_2_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_DISABLED, 10);
    static char *str_d2cb5a8 = "BACK";

    lv_style_set_value_str(&button_2_s0, LV_STATE_DISABLED, str_d2cb5a8);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_2 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_2, 0, &button_2_s0);
    lv_obj_set_hidden(button_2, false);
    lv_obj_set_click(button_2, true);
    lv_obj_set_drag(button_2, false);
    lv_obj_set_pos(button_2, 232, 7);
    lv_obj_set_size(button_2, 81, 30);
    lv_btn_set_checkable(button_2, false);
    lv_btn_set_fit(button_2, LV_FIT_NONE);
    PG_EVENT(PGFW_BUTTON2, button_2);
    button_2_ev_0 = button_2;

    static lv_style_t text_area_2_s0;
    lv_style_init(&text_area_2_s0);
    lv_style_set_text_font(&text_area_2_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    static lv_style_t text_area_2_s1;
    lv_style_init(&text_area_2_s1);
    static lv_style_t text_area_2_s2;
    lv_style_init(&text_area_2_s2);
    static lv_style_t text_area_2_s3;
    lv_style_init(&text_area_2_s3);
    static lv_style_t text_area_2_s4;
    lv_style_init(&text_area_2_s4);
    lv_style_set_text_font(&text_area_2_s4, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s4, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s4, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s4, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s4, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s4, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&text_area_2_s4, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *text_area_2 = lv_textarea_create(parent, NULL);
    lv_obj_add_style(text_area_2, 0, &text_area_2_s0);
    lv_obj_add_style(text_area_2, 1, &text_area_2_s1);
    lv_obj_add_style(text_area_2, 2, &text_area_2_s2);
    lv_obj_add_style(text_area_2, 3, &text_area_2_s3);
    lv_obj_add_style(text_area_2, 4, &text_area_2_s4);
    lv_obj_set_hidden(text_area_2, false);
    lv_obj_set_click(text_area_2, true);
    lv_obj_set_drag(text_area_2, false);
    lv_obj_set_pos(text_area_2, 8, 46);
    lv_obj_set_size(text_area_2, 305, 137);
    lv_textarea_set_text(text_area_2, "Text area");
    lv_textarea_set_placeholder_text(text_area_2, "");
    lv_textarea_set_cursor_blink_time(text_area_2, 144);
    lv_textarea_set_one_line(text_area_2, false);
    lv_textarea_set_pwd_mode(text_area_2, false);
    lv_textarea_set_max_length(text_area_2, 0);
    lv_textarea_set_scroll_propagation(text_area_2, false);
    lv_textarea_set_edge_flash(text_area_2, false);
    lv_textarea_set_cursor_hidden(text_area_2, true);
    PG_EVENT(PGFW_TXAREA2, text_area_2);
    text_area_2_ev_0 = text_area_2;

    static lv_style_t button_1_s0;
    lv_style_init(&button_1_s0);
    lv_style_set_radius(&button_1_s0, LV_STATE_DEFAULT, 10);
    static char *str_23a9e96 = "ENABLE";

    lv_style_set_value_str(&button_1_s0, LV_STATE_DEFAULT, str_23a9e96);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_CHECKED, 10);
    static char *str_b651780 = "ENABLE";

    lv_style_set_value_str(&button_1_s0, LV_STATE_CHECKED, str_b651780);
    lv_style_set_value_font(&button_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_FOCUSED, 10);
    static char *str_0581dab = "ENABLE";

    lv_style_set_value_str(&button_1_s0, LV_STATE_FOCUSED, str_0581dab);
    lv_style_set_value_font(&button_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_EDITED, 10);
    static char *str_4733874 = "ENABLE";

    lv_style_set_value_str(&button_1_s0, LV_STATE_EDITED, str_4733874);
    lv_style_set_value_font(&button_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_HOVERED, 10);
    static char *str_f11fb62 = "ENABLE";

    lv_style_set_value_str(&button_1_s0, LV_STATE_HOVERED, str_f11fb62);
    lv_style_set_value_font(&button_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_PRESSED, 10);
    static char *str_ee97cdc = "ENABLE";

    lv_style_set_value_str(&button_1_s0, LV_STATE_PRESSED, str_ee97cdc);
    lv_style_set_value_font(&button_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_DISABLED, 10);
    static char *str_251bfe1 = "ENABLE";

    lv_style_set_value_str(&button_1_s0, LV_STATE_DISABLED, str_251bfe1);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_1 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_1, 0, &button_1_s0);
    lv_obj_set_hidden(button_1, false);
    lv_obj_set_click(button_1, true);
    lv_obj_set_drag(button_1, false);
    lv_obj_set_pos(button_1, 10, 189);
    lv_obj_set_size(button_1, 305, 45);
    lv_btn_set_checkable(button_1, false);
    lv_btn_set_fit(button_1, LV_FIT_NONE);
    PG_EVENT(PGFW_BUTTON1, button_1);
    button_1_ev_0 = button_1;

    return parent;
}
