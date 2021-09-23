#include "page_program.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/


lv_obj_t* button_5_ev_0;
lv_obj_t* roller_1_ev_0;
lv_obj_t* label_2_ev_0;
lv_obj_t *button_1_ev_0;

enum e_pProgram {
    PGPRG_BUTTON1,
    PGPRG_BUTTON5,
    PGPRG_ROLLER1,
    PGPRG_LABEL2
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    uint8_t id = *((uint8_t*) obj->user_data);
    if (event == LV_EVENT_CLICKED) {
        switch (id) {
            case PGPRG_BUTTON1:
                //lv_roller_get_selected_str
                //lv_textarea_set_text(text_area_1_ev_0, "SELECT PROGRAM");
                break;
            case PGPRG_BUTTON5:
                lv_scr_load(page_configuration);
                break;

            case PGPRG_ROLLER1:

                break;
        }
    }

    if (event == LV_EVENT_VALUE_CHANGED) {
        switch (id) {
            case PGPRG_ROLLER1:
                lv_roller_get_selected_str(roller_1_ev_0, filename, 253);
                break;
        }
    }
}

lv_obj_t* page_program_create(){
	lv_obj_t *parent = lv_obj_create(NULL, NULL);

	static lv_style_t button_5_s0;
	lv_style_init(&button_5_s0);
	lv_style_set_radius(&button_5_s0,LV_STATE_DEFAULT,10);
	static char* str_e09c9a2 = "BACK";

	lv_style_set_value_str(&button_5_s0,LV_STATE_DEFAULT,str_e09c9a2);
	lv_style_set_value_font(&button_5_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_CHECKED,10);
	static char* str_ce12e09 = "BACK";

	lv_style_set_value_str(&button_5_s0,LV_STATE_CHECKED,str_ce12e09);
	lv_style_set_value_font(&button_5_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_FOCUSED,10);
	static char* str_b2ef055 = "BACK";

	lv_style_set_value_str(&button_5_s0,LV_STATE_FOCUSED,str_b2ef055);
	lv_style_set_value_font(&button_5_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_EDITED,10);
	static char* str_bde5603 = "BACK";

	lv_style_set_value_str(&button_5_s0,LV_STATE_EDITED,str_bde5603);
	lv_style_set_value_font(&button_5_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_HOVERED,10);
	static char* str_51f34c2 = "BACK";

	lv_style_set_value_str(&button_5_s0,LV_STATE_HOVERED,str_51f34c2);
	lv_style_set_value_font(&button_5_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_PRESSED,10);
	static char* str_9a5d5fd = "BACK";

	lv_style_set_value_str(&button_5_s0,LV_STATE_PRESSED,str_9a5d5fd);
	lv_style_set_value_font(&button_5_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_radius(&button_5_s0,LV_STATE_DISABLED,10);
	static char* str_0162ef2 = "BACK";

	lv_style_set_value_str(&button_5_s0,LV_STATE_DISABLED,str_0162ef2);
	lv_style_set_value_font(&button_5_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_5 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_5, 0, &button_5_s0);
	lv_obj_set_hidden(button_5, false);
	lv_obj_set_click(button_5, true);
	lv_obj_set_drag(button_5, false);
	lv_obj_set_pos(button_5, 234, 6);
	lv_obj_set_size(button_5, 81, 30);
	lv_btn_set_checkable(button_5, false);
	lv_btn_set_fit(button_5, LV_FIT_NONE);
	PG_EVENT(PGPRG_BUTTON5, button_5);
	button_5_ev_0 = button_5;


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
	lv_obj_set_pos(roller_1, 10, 46);
	lv_obj_set_size(roller_1, 304, 117);
	lv_roller_set_options(roller_1, "                          Option 1                           \nOption 2\nOption 3\nOption 4\nOption 5", LV_ROLLER_MODE_NORMAL);
	lv_roller_set_align(roller_1, LV_LABEL_ALIGN_CENTER);
	lv_roller_set_visible_row_count(roller_1,3);
	lv_roller_set_anim_time(roller_1,200);
	lv_roller_set_auto_fit(roller_1, true);
	PG_EVENT(PGPRG_ROLLER1, roller_1);
	roller_1_ev_0 = roller_1;


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
	lv_label_set_text(label_2,"SELECT PROGRAM");
	lv_obj_set_pos(label_2, 10, 13);
	lv_obj_set_size(label_2, 137, 19);
	PG_EVENT(PGPRG_LABEL2, label_2);
	label_2_ev_0 = label_2;


	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	static char* str_23483a8 = "LOAD";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DEFAULT,str_23483a8);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	static char* str_41f094b = "LOAD";

	lv_style_set_value_str(&button_1_s0,LV_STATE_CHECKED,str_41f094b);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	static char* str_b9cd016 = "LOAD";

	lv_style_set_value_str(&button_1_s0,LV_STATE_FOCUSED,str_b9cd016);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	static char* str_dc0715c = "LOAD";

	lv_style_set_value_str(&button_1_s0,LV_STATE_EDITED,str_dc0715c);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	static char* str_2abb143 = "LOAD";

	lv_style_set_value_str(&button_1_s0,LV_STATE_HOVERED,str_2abb143);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	static char* str_40f3104 = "LOAD";

	lv_style_set_value_str(&button_1_s0,LV_STATE_PRESSED,str_40f3104);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	static char* str_198f72b = "LOAD";

	lv_style_set_value_str(&button_1_s0,LV_STATE_DISABLED,str_198f72b);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_hidden(button_1, false);
	lv_obj_set_click(button_1, true);
	lv_obj_set_drag(button_1, false);
	lv_obj_set_pos(button_1, 10, 185);
	lv_obj_set_size(button_1, 303, 45);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);
	PG_EVENT(PGPRG_BUTTON1, button_1);
	button_1_ev_0 = button_1;

	return parent;
}
