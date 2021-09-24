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

#include "page_switches.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
lv_obj_t *parent;

lv_obj_t* button_1_ev_0;
lv_obj_t* button_2_ev_0;
lv_obj_t* button_3_ev_0;
lv_obj_t* button_4_ev_0;
lv_obj_t* button_5_ev_0;
lv_obj_t* button_6_ev_0;
lv_obj_t* button_7_ev_0;
lv_obj_t* button_8_ev_0;
lv_obj_t* button_9_ev_0;
lv_obj_t* button_10_ev_0;
lv_obj_t* button_11_ev_0;
lv_obj_t* button_12_ev_0;
lv_obj_t* button_13_ev_0;
lv_obj_t* button_14_ev_0;
lv_obj_t* label_1_ev_0;
lv_obj_t* label_2_ev_0;
lv_obj_t* label_3_ev_0;
lv_obj_t* label_4_ev_0;
lv_obj_t* label_5_ev_0;
lv_obj_t* label_6_ev_0;
lv_obj_t* label_7_ev_0;
lv_obj_t* label_8_ev_0;
lv_obj_t* label_9_ev_0;

enum e_pSwitches{
    PGSWT_BUTTON1,
    PGSWT_BUTTON2,
    PGSWT_BUTTON3,
    PGSWT_BUTTON4,
    PGSWT_BUTTON5,
    PGSWT_BUTTON6,
    PGSWT_BUTTON7,
    PGSWT_BUTTON8,
    PGSWT_BUTTON9,
    PGSWT_BUTTON10,
    PGSWT_BUTTON11,
    PGSWT_BUTTON12,
    PGSWT_BUTTON13,
    PGSWT_BUTTON14
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGSWT_BUTTON1:
                hmi_switch_page(parent, PMAIN);
                break;
            case PGSWT_BUTTON2:

                break;
            case PGSWT_BUTTON3:

                break;
            case PGSWT_BUTTON4:

                break;
            case PGSWT_BUTTON5:

                break;
            case PGSWT_BUTTON6:

                break;
            case PGSWT_BUTTON7:

                break;
            case PGSWT_BUTTON8:

                break;
            case PGSWT_BUTTON9:

                break;
            case PGSWT_BUTTON10:

                break;
            case PGSWT_BUTTON11:

                break;
            case PGSWT_BUTTON12:

                break;
            case PGSWT_BUTTON13:

                break;
            case PGSWT_BUTTON14:

                break;
        }
    }
}

