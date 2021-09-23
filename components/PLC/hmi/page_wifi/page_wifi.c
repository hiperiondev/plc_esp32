#include "page_wifi.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

lv_obj_t* button_1_ev_0;
lv_obj_t* button_2_ev_0;
lv_obj_t* button_3_ev_0;
lv_obj_t* button_4_ev_0;
lv_obj_t* text_area_1_ev_0;
lv_obj_t* text_area_2_ev_0;
lv_obj_t* text_area_3_ev_0;

enum e_pWifi {
    PGWIFI_BUTTON1,
    PGWIFI_BUTTON2,
    PGWIFI_BUTTON3,
    PGWIFI_BUTTON4,
    PGWIFI_TXAREA1,
    PGWIFI_TXAREA2,
    PGWIFI_TXAREA3,
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGWIFI_BUTTON1: //wifi on/off (toggle)

                break;
            case PGWIFI_BUTTON2:
                lv_scr_load(page_main);
                break;

            case PGWIFI_BUTTON3:
                lv_scr_load(page_wifi_scan);
                break;
            case PGWIFI_BUTTON4:
                lv_scr_load(page_configuration);
                break;
            case PGWIFI_TXAREA1:

                break;
            case PGWIFI_TXAREA2:

                break;
            case PGWIFI_TXAREA3:

                break;
        }
    }
}

