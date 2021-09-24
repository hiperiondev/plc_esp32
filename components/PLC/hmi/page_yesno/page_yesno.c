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

#include "page_yesno.h"
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
lv_obj_t* text_area_1_ev_0;

lv_obj_t* page_yesno_create(){
	parent = lv_obj_create(NULL, NULL);

	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	lv_style_set_radius(&button_1_s0,LV_STATE_DEFAULT,10);
	static char* str_9feec9b = "YES";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DEFAULT,str_9feec9b);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_CHECKED,10);
	static char* str_1a751a0 = "YES";

	lv_style_set_value_str(&button_1_s0,LV_STATE_CHECKED,str_1a751a0);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_FOCUSED,10);
	static char* str_a168caa = "YES";

	lv_style_set_value_str(&button_1_s0,LV_STATE_FOCUSED,str_a168caa);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_EDITED,10);
	static char* str_b37cf36 = "YES";

	lv_style_set_value_str(&button_1_s0,LV_STATE_EDITED,str_b37cf36);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_HOVERED,10);
	static char* str_2f598fe = "YES";

	lv_style_set_value_str(&button_1_s0,LV_STATE_HOVERED,str_2f598fe);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_PRESSED,10);
	static char* str_c63c197 = "YES";

	lv_style_set_value_str(&button_1_s0,LV_STATE_PRESSED,str_c63c197);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_DISABLED,10);
	static char* str_fa7a910 = "YES";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DISABLED,str_fa7a910);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_hidden(button_1, false);
	lv_obj_set_click(button_1, true);
	lv_obj_set_drag(button_1, false);
	lv_obj_set_pos(button_1, 13, 192);
	lv_obj_set_size(button_1, 100, 35);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);

	button_1_ev_0 = button_1;


	static lv_style_t button_2_s0;
	lv_style_init(&button_2_s0);
	lv_style_set_radius(&button_2_s0,LV_STATE_DEFAULT,10);
	static char* str_c4ef411 = "NO";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DEFAULT,str_c4ef411);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_CHECKED,10);
	static char* str_492102a = "NO";

	lv_style_set_value_str(&button_2_s0,LV_STATE_CHECKED,str_492102a);
	lv_style_set_value_font(&button_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_FOCUSED,10);
	static char* str_0268085 = "NO";

	lv_style_set_value_str(&button_2_s0,LV_STATE_FOCUSED,str_0268085);
	lv_style_set_value_font(&button_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_EDITED,10);
	static char* str_3425b09 = "NO";

	lv_style_set_value_str(&button_2_s0,LV_STATE_EDITED,str_3425b09);
	lv_style_set_value_font(&button_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_HOVERED,10);
	static char* str_305282b = "NO";

	lv_style_set_value_str(&button_2_s0,LV_STATE_HOVERED,str_305282b);
	lv_style_set_value_font(&button_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_PRESSED,10);
	static char* str_b87726e = "NO";

	lv_style_set_value_str(&button_2_s0,LV_STATE_PRESSED,str_b87726e);
	lv_style_set_value_font(&button_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_DISABLED,10);
	static char* str_558d893 = "NO";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DISABLED,str_558d893);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_2 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_2, 0, &button_2_s0);
	lv_obj_set_hidden(button_2, false);
	lv_obj_set_click(button_2, true);
	lv_obj_set_drag(button_2, false);
	lv_obj_set_pos(button_2, 209, 192);
	lv_obj_set_size(button_2, 100, 35);
	lv_btn_set_checkable(button_2, false);
	lv_btn_set_fit(button_2, LV_FIT_NONE);

	button_2_ev_0 = button_2;


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
	lv_obj_set_pos(text_area_1, 13, 11);
	lv_obj_set_size(text_area_1, 295, 171);
	lv_textarea_set_text(text_area_1, "Text area");
	lv_textarea_set_placeholder_text(text_area_1, "");
	lv_textarea_set_cursor_blink_time(text_area_1, 144);
	lv_textarea_set_one_line(text_area_1, false);
	lv_textarea_set_pwd_mode(text_area_1, false);
	lv_textarea_set_max_length(text_area_1, 0);
	lv_textarea_set_scroll_propagation(text_area_1, false);
	lv_textarea_set_edge_flash(text_area_1, false);
	lv_textarea_set_cursor_hidden(text_area_1, true);
	text_area_1_ev_0 = text_area_1;


	return parent;
}
