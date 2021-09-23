#include "page_wifi_scan.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

lv_obj_t* button_1_ev_0;
lv_obj_t* button_2_ev_0;
lv_obj_t* roller_1_ev_0;

enum e_pWifiScan {
    PGWIFI_SCAN_BUTTON1,
    PGWIFI_SCAN_BUTTON2,
    PGWIFI_SCAN_ROLLER1
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGWIFI_SCAN_BUTTON1:

                break;
            case PGWIFI_SCAN_BUTTON2:
                lv_scr_load(page_wifi);
                break;
            case PGWIFI_SCAN_ROLLER1:

                break;
        }
    }
}

lv_obj_t* page_wifi_scan_create(){
	lv_obj_t *parent = lv_obj_create(NULL, NULL);

	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	lv_style_set_radius(&button_1_s0,LV_STATE_DEFAULT,10);
	static char* str_6627109 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DEFAULT,str_6627109);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_CHECKED,10);
	static char* str_5c83fa5 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_CHECKED,str_5c83fa5);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_FOCUSED,10);
	static char* str_1ac5d93 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_FOCUSED,str_1ac5d93);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_EDITED,10);
	static char* str_fd907f8 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_EDITED,str_fd907f8);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_HOVERED,10);
	static char* str_07c9862 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_HOVERED,str_07c9862);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_PRESSED,10);
	static char* str_a5e1b27 = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_PRESSED,str_a5e1b27);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_DISABLED,10);
	static char* str_e58baae = "SCAN";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DISABLED,str_e58baae);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_hidden(button_1, false);
	lv_obj_set_click(button_1, true);
	lv_obj_set_drag(button_1, false);
	lv_obj_set_pos(button_1, 6, 197);
	lv_obj_set_size(button_1, 100, 35);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);
	PG_EVENT(PGWIFI_SCAN_BUTTON1, button_1);
	button_1_ev_0 = button_1;


	static lv_style_t button_2_s0;
	lv_style_init(&button_2_s0);
	lv_style_set_radius(&button_2_s0,LV_STATE_DEFAULT,10);
	static char* str_86d8d96 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DEFAULT,str_86d8d96);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_CHECKED,10);
	static char* str_e82d282 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_CHECKED,str_e82d282);
	lv_style_set_value_font(&button_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_FOCUSED,10);
	static char* str_5c59882 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_FOCUSED,str_5c59882);
	lv_style_set_value_font(&button_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_EDITED,10);
	static char* str_b5d1c3b = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_EDITED,str_b5d1c3b);
	lv_style_set_value_font(&button_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_HOVERED,10);
	static char* str_db0b5e4 = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_HOVERED,str_db0b5e4);
	lv_style_set_value_font(&button_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_PRESSED,10);
	static char* str_7349efa = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_PRESSED,str_7349efa);
	lv_style_set_value_font(&button_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_DISABLED,10);
	static char* str_21648ea = "BACK";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DISABLED,str_21648ea);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_2 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_2, 0, &button_2_s0);
	lv_obj_set_hidden(button_2, false);
	lv_obj_set_click(button_2, true);
	lv_obj_set_drag(button_2, false);
	lv_obj_set_pos(button_2, 217, 196);
	lv_obj_set_size(button_2, 100, 35);
	lv_btn_set_checkable(button_2, false);
	lv_btn_set_fit(button_2, LV_FIT_NONE);
	PG_EVENT(PGWIFI_SCAN_BUTTON2, button_2);
	button_2_ev_0 = button_2;


	static lv_style_t roller_1_s0;
	lv_style_init(&roller_1_s0);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	static lv_style_t roller_1_s1;
	lv_style_init(&roller_1_s1);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *roller_1 = lv_roller_create(parent, NULL);
	lv_obj_add_style(roller_1, 0, &roller_1_s0);
	lv_obj_add_style(roller_1, 3, &roller_1_s1);
	lv_obj_set_hidden(roller_1, false);
	lv_obj_set_click(roller_1, true);
	lv_obj_set_drag(roller_1, false);
	lv_obj_set_pos(roller_1, 6, 6);
	lv_obj_set_size(roller_1, 310, 150);
	lv_roller_set_options(roller_1, "                            Option 1                          \nOption 2\nOption 3\nOption 4", LV_ROLLER_MODE_NORMAL);
	lv_roller_set_align(roller_1, LV_LABEL_ALIGN_CENTER);
	lv_roller_set_visible_row_count(roller_1, 4);
	lv_roller_set_visible_row_count(roller_1, 4);
	lv_roller_set_anim_time(roller_1,200);
	lv_roller_set_auto_fit(roller_1, true);
	PG_EVENT(PGWIFI_SCAN_ROLLER1, roller_1);
	roller_1_ev_0 = roller_1;


	return parent;
}
