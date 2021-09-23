#include "page_main.h"
#include "hmi.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

lv_obj_t *button_1_ev_0;
lv_obj_t *button_2_ev_0;
lv_obj_t *button_3_ev_0;
lv_obj_t *text_area_1_ev_0;
lv_obj_t *button_4_ev_0;

enum e_pMain {
    PGMAIN_BUTTON1,
    PGMAIN_BUTTON2,
    PGMAIN_BUTTON3,
    PGMAIN_BUTTON4,
    PGMAIN_TXAREA1
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGMAIN_BUTTON1:
                lv_scr_load(page_ladder);
                break;
            case PGMAIN_BUTTON2:
                lv_scr_load(page_configuration);
                break;
            case PGMAIN_BUTTON3:
                lv_scr_load(page_switches);
                break;
            case PGMAIN_BUTTON4:

                break;
            case PGMAIN_TXAREA1:

                break;
        }
    }
}

lv_obj_t* page_main_create() {
    lv_obj_t *parent = lv_obj_create(NULL, NULL);

    static lv_style_t button_1_s0;
    lv_style_init(&button_1_s0);
    lv_style_set_radius(&button_1_s0, LV_STATE_DEFAULT, 10);
    static char *str_64d6be9 = "LADDER";

    lv_style_set_value_str(&button_1_s0, LV_STATE_DEFAULT, str_64d6be9);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_CHECKED, 10);
    static char *str_b680fa0 = "LADDER";

    lv_style_set_value_str(&button_1_s0, LV_STATE_CHECKED, str_b680fa0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_FOCUSED, 10);
    static char *str_fe1f2c1 = "LADDER";

    lv_style_set_value_str(&button_1_s0, LV_STATE_FOCUSED, str_fe1f2c1);
    lv_style_set_value_font(&button_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_EDITED, 10);
    static char *str_8c80850 = "LADDER";

    lv_style_set_value_str(&button_1_s0, LV_STATE_EDITED, str_8c80850);
    lv_style_set_value_font(&button_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_HOVERED, 10);
    static char *str_4d6c10c = "LADDER";

    lv_style_set_value_str(&button_1_s0, LV_STATE_HOVERED, str_4d6c10c);
    lv_style_set_value_font(&button_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_PRESSED, 10);
    static char *str_7b5f741 = "LADDER";

    lv_style_set_value_str(&button_1_s0, LV_STATE_PRESSED, str_7b5f741);
    lv_style_set_value_font(&button_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_DISABLED, 10);
    static char *str_4d8f5f0 = "LADDER";

    lv_style_set_value_str(&button_1_s0, LV_STATE_DISABLED, str_4d8f5f0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_1 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_1, 0, &button_1_s0);
    lv_obj_set_hidden(button_1, false);
    lv_obj_set_click(button_1, true);
    lv_obj_set_drag(button_1, false);
    lv_obj_set_pos(button_1, 7, 45);
    lv_obj_set_size(button_1, 307, 60);
    lv_btn_set_checkable(button_1, false);
    lv_btn_set_fit(button_1, LV_FIT_NONE);
    PG_EVENT(PGMAIN_BUTTON1, button_1);
    button_1_ev_0 = button_1;

    static lv_style_t button_2_s0;
    lv_style_init(&button_2_s0);
    lv_style_set_radius(&button_2_s0, LV_STATE_DEFAULT, 10);
    static char *str_3db4b83 = "CONFIGURATION";

    lv_style_set_value_str(&button_2_s0, LV_STATE_DEFAULT, str_3db4b83);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_CHECKED, 10);
    static char *str_012e202 = "CONFIGURATION";

    lv_style_set_value_str(&button_2_s0, LV_STATE_CHECKED, str_012e202);
    lv_style_set_value_font(&button_2_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_FOCUSED, 10);
    static char *str_897b242 = "CONFIGURATION";

    lv_style_set_value_str(&button_2_s0, LV_STATE_FOCUSED, str_897b242);
    lv_style_set_value_font(&button_2_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_EDITED, 10);
    static char *str_b4997c2 = "CONFIGURATION";

    lv_style_set_value_str(&button_2_s0, LV_STATE_EDITED, str_b4997c2);
    lv_style_set_value_font(&button_2_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_HOVERED, 10);
    static char *str_0177ebd = "CONFIGURATION";

    lv_style_set_value_str(&button_2_s0, LV_STATE_HOVERED, str_0177ebd);
    lv_style_set_value_font(&button_2_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_PRESSED, 10);
    static char *str_ea44d97 = "CONFIGURATION";

    lv_style_set_value_str(&button_2_s0, LV_STATE_PRESSED, str_ea44d97);
    lv_style_set_value_font(&button_2_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_DISABLED, 10);
    static char *str_41396c1 = "CONFIGURATION";

    lv_style_set_value_str(&button_2_s0, LV_STATE_DISABLED, str_41396c1);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_2 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_2, 0, &button_2_s0);
    lv_obj_set_hidden(button_2, false);
    lv_obj_set_click(button_2, true);
    lv_obj_set_drag(button_2, false);
    lv_obj_set_pos(button_2, 7, 173);
    lv_obj_set_size(button_2, 307, 60);
    lv_btn_set_checkable(button_2, false);
    lv_btn_set_fit(button_2, LV_FIT_NONE);
    PG_EVENT(PGMAIN_BUTTON2, button_2);
    button_2_ev_0 = button_2;

    static lv_style_t button_3_s0;
    lv_style_init(&button_3_s0);
    lv_style_set_radius(&button_3_s0, LV_STATE_DEFAULT, 10);
    static char *str_f52a003 = "HMI";

    lv_style_set_value_str(&button_3_s0, LV_STATE_DEFAULT, str_f52a003);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_CHECKED, 10);
    static char *str_c973d12 = "HMI";

    lv_style_set_value_str(&button_3_s0, LV_STATE_CHECKED, str_c973d12);
    lv_style_set_value_font(&button_3_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_FOCUSED, 10);
    static char *str_f25af44 = "HMI";

    lv_style_set_value_str(&button_3_s0, LV_STATE_FOCUSED, str_f25af44);
    lv_style_set_value_font(&button_3_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_EDITED, 10);
    static char *str_4ee8496 = "HMI";

    lv_style_set_value_str(&button_3_s0, LV_STATE_EDITED, str_4ee8496);
    lv_style_set_value_font(&button_3_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_HOVERED, 10);
    static char *str_42ac8b8 = "HMI";

    lv_style_set_value_str(&button_3_s0, LV_STATE_HOVERED, str_42ac8b8);
    lv_style_set_value_font(&button_3_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_PRESSED, 10);
    static char *str_449bd17 = "HMI";

    lv_style_set_value_str(&button_3_s0, LV_STATE_PRESSED, str_449bd17);
    lv_style_set_value_font(&button_3_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_DISABLED, 10);
    static char *str_580ac13 = "HMI";

    lv_style_set_value_str(&button_3_s0, LV_STATE_DISABLED, str_580ac13);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_3 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_3, 0, &button_3_s0);
    lv_obj_set_hidden(button_3, false);
    lv_obj_set_click(button_3, true);
    lv_obj_set_drag(button_3, false);
    lv_obj_set_pos(button_3, 7, 109);
    lv_obj_set_size(button_3, 307, 60);
    lv_btn_set_checkable(button_3, false);
    PG_EVENT(PGMAIN_BUTTON3, button_3);
    button_3_ev_0 = button_3;

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
    lv_obj_set_pos(text_area_1, 10, 6);
    lv_obj_set_size(text_area_1, 181, 32);
    lv_textarea_set_text(text_area_1, "program.name");
    lv_textarea_set_placeholder_text(text_area_1, "");
    lv_textarea_set_cursor_blink_time(text_area_1, 0);
    lv_textarea_set_one_line(text_area_1, false);
    lv_textarea_set_pwd_mode(text_area_1, false);
    lv_textarea_set_max_length(text_area_1, 0);
    lv_textarea_set_scroll_propagation(text_area_1, false);
    lv_textarea_set_edge_flash(text_area_1, false);
    lv_textarea_set_cursor_hidden(text_area_1, true);
    PG_EVENT(PGMAIN_TXAREA1, text_area_1);
    text_area_1_ev_0 = text_area_1;

    static lv_style_t button_4_s0;
    lv_style_init(&button_4_s0);
    lv_style_set_radius(&button_4_s0, LV_STATE_DEFAULT, 10);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_CHECKED, 10);
    lv_style_set_value_font(&button_4_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_FOCUSED, 10);
    lv_style_set_value_font(&button_4_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_EDITED, 10);
    lv_style_set_value_font(&button_4_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_HOVERED, 10);
    lv_style_set_value_font(&button_4_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_PRESSED, 10);
    lv_style_set_value_font(&button_4_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_DISABLED, 10);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_4 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_4, 0, &button_4_s0);
    lv_obj_set_hidden(button_4, false);
    lv_obj_set_click(button_4, true);
    lv_obj_set_drag(button_4, false);
    lv_obj_set_pos(button_4, 196, 6);
    lv_obj_set_size(button_4, 115, 32);
    lv_btn_set_checkable(button_4, false);
    lv_btn_set_fit(button_4, LV_FIT_NONE);
    PG_EVENT(PGMAIN_BUTTON4, button_4);
    button_4_ev_0 = button_4;

    return parent;
}
