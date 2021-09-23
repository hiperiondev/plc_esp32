#include "page_io.h"
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
lv_obj_t *button_4_ev_0;
lv_obj_t *button_5_ev_0;
lv_obj_t *button_6_ev_0;
lv_obj_t *button_7_ev_0;
lv_obj_t *button_8_ev_0;
lv_obj_t *button_9_ev_0;
lv_obj_t *button_10_ev_0;
lv_obj_t *button_11_ev_0;
lv_obj_t *button_12_ev_0;
lv_obj_t *button_13_ev_0;
lv_obj_t *button_14_ev_0;
lv_obj_t *button_15_ev_0;
lv_obj_t *label_1_ev_0;
lv_obj_t *label_2_ev_0;
lv_obj_t *label_3_ev_0;
lv_obj_t *label_4_ev_0;
lv_obj_t *label_5_ev_0;
lv_obj_t *label_6_ev_0;
lv_obj_t *label_7_ev_0;
lv_obj_t *label_8_ev_0;
lv_obj_t *label_9_ev_0;
lv_obj_t *label_10_ev_0;
lv_obj_t *label_11_ev_0;
lv_obj_t *label_12_ev_0;
lv_obj_t *label_13_ev_0;
lv_obj_t *label_14_ev_0;
lv_obj_t *text_area_1_ev_0;

enum e_pIo {
    PGIO_BUTTON1,
    PGIO_BUTTON2,
    PGIO_BUTTON3,
    PGIO_BUTTON4,
    PGIO_BUTTON5,
    PGIO_BUTTON6,
    PGIO_BUTTON7,
    PGIO_BUTTON8,
    PGIO_BUTTON9,
    PGIO_BUTTON10,
    PGIO_BUTTON11,
    PGIO_BUTTON12,
    PGIO_BUTTON13,
    PGIO_BUTTON14,
    PGIO_BUTTON15
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGIO_BUTTON1:

                break;
            case PGIO_BUTTON2:

                break;
            case PGIO_BUTTON3:

                break;
            case PGIO_BUTTON4:

                break;
            case PGIO_BUTTON5:

                break;
            case PGIO_BUTTON6:

                break;
            case PGIO_BUTTON7:

                break;
            case PGIO_BUTTON8:

                break;
            case PGIO_BUTTON9:

                break;
            case PGIO_BUTTON10:

                break;
            case PGIO_BUTTON11:

                break;
            case PGIO_BUTTON12:

                break;
            case PGIO_BUTTON13:

                break;
            case PGIO_BUTTON14:

                break;
            case PGIO_BUTTON15:
                lv_scr_load(page_configuration);
                break;
        }
    }
}

