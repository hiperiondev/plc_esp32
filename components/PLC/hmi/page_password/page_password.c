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

#include "plc_globals.h"
#include "page_password.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
lv_obj_t *parent;

lv_obj_t* keyboard_1_ev_0;
lv_obj_t* text_area_1_ev_0;

enum e_pPassword {
    PGPASS_KBD1,
    PGPASS_TXAREA1
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    uint8_t id = *((uint8_t*) obj->user_data);
    if (event == LV_EVENT_CLICKED) {
        switch (id) {
            case PGPASS_TXAREA1:
                strcpy(settings.wifi.password, lv_textarea_get_text(obj));
                hmi_switch_page(parent, PWIFI);
                break;
            case PGPASS_KBD1:
                break;
        }
    }
}

lv_obj_t* page_password_create(){
	parent = lv_obj_create(NULL, NULL);

	static lv_style_t text_area_1_s0;
	lv_style_init(&text_area_1_s0);
	lv_style_set_text_font(&text_area_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	static lv_style_t text_area_1_s1;
	lv_style_init(&text_area_1_s1);
	static lv_style_t text_area_1_s2;
	lv_style_init(&text_area_1_s2);
	static lv_style_t text_area_1_s3;
	lv_style_init(&text_area_1_s3);
	static lv_style_t text_area_1_s4;
	lv_style_init(&text_area_1_s4);
	lv_style_set_text_font(&text_area_1_s4,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s4,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s4,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s4,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s4,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s4,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_1_s4,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *text_area_1 = lv_textarea_create(parent, NULL);
	lv_obj_add_style(text_area_1, 0, &text_area_1_s0);
	lv_obj_add_style(text_area_1, 1, &text_area_1_s1);
	lv_obj_add_style(text_area_1, 2, &text_area_1_s2);
	lv_obj_add_style(text_area_1, 3, &text_area_1_s3);
	lv_obj_add_style(text_area_1, 4, &text_area_1_s4);
	lv_obj_set_hidden(text_area_1, false);
	lv_obj_set_click(text_area_1, true);
	lv_obj_set_drag(text_area_1, false);
	lv_obj_set_pos(text_area_1, 3, 5);
	lv_obj_set_size(text_area_1, 311, 35);
	lv_textarea_set_text(text_area_1, "");
	lv_textarea_set_placeholder_text(text_area_1, "");
	lv_textarea_set_cursor_blink_time(text_area_1, 400);
	lv_textarea_set_one_line(text_area_1, false);
	lv_textarea_set_pwd_mode(text_area_1, false);
	lv_textarea_set_max_length(text_area_1, PASS_LENGTH);
	lv_textarea_set_scroll_propagation(text_area_1, false);
	lv_textarea_set_edge_flash(text_area_1, false);
	PG_EVENT(PGPASS_TXAREA1, text_area_1);
	text_area_1_ev_0 = text_area_1;

    static lv_style_t keyboard_1_s0;
    lv_style_init(&keyboard_1_s0);
    static lv_style_t keyboard_1_s1;
    lv_style_init(&keyboard_1_s1);
    lv_obj_t *keyboard_1 = lv_keyboard_create(parent, NULL);
    lv_obj_add_style(keyboard_1, 0, &keyboard_1_s0);
    lv_obj_add_style(keyboard_1, 1, &keyboard_1_s1);
    lv_obj_set_hidden(keyboard_1, false);
    lv_obj_set_click(keyboard_1, true);
    lv_obj_set_drag(keyboard_1, false);
    lv_obj_set_pos(keyboard_1, 0, 46);
    lv_obj_set_size(keyboard_1, 320, 194);
    //lv_keyboard_set_mode(keyboard_1, LV_KB_MODE_TEXT);
    lv_keyboard_set_cursor_manage(keyboard_1, true);
    lv_keyboard_set_textarea(keyboard_1, text_area_1);

    PG_EVENT(PGPASS_KBD1, keyboard_1);
    keyboard_1_ev_0 = keyboard_1;

	return parent;
}