lv_obj_t* page_wifi_create(){
	lv_obj_t *parent = lv_obj_create(NULL, NULL);

	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	lv_style_set_radius(&button_1_s0,LV_STATE_DEFAULT,10);
	static char* str_e15a502 = "WIFI";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DEFAULT,str_e15a502);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_CHECKED,10);
	static char* str_2d36cb2 = "WIFI";

	lv_style_set_value_str(&button_1_s0,LV_STATE_CHECKED,str_2d36cb2);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_FOCUSED,10);
	static char* str_de426ae = "WIFI";

	lv_style_set_value_str(&button_1_s0,LV_STATE_FOCUSED,str_de426ae);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_EDITED,10);
	static char* str_5351482 = "WIFI";

	lv_style_set_value_str(&button_1_s0,LV_STATE_EDITED,str_5351482);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_HOVERED,10);
	static char* str_3a9bf0b = "WIFI";

	lv_style_set_value_str(&button_1_s0,LV_STATE_HOVERED,str_3a9bf0b);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_PRESSED,10);
	static char* str_70bb635 = "WIFI";

	lv_style_set_value_str(&button_1_s0,LV_STATE_PRESSED,str_70bb635);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_1_s0,LV_STATE_DISABLED,10);
	static char* str_77fdadd = "WIFI";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DISABLED,str_77fdadd);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_hidden(button_1, false);
	lv_obj_set_click(button_1, true);
	lv_obj_set_drag(button_1, false);
	lv_obj_set_pos(button_1, 240, 9);
	lv_obj_set_size(button_1, 75, 53);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);
	PG_EVENT(PGWIFI_BUTTON1, button_1);
	button_1_ev_0 = button_1;


	static lv_style_t button_2_s0;
	lv_style_init(&button_2_s0);
	lv_style_set_radius(&button_2_s0,LV_STATE_DEFAULT,10);
	static char* str_932e6d4 = "HOME";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DEFAULT,str_932e6d4);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_CHECKED,10);
	static char* str_3e4d5f2 = "HOME";

	lv_style_set_value_str(&button_2_s0,LV_STATE_CHECKED,str_3e4d5f2);
	lv_style_set_value_font(&button_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_FOCUSED,10);
	static char* str_2e03e43 = "HOME";

	lv_style_set_value_str(&button_2_s0,LV_STATE_FOCUSED,str_2e03e43);
	lv_style_set_value_font(&button_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_EDITED,10);
	static char* str_0787acc = "HOME";

	lv_style_set_value_str(&button_2_s0,LV_STATE_EDITED,str_0787acc);
	lv_style_set_value_font(&button_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_HOVERED,10);
	static char* str_644accf = "HOME";

	lv_style_set_value_str(&button_2_s0,LV_STATE_HOVERED,str_644accf);
	lv_style_set_value_font(&button_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_PRESSED,10);
	static char* str_3203455 = "HOME";

	lv_style_set_value_str(&button_2_s0,LV_STATE_PRESSED,str_3203455);
	lv_style_set_value_font(&button_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_2_s0,LV_STATE_DISABLED,10);
	static char* str_e787ebb = "HOME";

	lv_style_set_value_str(&button_2_s0,LV_STATE_DISABLED,str_e787ebb);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_2 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_2, 0, &button_2_s0);
	lv_obj_set_hidden(button_2, false);
	lv_obj_set_click(button_2, true);
	lv_obj_set_drag(button_2, false);
	lv_obj_set_pos(button_2, 240, 182);
	lv_obj_set_size(button_2, 75, 53);
	lv_btn_set_checkable(button_2, false);
	lv_btn_set_fit(button_2, LV_FIT_NONE);
	PG_EVENT(PGWIFI_BUTTON2, button_2);
	button_2_ev_0 = button_2;


	static lv_style_t button_3_s0;
	lv_style_init(&button_3_s0);
	lv_style_set_radius(&button_3_s0,LV_STATE_DEFAULT,10);
	static char* str_0172de2 = "SCAN";

	lv_style_set_value_str(&button_3_s0,LV_STATE_DEFAULT,str_0172de2);
	lv_style_set_value_font(&button_3_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_CHECKED,10);
	static char* str_f6ec9eb = "SCAN";

	lv_style_set_value_str(&button_3_s0,LV_STATE_CHECKED,str_f6ec9eb);
	lv_style_set_value_font(&button_3_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_FOCUSED,10);
	static char* str_a3ad298 = "SCAN";

	lv_style_set_value_str(&button_3_s0,LV_STATE_FOCUSED,str_a3ad298);
	lv_style_set_value_font(&button_3_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_EDITED,10);
	static char* str_6a68b24 = "SCAN";

	lv_style_set_value_str(&button_3_s0,LV_STATE_EDITED,str_6a68b24);
	lv_style_set_value_font(&button_3_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_HOVERED,10);
	static char* str_6c71437 = "SCAN";

	lv_style_set_value_str(&button_3_s0,LV_STATE_HOVERED,str_6c71437);
	lv_style_set_value_font(&button_3_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_PRESSED,10);
	static char* str_df919b7 = "SCAN";

	lv_style_set_value_str(&button_3_s0,LV_STATE_PRESSED,str_df919b7);
	lv_style_set_value_font(&button_3_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_3_s0,LV_STATE_DISABLED,10);
	static char* str_6ba0440 = "SCAN";

	lv_style_set_value_str(&button_3_s0,LV_STATE_DISABLED,str_6ba0440);
	lv_style_set_value_font(&button_3_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_3 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_3, 0, &button_3_s0);
	lv_obj_set_hidden(button_3, false);
	lv_obj_set_click(button_3, true);
	lv_obj_set_drag(button_3, false);
	lv_obj_set_pos(button_3, 240, 67);
	lv_obj_set_size(button_3, 75, 53);
	lv_btn_set_checkable(button_3, false);
	lv_btn_set_fit(button_3, LV_FIT_NONE);
	PG_EVENT(PGWIFI_BUTTON3, button_3);
	button_3_ev_0 = button_3;


	static lv_style_t button_4_s0;
	lv_style_init(&button_4_s0);
	lv_style_set_radius(&button_4_s0,LV_STATE_DEFAULT,10);
	static char* str_8c92ce1 = "BACK";

	lv_style_set_value_str(&button_4_s0,LV_STATE_DEFAULT,str_8c92ce1);
	lv_style_set_value_font(&button_4_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_CHECKED,10);
	static char* str_422151f = "BACK";

	lv_style_set_value_str(&button_4_s0,LV_STATE_CHECKED,str_422151f);
	lv_style_set_value_font(&button_4_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_FOCUSED,10);
	static char* str_2cfec37 = "BACK";

	lv_style_set_value_str(&button_4_s0,LV_STATE_FOCUSED,str_2cfec37);
	lv_style_set_value_font(&button_4_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_EDITED,10);
	static char* str_56a9cd6 = "BACK";

	lv_style_set_value_str(&button_4_s0,LV_STATE_EDITED,str_56a9cd6);
	lv_style_set_value_font(&button_4_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_HOVERED,10);
	static char* str_184fde5 = "BACK";

	lv_style_set_value_str(&button_4_s0,LV_STATE_HOVERED,str_184fde5);
	lv_style_set_value_font(&button_4_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_PRESSED,10);
	static char* str_84e4163 = "BACK";

	lv_style_set_value_str(&button_4_s0,LV_STATE_PRESSED,str_84e4163);
	lv_style_set_value_font(&button_4_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_4_s0,LV_STATE_DISABLED,10);
	static char* str_3a2f1a4 = "BACK";

	lv_style_set_value_str(&button_4_s0,LV_STATE_DISABLED,str_3a2f1a4);
	lv_style_set_value_font(&button_4_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_4 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_4, 0, &button_4_s0);
	lv_obj_set_hidden(button_4, false);
	lv_obj_set_click(button_4, true);
	lv_obj_set_drag(button_4, false);
	lv_obj_set_pos(button_4, 240, 125);
	lv_obj_set_size(button_4, 75, 53);
	lv_btn_set_checkable(button_4, false);
	lv_btn_set_fit(button_4, LV_FIT_NONE);
	PG_EVENT(PGWIFI_BUTTON4, button_4);
	button_4_ev_0 = button_4;


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
	lv_obj_set_pos(text_area_1, 6, 9);
	lv_obj_set_size(text_area_1, 228, 45);
	lv_textarea_set_text(text_area_1, "Text area");
	lv_textarea_set_placeholder_text(text_area_1, "");
	lv_textarea_set_cursor_blink_time(text_area_1, 144);
	lv_textarea_set_one_line(text_area_1, false);
	lv_textarea_set_pwd_mode(text_area_1, false);
	lv_textarea_set_max_length(text_area_1, 0);
	lv_textarea_set_scroll_propagation(text_area_1, false);
	lv_textarea_set_edge_flash(text_area_1, false);
	lv_textarea_set_cursor_hidden(text_area_1, true);
	PG_EVENT(PGWIFI_TXAREA1, text_area_1);
	text_area_1_ev_0 = text_area_1;


	static lv_style_t text_area_2_s0;
	lv_style_init(&text_area_2_s0);
	lv_style_set_text_font(&text_area_2_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	static lv_style_t text_area_2_s1;
	lv_style_init(&text_area_2_s1);
	static lv_style_t text_area_2_s2;
	lv_style_init(&text_area_2_s2);
	static lv_style_t text_area_2_s3;
	lv_style_init(&text_area_2_s3);
	static lv_style_t text_area_2_s4;
	lv_style_init(&text_area_2_s4);
	lv_style_set_text_font(&text_area_2_s4,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s4,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s4,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s4,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s4,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s4,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_2_s4,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *text_area_2 = lv_textarea_create(parent, NULL);
	lv_obj_add_style(text_area_2, 0, &text_area_2_s0);
	lv_obj_add_style(text_area_2, 1, &text_area_2_s1);
	lv_obj_add_style(text_area_2, 2, &text_area_2_s2);
	lv_obj_add_style(text_area_2, 3, &text_area_2_s3);
	lv_obj_add_style(text_area_2, 4, &text_area_2_s4);
	lv_obj_set_hidden(text_area_2, false);
	lv_obj_set_click(text_area_2, true);
	lv_obj_set_drag(text_area_2, false);
	lv_obj_set_pos(text_area_2, 6, 57);
	lv_obj_set_size(text_area_2, 228, 45);
	lv_textarea_set_text(text_area_2, "Text area");
	lv_textarea_set_placeholder_text(text_area_2, "");
	lv_textarea_set_cursor_blink_time(text_area_2, 144);
	lv_textarea_set_one_line(text_area_2, false);
	lv_textarea_set_pwd_mode(text_area_2, false);
	lv_textarea_set_max_length(text_area_2, 0);
	lv_textarea_set_scroll_propagation(text_area_2, false);
	lv_textarea_set_edge_flash(text_area_2, false);
	lv_textarea_set_cursor_hidden(text_area_2, true);
	PG_EVENT(PGWIFI_TXAREA2, text_area_2);
	text_area_2_ev_0 = text_area_2;


	static lv_style_t text_area_3_s0;
	lv_style_init(&text_area_3_s0);
	lv_style_set_text_font(&text_area_3_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	static lv_style_t text_area_3_s1;
	lv_style_init(&text_area_3_s1);
	static lv_style_t text_area_3_s2;
	lv_style_init(&text_area_3_s2);
	static lv_style_t text_area_3_s3;
	lv_style_init(&text_area_3_s3);
	static lv_style_t text_area_3_s4;
	lv_style_init(&text_area_3_s4);
	lv_style_set_text_font(&text_area_3_s4,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s4,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s4,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s4,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s4,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s4,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&text_area_3_s4,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *text_area_3 = lv_textarea_create(parent, NULL);
	lv_obj_add_style(text_area_3, 0, &text_area_3_s0);
	lv_obj_add_style(text_area_3, 1, &text_area_3_s1);
	lv_obj_add_style(text_area_3, 2, &text_area_3_s2);
	lv_obj_add_style(text_area_3, 3, &text_area_3_s3);
	lv_obj_add_style(text_area_3, 4, &text_area_3_s4);
	lv_obj_set_hidden(text_area_3, false);
	lv_obj_set_click(text_area_3, true);
	lv_obj_set_drag(text_area_3, false);
	lv_obj_set_pos(text_area_3, 6, 105);
	lv_obj_set_size(text_area_3, 228, 131);
	lv_textarea_set_text(text_area_3, "Text area");
	lv_textarea_set_placeholder_text(text_area_3, "");
	lv_textarea_set_cursor_blink_time(text_area_3, 144);
	lv_textarea_set_one_line(text_area_3, false);
	lv_textarea_set_pwd_mode(text_area_3, false);
	lv_textarea_set_max_length(text_area_3, 0);
	lv_textarea_set_scroll_propagation(text_area_3, false);
	lv_textarea_set_edge_flash(text_area_3, false);
	lv_textarea_set_cursor_hidden(text_area_3, true);
	PG_EVENT(PGWIFI_TXAREA3, text_area_3);
	text_area_3_ev_0 = text_area_3;


	return parent;
}