lv_obj_t* page_io_create() {
    lv_obj_t *parent = lv_obj_create(NULL, NULL);

    static lv_style_t button_1_s0;
    lv_style_init(&button_1_s0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_1 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_1, 0, &button_1_s0);
    lv_obj_set_hidden(button_1, false);
    lv_obj_set_click(button_1, true);
    lv_obj_set_drag(button_1, false);
    lv_obj_set_pos(button_1, 12, 70);
    lv_obj_set_size(button_1, 25, 25);
    lv_btn_set_checkable(button_1, false);
    lv_btn_set_fit(button_1, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON1, button_1);
    button_1_ev_0 = button_1;

    static lv_style_t button_2_s0;
    lv_style_init(&button_2_s0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_2_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_2_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_2_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_2_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_2_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_2 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_2, 0, &button_2_s0);
    lv_obj_set_hidden(button_2, false);
    lv_obj_set_click(button_2, true);
    lv_obj_set_drag(button_2, false);
    lv_obj_set_pos(button_2, 53, 70);
    lv_obj_set_size(button_2, 25, 25);
    lv_btn_set_checkable(button_2, false);
    lv_btn_set_fit(button_2, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON2, button_2);
    button_2_ev_0 = button_2;

    static lv_style_t button_3_s0;
    lv_style_init(&button_3_s0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_3_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_3_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_3_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_3_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_3_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_3 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_3, 0, &button_3_s0);
    lv_obj_set_hidden(button_3, false);
    lv_obj_set_click(button_3, true);
    lv_obj_set_drag(button_3, false);
    lv_obj_set_pos(button_3, 91, 70);
    lv_obj_set_size(button_3, 25, 25);
    lv_btn_set_checkable(button_3, false);
    lv_btn_set_fit(button_3, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON3, button_3);
    button_3_ev_0 = button_3;

    static lv_style_t button_4_s0;
    lv_style_init(&button_4_s0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_4_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_4_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_4_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_4_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_4_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_4 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_4, 0, &button_4_s0);
    lv_obj_set_hidden(button_4, false);
    lv_obj_set_click(button_4, true);
    lv_obj_set_drag(button_4, false);
    lv_obj_set_pos(button_4, 129, 70);
    lv_obj_set_size(button_4, 25, 25);
    lv_btn_set_checkable(button_4, false);
    lv_btn_set_fit(button_4, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON4, button_4);
    button_4_ev_0 = button_4;

    static lv_style_t button_5_s0;
    lv_style_init(&button_5_s0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_5_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_5_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_5_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_5_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_5_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_5_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_5 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_5, 0, &button_5_s0);
    lv_obj_set_hidden(button_5, false);
    lv_obj_set_click(button_5, true);
    lv_obj_set_drag(button_5, false);
    lv_obj_set_pos(button_5, 169, 70);
    lv_obj_set_size(button_5, 25, 25);
    lv_btn_set_checkable(button_5, false);
    lv_btn_set_fit(button_5, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON5, button_5);
    button_5_ev_0 = button_5;

    static lv_style_t button_6_s0;
    lv_style_init(&button_6_s0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_6_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_6_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_6_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_6_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_6_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_6_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_6 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_6, 0, &button_6_s0);
    lv_obj_set_hidden(button_6, false);
    lv_obj_set_click(button_6, true);
    lv_obj_set_drag(button_6, false);
    lv_obj_set_pos(button_6, 208, 70);
    lv_obj_set_size(button_6, 25, 25);
    lv_btn_set_checkable(button_6, false);
    lv_btn_set_fit(button_6, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON6, button_6);
    button_6_ev_0 = button_6;

    static lv_style_t button_7_s0;
    lv_style_init(&button_7_s0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_7_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_7_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_7_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_7_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_7_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_7_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_7 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_7, 0, &button_7_s0);
    lv_obj_set_hidden(button_7, false);
    lv_obj_set_click(button_7, true);
    lv_obj_set_drag(button_7, false);
    lv_obj_set_pos(button_7, 246, 70);
    lv_obj_set_size(button_7, 25, 25);
    lv_btn_set_checkable(button_7, false);
    lv_btn_set_fit(button_7, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON7, button_7);
    button_7_ev_0 = button_7;

    static lv_style_t button_8_s0;
    lv_style_init(&button_8_s0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_8_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_8_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_8_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_8_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_8_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_8_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_8 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_8, 0, &button_8_s0);
    lv_obj_set_hidden(button_8, false);
    lv_obj_set_click(button_8, true);
    lv_obj_set_drag(button_8, false);
    lv_obj_set_pos(button_8, 283, 70);
    lv_obj_set_size(button_8, 25, 25);
    lv_btn_set_checkable(button_8, false);
    lv_btn_set_fit(button_8, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON8, button_8);
    button_8_ev_0 = button_8;

    static lv_style_t button_9_s0;
    lv_style_init(&button_9_s0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_9_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_9_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_9_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_9_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_9_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_9_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_9 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_9, 0, &button_9_s0);
    lv_obj_set_hidden(button_9, false);
    lv_obj_set_click(button_9, true);
    lv_obj_set_drag(button_9, false);
    lv_obj_set_pos(button_9, 53, 162);
    lv_obj_set_size(button_9, 25, 25);
    lv_btn_set_checkable(button_9, false);
    lv_btn_set_fit(button_9, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON9, button_9);
    button_9_ev_0 = button_9;

    static lv_style_t button_10_s0;
    lv_style_init(&button_10_s0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_10_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_10_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_10_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_10_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_10_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_10_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_10 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_10, 0, &button_10_s0);
    lv_obj_set_hidden(button_10, false);
    lv_obj_set_click(button_10, true);
    lv_obj_set_drag(button_10, false);
    lv_obj_set_pos(button_10, 91, 162);
    lv_obj_set_size(button_10, 25, 25);
    lv_btn_set_checkable(button_10, false);
    lv_btn_set_fit(button_10, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON10, button_10);
    button_10_ev_0 = button_10;

    static lv_style_t button_11_s0;
    lv_style_init(&button_11_s0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_11_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_11_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_11_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_11_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_11_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_11_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_11 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_11, 0, &button_11_s0);
    lv_obj_set_hidden(button_11, false);
    lv_obj_set_click(button_11, true);
    lv_obj_set_drag(button_11, false);
    lv_obj_set_pos(button_11, 129, 162);
    lv_obj_set_size(button_11, 25, 25);
    lv_btn_set_checkable(button_11, false);
    lv_btn_set_fit(button_11, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON11, button_11);
    button_11_ev_0 = button_11;

    static lv_style_t button_12_s0;
    lv_style_init(&button_12_s0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_12_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_12_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_12_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_12_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_12_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_12_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_12 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_12, 0, &button_12_s0);
    lv_obj_set_hidden(button_12, false);
    lv_obj_set_click(button_12, true);
    lv_obj_set_drag(button_12, false);
    lv_obj_set_pos(button_12, 169, 162);
    lv_obj_set_size(button_12, 25, 25);
    lv_btn_set_checkable(button_12, false);
    lv_btn_set_fit(button_12, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON12, button_12);
    button_12_ev_0 = button_12;

    static lv_style_t button_13_s0;
    lv_style_init(&button_13_s0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_13_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_13_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_13_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_13_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_13_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_13_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_13 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_13, 0, &button_13_s0);
    lv_obj_set_hidden(button_13, false);
    lv_obj_set_click(button_13, true);
    lv_obj_set_drag(button_13, false);
    lv_obj_set_pos(button_13, 208, 162);
    lv_obj_set_size(button_13, 25, 25);
    lv_btn_set_checkable(button_13, false);
    lv_btn_set_fit(button_13, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON13, button_13);
    button_13_ev_0 = button_13;

    static lv_style_t button_14_s0;
    lv_style_init(&button_14_s0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_value_font(&button_14_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_14_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_14_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_14_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_14_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_value_font(&button_14_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_14 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_14, 0, &button_14_s0);
    lv_obj_set_hidden(button_14, false);
    lv_obj_set_click(button_14, true);
    lv_obj_set_drag(button_14, false);
    lv_obj_set_pos(button_14, 246, 162);
    lv_obj_set_size(button_14, 25, 25);
    lv_btn_set_checkable(button_14, false);
    lv_btn_set_fit(button_14, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON14, button_14);
    button_14_ev_0 = button_14;

    static lv_style_t label_1_s0;
    lv_style_init(&label_1_s0);
    lv_style_set_text_font(&label_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_1 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_1, 0, &label_1_s0);
    lv_obj_set_hidden(label_1, false);
    lv_obj_set_click(label_1, false);
    lv_obj_set_drag(label_1, false);
    lv_label_set_text(label_1, "I0");
    lv_label_set_align(label_1, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_1, 18, 98);
    lv_obj_set_size(label_1, 13, 19);

    label_1_ev_0 = label_1;

    static lv_style_t label_2_s0;
    lv_style_init(&label_2_s0);
    lv_style_set_text_font(&label_2_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_2_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_2_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_2_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_2_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_2_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_2_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_2 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_2, 0, &label_2_s0);
    lv_obj_set_hidden(label_2, false);
    lv_obj_set_click(label_2, false);
    lv_obj_set_drag(label_2, false);
    lv_label_set_text(label_2, "I1\n");
    lv_label_set_align(label_2, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_2, 59, 98);
    lv_obj_set_size(label_2, 17, 38);

    label_2_ev_0 = label_2;

    static lv_style_t label_3_s0;
    lv_style_init(&label_3_s0);
    lv_style_set_text_font(&label_3_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_3_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_3_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_3_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_3_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_3_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_3_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_3 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_3, 0, &label_3_s0);
    lv_obj_set_hidden(label_3, false);
    lv_obj_set_click(label_3, false);
    lv_obj_set_drag(label_3, false);
    lv_label_set_text(label_3, "I2");
    lv_label_set_align(label_3, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_3, 97, 98);
    lv_obj_set_size(label_3, 13, 19);

    label_3_ev_0 = label_3;

    static lv_style_t label_4_s0;
    lv_style_init(&label_4_s0);
    lv_style_set_text_font(&label_4_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_4_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_4_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_4_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_4_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_4_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_4_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_4 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_4, 0, &label_4_s0);
    lv_obj_set_hidden(label_4, false);
    lv_obj_set_click(label_4, false);
    lv_obj_set_drag(label_4, false);
    lv_label_set_text(label_4, "I3");
    lv_label_set_align(label_4, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_4, 135, 98);
    lv_obj_set_size(label_4, 13, 19);

    label_4_ev_0 = label_4;

    static lv_style_t label_5_s0;
    lv_style_init(&label_5_s0);
    lv_style_set_text_font(&label_5_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_5_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_5_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_5_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_5_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_5_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_5_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_5 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_5, 0, &label_5_s0);
    lv_obj_set_hidden(label_5, false);
    lv_obj_set_click(label_5, false);
    lv_obj_set_drag(label_5, false);
    lv_label_set_text(label_5, "I4");
    lv_label_set_align(label_5, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_5, 174, 98);
    lv_obj_set_size(label_5, 13, 19);

    label_5_ev_0 = label_5;

    static lv_style_t label_6_s0;
    lv_style_init(&label_6_s0);
    lv_style_set_text_font(&label_6_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_6_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_6_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_6_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_6_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_6_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_6_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_6 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_6, 0, &label_6_s0);
    lv_obj_set_hidden(label_6, false);
    lv_obj_set_click(label_6, false);
    lv_obj_set_drag(label_6, false);
    lv_label_set_text(label_6, "I5");
    lv_label_set_align(label_6, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_6, 214, 98);
    lv_obj_set_size(label_6, 13, 19);

    label_6_ev_0 = label_6;

    static lv_style_t label_7_s0;
    lv_style_init(&label_7_s0);
    lv_style_set_text_font(&label_7_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_7_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_7_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_7_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_7_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_7_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_7_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_7 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_7, 0, &label_7_s0);
    lv_obj_set_hidden(label_7, false);
    lv_obj_set_click(label_7, false);
    lv_obj_set_drag(label_7, false);
    lv_label_set_text(label_7, "I6");
    lv_label_set_align(label_7, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_7, 251, 98);
    lv_obj_set_size(label_7, 13, 19);

    label_7_ev_0 = label_7;

    static lv_style_t label_8_s0;
    lv_style_init(&label_8_s0);
    lv_style_set_text_font(&label_8_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_8_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_8_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_8_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_8_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_8_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_8_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_8 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_8, 0, &label_8_s0);
    lv_obj_set_hidden(label_8, false);
    lv_obj_set_click(label_8, false);
    lv_obj_set_drag(label_8, false);
    lv_label_set_text(label_8, "I7");
    lv_label_set_align(label_8, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_8, 288, 98);
    lv_obj_set_size(label_8, 13, 19);

    label_8_ev_0 = label_8;

    static lv_style_t label_9_s0;
    lv_style_init(&label_9_s0);
    lv_style_set_text_font(&label_9_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_9_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_9_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_9_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_9_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_9_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_9_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_9 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_9, 0, &label_9_s0);
    lv_obj_set_hidden(label_9, false);
    lv_obj_set_click(label_9, false);
    lv_obj_set_drag(label_9, false);
    lv_label_set_text(label_9, "Q0");
    lv_label_set_align(label_9, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_9, 55, 190);
    lv_obj_set_size(label_9, 20, 19);

    label_9_ev_0 = label_9;

    static lv_style_t label_10_s0;
    lv_style_init(&label_10_s0);
    lv_style_set_text_font(&label_10_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_10_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_10_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_10_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_10_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_10_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_10_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_10 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_10, 0, &label_10_s0);
    lv_obj_set_hidden(label_10, false);
    lv_obj_set_click(label_10, false);
    lv_obj_set_drag(label_10, false);
    lv_label_set_text(label_10, "Q1");
    lv_label_set_align(label_10, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_10, 93, 190);
    lv_obj_set_size(label_10, 20, 19);

    label_10_ev_0 = label_10;

    static lv_style_t label_11_s0;
    lv_style_init(&label_11_s0);
    lv_style_set_text_font(&label_11_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_11_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_11_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_11_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_11_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_11_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_11_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_11 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_11, 0, &label_11_s0);
    lv_obj_set_hidden(label_11, false);
    lv_obj_set_click(label_11, false);
    lv_obj_set_drag(label_11, false);
    lv_label_set_text(label_11, "Q2");
    lv_label_set_align(label_11, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_11, 131, 190);
    lv_obj_set_size(label_11, 20, 19);

    label_11_ev_0 = label_11;

    static lv_style_t label_12_s0;
    lv_style_init(&label_12_s0);
    lv_style_set_text_font(&label_12_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_12_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_12_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_12_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_12_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_12_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_12_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_12 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_12, 0, &label_12_s0);
    lv_obj_set_hidden(label_12, false);
    lv_obj_set_click(label_12, false);
    lv_obj_set_drag(label_12, false);
    lv_label_set_text(label_12, "Q3");
    lv_label_set_align(label_12, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_12, 171, 190);
    lv_obj_set_size(label_12, 20, 19);

    label_12_ev_0 = label_12;

    static lv_style_t label_13_s0;
    lv_style_init(&label_13_s0);
    lv_style_set_text_font(&label_13_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_13_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_13_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_13_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_13_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_13_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_13_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_13 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_13, 0, &label_13_s0);
    lv_obj_set_hidden(label_13, false);
    lv_obj_set_click(label_13, false);
    lv_obj_set_drag(label_13, false);
    lv_label_set_text(label_13, "Q4");
    lv_label_set_align(label_13, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_13, 210, 190);
    lv_obj_set_size(label_13, 20, 19);

    label_13_ev_0 = label_13;

    static lv_style_t label_14_s0;
    lv_style_init(&label_14_s0);
    lv_style_set_text_font(&label_14_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_text_font(&label_14_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_14_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_14_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_14_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_14_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_text_font(&label_14_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *label_14 = lv_label_create(parent, NULL);
    lv_obj_add_style(label_14, 0, &label_14_s0);
    lv_obj_set_hidden(label_14, false);
    lv_obj_set_click(label_14, false);
    lv_obj_set_drag(label_14, false);
    lv_label_set_text(label_14, "Q5");
    lv_label_set_align(label_14, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_pos(label_14, 248, 190);
    lv_obj_set_size(label_14, 20, 19);

    label_14_ev_0 = label_14;

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
    lv_obj_set_pos(text_area_1, 7, 5);
    lv_obj_set_size(text_area_1, 237, 55);
    lv_textarea_set_text(text_area_1, "LOCAL I/O CONFIGURATION");
    lv_textarea_set_placeholder_text(text_area_1, "");
    lv_textarea_set_cursor_blink_time(text_area_1, 0);
    lv_textarea_set_one_line(text_area_1, false);
    lv_textarea_set_pwd_mode(text_area_1, false);
    lv_textarea_set_max_length(text_area_1, 0);
    lv_textarea_set_scroll_propagation(text_area_1, false);
    lv_textarea_set_edge_flash(text_area_1, false);
    lv_textarea_set_cursor_hidden(text_area_1, true);
    text_area_1_ev_0 = text_area_1;

    static lv_style_t button_15_s0;
    lv_style_init(&button_15_s0);
    lv_style_set_radius(&button_15_s0, LV_STATE_DEFAULT, 10);
    static char *str_beb7c17 = "BACK";

    lv_style_set_value_str(&button_15_s0, LV_STATE_DEFAULT, str_beb7c17);
    lv_style_set_value_font(&button_15_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_CHECKED, 10);
    static char *str_708c3fc = "BACK";

    lv_style_set_value_str(&button_15_s0, LV_STATE_CHECKED, str_708c3fc);
    lv_style_set_value_font(&button_15_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_FOCUSED, 10);
    static char *str_9fef1bf = "BACK";

    lv_style_set_value_str(&button_15_s0, LV_STATE_FOCUSED, str_9fef1bf);
    lv_style_set_value_font(&button_15_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_EDITED, 10);
    static char *str_8d23b63 = "BACK";

    lv_style_set_value_str(&button_15_s0, LV_STATE_EDITED, str_8d23b63);
    lv_style_set_value_font(&button_15_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_HOVERED, 10);
    static char *str_ac8c064 = "BACK";

    lv_style_set_value_str(&button_15_s0, LV_STATE_HOVERED, str_ac8c064);
    lv_style_set_value_font(&button_15_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_PRESSED, 10);
    static char *str_e833d95 = "BACK";

    lv_style_set_value_str(&button_15_s0, LV_STATE_PRESSED, str_e833d95);
    lv_style_set_value_font(&button_15_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_DISABLED, 10);
    static char *str_82c7077 = "BACK";

    lv_style_set_value_str(&button_15_s0, LV_STATE_DISABLED, str_82c7077);
    lv_style_set_value_font(&button_15_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_15 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_15, 0, &button_15_s0);
    lv_obj_set_hidden(button_15, false);
    lv_obj_set_click(button_15, true);
    lv_obj_set_drag(button_15, false);
    lv_obj_set_pos(button_15, 253, 8);
    lv_obj_set_size(button_15, 62, 46);
    lv_btn_set_checkable(button_15, false);
    lv_btn_set_fit(button_15, LV_FIT_NONE);
    PG_EVENT(PGIO_BUTTON15, button_15);
    button_15_ev_0 = button_15;

    return parent;
}