lv_obj_t* page_switches_create(){
	parent = lv_obj_create(NULL, NULL);

	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	lv_style_set_radius(&button_1_s0,LV_STATE_DEFAULT,10);
	static char* str_df19dba = "HOME";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DEFAULT,str_df19dba);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_CHECKED,10);
	static char* str_25b20a4 = "HOME";

	lv_style_set_value_str(&button_1_s0,LV_STATE_CHECKED,str_25b20a4);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_FOCUSED,10);
	static char* str_586902d = "HOME";

	lv_style_set_value_str(&button_1_s0,LV_STATE_FOCUSED,str_586902d);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_EDITED,10);
	static char* str_1e08df9 = "HOME";

	lv_style_set_value_str(&button_1_s0,LV_STATE_EDITED,str_1e08df9);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_HOVERED,10);
	static char* str_51d7ae8 = "HOME";

	lv_style_set_value_str(&button_1_s0,LV_STATE_HOVERED,str_51d7ae8);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_PRESSED,10);
	static char* str_3bb6749 = "HOME";

	lv_style_set_value_str(&button_1_s0,LV_STATE_PRESSED,str_3bb6749);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_DISABLED,10);
	static char* str_8c8cf64 = "HOME";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DISABLED,str_8c8cf64);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_hidden(button_1, false);
	lv_obj_set_click(button_1, true);
	lv_obj_set_drag(button_1, false);
	lv_obj_set_pos(button_1, 0, 0);
	lv_obj_set_size(button_1, 64, 35);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON1, button_1);
	button_1_ev_0 = button_1;


	static lv_style_t button_2_s0;
	lv_style_init(&button_2_s0);
	lv_style_set_radius(&button_2_s0,LV_STATE_DEFAULT,10);
	static char* str_32719b0 = "LEDS";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DEFAULT,str_32719b0);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_CHECKED,10);
	static char* str_b5c6d54 = "LEDS";

	lv_style_set_value_str(&button_2_s0,LV_STATE_CHECKED,str_b5c6d54);
	lv_style_set_value_font(&button_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_FOCUSED,10);
	static char* str_1ca7c4f = "LEDS";

	lv_style_set_value_str(&button_2_s0,LV_STATE_FOCUSED,str_1ca7c4f);
	lv_style_set_value_font(&button_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_EDITED,10);
	static char* str_141a7ba = "LEDS";

	lv_style_set_value_str(&button_2_s0,LV_STATE_EDITED,str_141a7ba);
	lv_style_set_value_font(&button_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_HOVERED,10);
	static char* str_6495213 = "LEDS";

	lv_style_set_value_str(&button_2_s0,LV_STATE_HOVERED,str_6495213);
	lv_style_set_value_font(&button_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_PRESSED,10);
	static char* str_e98508e = "LEDS";

	lv_style_set_value_str(&button_2_s0,LV_STATE_PRESSED,str_e98508e);
	lv_style_set_value_font(&button_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_DISABLED,10);
	static char* str_951138d = "LEDS";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DISABLED,str_951138d);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_2 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_2, 0, &button_2_s0);
	lv_obj_set_hidden(button_2, false);
	lv_obj_set_click(button_2, true);
	lv_obj_set_drag(button_2, false);
	lv_obj_set_pos(button_2, 266, 0);
	lv_obj_set_size(button_2, 53, 35);
	lv_btn_set_checkable(button_2, false);
	lv_btn_set_fit(button_2, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON2, button_2);
	button_2_ev_0 = button_2;


	static lv_style_t button_3_s0;
	lv_style_init(&button_3_s0);
	lv_style_set_radius(&button_3_s0,LV_STATE_DEFAULT,10);
	static char* str_b4a917f = "I/O";

	lv_style_set_value_str(&button_3_s0,LV_STATE_DEFAULT,str_b4a917f);
	lv_style_set_value_font(&button_3_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_CHECKED,10);
	static char* str_f05e6f7 = "I/O";

	lv_style_set_value_str(&button_3_s0,LV_STATE_CHECKED,str_f05e6f7);
	lv_style_set_value_font(&button_3_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_FOCUSED,10);
	static char* str_6a5c4b3 = "I/O";

	lv_style_set_value_str(&button_3_s0,LV_STATE_FOCUSED,str_6a5c4b3);
	lv_style_set_value_font(&button_3_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_EDITED,10);
	static char* str_52ca160 = "I/O";

	lv_style_set_value_str(&button_3_s0,LV_STATE_EDITED,str_52ca160);
	lv_style_set_value_font(&button_3_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_HOVERED,10);
	static char* str_025d462 = "I/O";

	lv_style_set_value_str(&button_3_s0,LV_STATE_HOVERED,str_025d462);
	lv_style_set_value_font(&button_3_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_PRESSED,10);
	static char* str_c316ac8 = "I/O";

	lv_style_set_value_str(&button_3_s0,LV_STATE_PRESSED,str_c316ac8);
	lv_style_set_value_font(&button_3_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_DISABLED,10);
	static char* str_8821024 = "I/O";

	lv_style_set_value_str(&button_3_s0,LV_STATE_DISABLED,str_8821024);
	lv_style_set_value_font(&button_3_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_3 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_3, 0, &button_3_s0);
	lv_obj_set_hidden(button_3, false);
	lv_obj_set_click(button_3, true);
	lv_obj_set_drag(button_3, false);
	lv_obj_set_pos(button_3, 215, 0);
	lv_obj_set_size(button_3, 53, 35);
	lv_btn_set_checkable(button_3, false);
	lv_btn_set_fit(button_3, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON3, button_3);
	button_3_ev_0 = button_3;


	static lv_style_t button_4_s0;
	lv_style_init(&button_4_s0);
	lv_style_set_radius(&button_4_s0,LV_STATE_DEFAULT,10);
	static char* str_a42b5f1 = "POT";

	lv_style_set_value_str(&button_4_s0,LV_STATE_DEFAULT,str_a42b5f1);
	lv_style_set_value_font(&button_4_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_CHECKED,10);
	static char* str_6632d02 = "POT";

	lv_style_set_value_str(&button_4_s0,LV_STATE_CHECKED,str_6632d02);
	lv_style_set_value_font(&button_4_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_FOCUSED,10);
	static char* str_a077426 = "POT";

	lv_style_set_value_str(&button_4_s0,LV_STATE_FOCUSED,str_a077426);
	lv_style_set_value_font(&button_4_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_EDITED,10);
	static char* str_26a68a6 = "POT";

	lv_style_set_value_str(&button_4_s0,LV_STATE_EDITED,str_26a68a6);
	lv_style_set_value_font(&button_4_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_HOVERED,10);
	static char* str_e89d3c3 = "POT";

	lv_style_set_value_str(&button_4_s0,LV_STATE_HOVERED,str_e89d3c3);
	lv_style_set_value_font(&button_4_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_PRESSED,10);
	static char* str_1fea02d = "POT";

	lv_style_set_value_str(&button_4_s0,LV_STATE_PRESSED,str_1fea02d);
	lv_style_set_value_font(&button_4_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_DISABLED,10);
	static char* str_e630ddc = "POT";

	lv_style_set_value_str(&button_4_s0,LV_STATE_DISABLED,str_e630ddc);
	lv_style_set_value_font(&button_4_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_4 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_4, 0, &button_4_s0);
	lv_obj_set_hidden(button_4, false);
	lv_obj_set_click(button_4, true);
	lv_obj_set_drag(button_4, false);
	lv_obj_set_pos(button_4, 164, 0);
	lv_obj_set_size(button_4, 53, 35);
	lv_btn_set_checkable(button_4, false);
	lv_btn_set_fit(button_4, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON4, button_4);
	button_4_ev_0 = button_4;


	static lv_style_t button_5_s0;
	lv_style_init(&button_5_s0);
	lv_style_set_radius(&button_5_s0,LV_STATE_DEFAULT,10);
	static char* str_9e53c17 = "BUT";

	lv_style_set_value_str(&button_5_s0,LV_STATE_DEFAULT,str_9e53c17);
	lv_style_set_value_font(&button_5_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_CHECKED,10);
	static char* str_9e899ad = "BUT";

	lv_style_set_value_str(&button_5_s0,LV_STATE_CHECKED,str_9e899ad);
	lv_style_set_value_font(&button_5_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_FOCUSED,10);
	static char* str_d1a1397 = "BUT";

	lv_style_set_value_str(&button_5_s0,LV_STATE_FOCUSED,str_d1a1397);
	lv_style_set_value_font(&button_5_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_EDITED,10);
	static char* str_3481b2f = "BUT";

	lv_style_set_value_str(&button_5_s0,LV_STATE_EDITED,str_3481b2f);
	lv_style_set_value_font(&button_5_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_HOVERED,10);
	static char* str_a4a286e = "BUT";

	lv_style_set_value_str(&button_5_s0,LV_STATE_HOVERED,str_a4a286e);
	lv_style_set_value_font(&button_5_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_PRESSED,10);
	static char* str_a32b22c = "BUT";

	lv_style_set_value_str(&button_5_s0,LV_STATE_PRESSED,str_a32b22c);
	lv_style_set_value_font(&button_5_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_DISABLED,10);
	static char* str_f07910c = "BUT";

	lv_style_set_value_str(&button_5_s0,LV_STATE_DISABLED,str_f07910c);
	lv_style_set_value_font(&button_5_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_5 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_5, 0, &button_5_s0);
	lv_obj_set_hidden(button_5, false);
	lv_obj_set_click(button_5, true);
	lv_obj_set_drag(button_5, false);
	lv_obj_set_pos(button_5, 113, 0);
	lv_obj_set_size(button_5, 53, 35);
	lv_btn_set_checkable(button_5, false);
	lv_btn_set_fit(button_5, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON5, button_5);
	button_5_ev_0 = button_5;


	static lv_style_t button_6_s0;
	lv_style_init(&button_6_s0);
	lv_style_set_radius(&button_6_s0,LV_STATE_DEFAULT,10);
	static char* str_06c81bf = "SWI";

	lv_style_set_value_str(&button_6_s0,LV_STATE_DEFAULT,str_06c81bf);
	lv_style_set_value_font(&button_6_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_6_s0,LV_STATE_CHECKED,10);
	static char* str_7071fed = "SWI";

	lv_style_set_value_str(&button_6_s0,LV_STATE_CHECKED,str_7071fed);
	lv_style_set_value_font(&button_6_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_6_s0,LV_STATE_FOCUSED,10);
	static char* str_d214011 = "SWI";

	lv_style_set_value_str(&button_6_s0,LV_STATE_FOCUSED,str_d214011);
	lv_style_set_value_font(&button_6_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_6_s0,LV_STATE_EDITED,10);
	static char* str_52afbf7 = "SWI";

	lv_style_set_value_str(&button_6_s0,LV_STATE_EDITED,str_52afbf7);
	lv_style_set_value_font(&button_6_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_6_s0,LV_STATE_HOVERED,10);
	static char* str_e86bd66 = "SWI";

	lv_style_set_value_str(&button_6_s0,LV_STATE_HOVERED,str_e86bd66);
	lv_style_set_value_font(&button_6_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_6_s0,LV_STATE_PRESSED,10);
	static char* str_e45915c = "SWI";

	lv_style_set_value_str(&button_6_s0,LV_STATE_PRESSED,str_e45915c);
	lv_style_set_value_font(&button_6_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_6_s0,LV_STATE_DISABLED,10);
	static char* str_2358cc2 = "SWI";

	lv_style_set_value_str(&button_6_s0,LV_STATE_DISABLED,str_2358cc2);
	lv_style_set_value_font(&button_6_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_6 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_6, 0, &button_6_s0);
	lv_obj_set_hidden(button_6, false);
	lv_obj_set_click(button_6, true);
	lv_obj_set_drag(button_6, false);
	lv_obj_set_pos(button_6, 62, 0);
	lv_obj_set_size(button_6, 53, 35);
	lv_btn_set_checkable(button_6, false);
	lv_btn_set_fit(button_6, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON6, button_6);
	button_6_ev_0 = button_6;


	static lv_style_t label_1_s0;
	lv_style_init(&label_1_s0);
	lv_style_set_text_font(&label_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_1 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_1, 0, &label_1_s0);
	lv_obj_set_hidden(label_1, false);
	lv_obj_set_click(label_1, false);
	lv_obj_set_drag(label_1, false);
	lv_label_set_text(label_1,"SWITCHES");
	lv_obj_set_pos(label_1, 123, 41);
	lv_obj_set_size(label_1, 77, 19);

	label_1_ev_0 = label_1;


	static lv_style_t button_7_s0;
	lv_style_init(&button_7_s0);
	lv_style_set_value_font(&button_7_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_7_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_7_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_7_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_7_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_7_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_7_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_7 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_7, 0, &button_7_s0);
	lv_obj_set_hidden(button_7, false);
	lv_obj_set_click(button_7, true);
	lv_obj_set_drag(button_7, false);
	lv_obj_set_pos(button_7, 13, 86);
	lv_obj_set_size(button_7, 60, 60);
	lv_btn_set_checkable(button_7, false);
	lv_btn_set_fit(button_7, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON7, button_7);
	button_7_ev_0 = button_7;


	static lv_style_t button_8_s0;
	lv_style_init(&button_8_s0);
	lv_style_set_value_font(&button_8_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_8_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_8_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_8_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_8_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_8_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_8_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_8 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_8, 0, &button_8_s0);
	lv_obj_set_hidden(button_8, false);
	lv_obj_set_click(button_8, true);
	lv_obj_set_drag(button_8, false);
	lv_obj_set_pos(button_8, 251, 86);
	lv_obj_set_size(button_8, 60, 60);
	lv_btn_set_checkable(button_8, false);
	lv_btn_set_fit(button_8, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON8, button_8);
	button_8_ev_0 = button_8;


	static lv_style_t button_9_s0;
	lv_style_init(&button_9_s0);
	lv_style_set_value_font(&button_9_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_9_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_9_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_9_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_9_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_9_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_9_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_9 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_9, 0, &button_9_s0);
	lv_obj_set_hidden(button_9, false);
	lv_obj_set_click(button_9, true);
	lv_obj_set_drag(button_9, false);
	lv_obj_set_pos(button_9, 94, 86);
	lv_obj_set_size(button_9, 60, 60);
	lv_btn_set_checkable(button_9, false);
	lv_btn_set_fit(button_9, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON9, button_9);
	button_9_ev_0 = button_9;


	static lv_style_t button_10_s0;
	lv_style_init(&button_10_s0);
	lv_style_set_value_font(&button_10_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_10_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_10_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_10_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_10_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_10_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_10_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_10 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_10, 0, &button_10_s0);
	lv_obj_set_hidden(button_10, false);
	lv_obj_set_click(button_10, true);
	lv_obj_set_drag(button_10, false);
	lv_obj_set_pos(button_10, 174, 86);
	lv_obj_set_size(button_10, 60, 60);
	lv_btn_set_checkable(button_10, false);
	lv_btn_set_fit(button_10, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON10, button_10);
	button_10_ev_0 = button_10;


	static lv_style_t button_11_s0;
	lv_style_init(&button_11_s0);
	lv_style_set_value_font(&button_11_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_11_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_11_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_11_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_11_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_11_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_11_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_11 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_11, 0, &button_11_s0);
	lv_obj_set_hidden(button_11, false);
	lv_obj_set_click(button_11, true);
	lv_obj_set_drag(button_11, false);
	lv_obj_set_pos(button_11, 13, 173);
	lv_obj_set_size(button_11, 60, 60);
	lv_btn_set_checkable(button_11, false);
	lv_btn_set_fit(button_11, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON11, button_11);
	button_11_ev_0 = button_11;


	static lv_style_t button_12_s0;
	lv_style_init(&button_12_s0);
	lv_style_set_value_font(&button_12_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_12_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_12_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_12_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_12_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_12_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_12_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_12 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_12, 0, &button_12_s0);
	lv_obj_set_hidden(button_12, false);
	lv_obj_set_click(button_12, true);
	lv_obj_set_drag(button_12, false);
	lv_obj_set_pos(button_12, 94, 175);
	lv_obj_set_size(button_12, 60, 60);
	lv_btn_set_checkable(button_12, false);
	lv_btn_set_fit(button_12, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON12, button_12);
	button_12_ev_0 = button_12;


	static lv_style_t button_13_s0;
	lv_style_init(&button_13_s0);
	lv_style_set_value_font(&button_13_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_13_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_13_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_13_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_13_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_13_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_13_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_13 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_13, 0, &button_13_s0);
	lv_obj_set_hidden(button_13, false);
	lv_obj_set_click(button_13, true);
	lv_obj_set_drag(button_13, false);
	lv_obj_set_pos(button_13, 174, 175);
	lv_obj_set_size(button_13, 60, 60);
	lv_btn_set_checkable(button_13, false);
	lv_btn_set_fit(button_13, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON13, button_13);
	button_13_ev_0 = button_13;


	static lv_style_t button_14_s0;
	lv_style_init(&button_14_s0);
	lv_style_set_value_font(&button_14_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_value_font(&button_14_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_14_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_14_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_14_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_14_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_value_font(&button_14_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_14 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_14, 0, &button_14_s0);
	lv_obj_set_hidden(button_14, false);
	lv_obj_set_click(button_14, true);
	lv_obj_set_drag(button_14, false);
	lv_obj_set_pos(button_14, 251, 175);
	lv_obj_set_size(button_14, 60, 60);
	lv_btn_set_checkable(button_14, false);
	lv_btn_set_fit(button_14, LV_FIT_NONE);
	PG_EVENT(PGSWT_BUTTON14, button_14);
	button_14_ev_0 = button_14;


	static lv_style_t label_2_s0;
	lv_style_init(&label_2_s0);
	lv_style_set_text_font(&label_2_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_2 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_2, 0, &label_2_s0);
	lv_obj_set_hidden(label_2, false);
	lv_obj_set_click(label_2, false);
	lv_obj_set_drag(label_2, false);
	lv_label_set_text(label_2,"M500");
	lv_obj_set_pos(label_2, 23, 67);
	lv_obj_set_size(label_2, 41, 19);

	label_2_ev_0 = label_2;


	static lv_style_t label_3_s0;
	lv_style_init(&label_3_s0);
	lv_style_set_text_font(&label_3_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_3_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_3_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_3_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_3_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_3_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_3_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_3 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_3, 0, &label_3_s0);
	lv_obj_set_hidden(label_3, false);
	lv_obj_set_click(label_3, false);
	lv_obj_set_drag(label_3, false);
	lv_label_set_text(label_3,"M501");
	lv_obj_set_pos(label_3, 103, 67);
	lv_obj_set_size(label_3, 41, 19);

	label_3_ev_0 = label_3;


	static lv_style_t label_4_s0;
	lv_style_init(&label_4_s0);
	lv_style_set_text_font(&label_4_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_4_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_4_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_4_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_4_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_4_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_4_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_4 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_4, 0, &label_4_s0);
	lv_obj_set_hidden(label_4, false);
	lv_obj_set_click(label_4, false);
	lv_obj_set_drag(label_4, false);
	lv_label_set_text(label_4,"M502");
	lv_obj_set_pos(label_4, 183, 67);
	lv_obj_set_size(label_4, 41, 19);

	label_4_ev_0 = label_4;


	static lv_style_t label_5_s0;
	lv_style_init(&label_5_s0);
	lv_style_set_text_font(&label_5_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_5_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_5_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_5_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_5_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_5_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_5_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_5 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_5, 0, &label_5_s0);
	lv_obj_set_hidden(label_5, false);
	lv_obj_set_click(label_5, false);
	lv_obj_set_drag(label_5, false);
	lv_label_set_text(label_5,"M503");
	lv_obj_set_pos(label_5, 260, 67);
	lv_obj_set_size(label_5, 41, 19);

	label_5_ev_0 = label_5;


	static lv_style_t label_6_s0;
	lv_style_init(&label_6_s0);
	lv_style_set_text_font(&label_6_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_6_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_6_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_6_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_6_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_6_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_6_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_6 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_6, 0, &label_6_s0);
	lv_obj_set_hidden(label_6, false);
	lv_obj_set_click(label_6, false);
	lv_obj_set_drag(label_6, false);
	lv_label_set_text(label_6,"M504");
	lv_obj_set_pos(label_6, 23, 153);
	lv_obj_set_size(label_6, 41, 19);

	label_6_ev_0 = label_6;


	static lv_style_t label_7_s0;
	lv_style_init(&label_7_s0);
	lv_style_set_text_font(&label_7_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_7_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_7_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_7_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_7_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_7_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_7_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_7 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_7, 0, &label_7_s0);
	lv_obj_set_hidden(label_7, false);
	lv_obj_set_click(label_7, false);
	lv_obj_set_drag(label_7, false);
	lv_label_set_text(label_7,"M505");
	lv_obj_set_pos(label_7, 105, 155);
	lv_obj_set_size(label_7, 41, 19);

	label_7_ev_0 = label_7;


	static lv_style_t label_8_s0;
	lv_style_init(&label_8_s0);
	lv_style_set_text_font(&label_8_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_8_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_8_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_8_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_8_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_8_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_8_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_8 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_8, 0, &label_8_s0);
	lv_obj_set_hidden(label_8, false);
	lv_obj_set_click(label_8, false);
	lv_obj_set_drag(label_8, false);
	lv_label_set_text(label_8,"M506");
	lv_obj_set_pos(label_8, 183, 155);
	lv_obj_set_size(label_8, 41, 19);

	label_8_ev_0 = label_8;


	static lv_style_t label_9_s0;
	lv_style_init(&label_9_s0);
	lv_style_set_text_font(&label_9_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_9_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_9_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_9_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_9_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_9_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_9_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_9 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_9, 0, &label_9_s0);
	lv_obj_set_hidden(label_9, false);
	lv_obj_set_click(label_9, false);
	lv_obj_set_drag(label_9, false);
	lv_label_set_text(label_9,"M507");
	lv_obj_set_pos(label_9, 260, 155);
	lv_obj_set_size(label_9, 41, 19);

	label_9_ev_0 = label_9;


	return parent;
}
