#include "page_ladder.h"
#include "hmi.h"
#include <stdio.h>
/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

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
lv_obj_t *button_16_ev_0;
lv_obj_t *button_17_ev_0;
lv_obj_t *button_18_ev_0;
lv_obj_t *button_19_ev_0;
lv_obj_t *button_20_ev_0;
lv_obj_t *button_21_ev_0;
lv_obj_t *button_22_ev_0;
lv_obj_t *button_23_ev_0;
lv_obj_t *button_24_ev_0;
lv_obj_t *button_25_ev_0;
lv_obj_t *button_26_ev_0;
lv_obj_t *button_27_ev_0;
lv_obj_t *button_28_ev_0;
lv_obj_t *button_29_ev_0;
lv_obj_t *button_30_ev_0;
lv_obj_t *button_31_ev_0;
lv_obj_t *button_32_ev_0;
lv_obj_t *button_33_ev_0;
lv_obj_t *button_34_ev_0;
lv_obj_t *button_35_ev_0;
lv_obj_t *button_36_ev_0;
lv_obj_t *button_1_ev_0;

enum e_pLadder {
    PGLDD_BUTTON0_0,
    PGLDD_BUTTON0_1,
    PGLDD_BUTTON0_2,
    PGLDD_BUTTON0_3,
    PGLDD_BUTTON0_4,
    PGLDD_BUTTON0_5,
    PGLDD_BUTTON1_0,
    PGLDD_BUTTON1_1,
    PGLDD_BUTTON1_2,
    PGLDD_BUTTON1_3,
    PGLDD_BUTTON1_4,
    PGLDD_BUTTON1_5,
    PGLDD_BUTTON2_0,
    PGLDD_BUTTON2_1,
    PGLDD_BUTTON2_2,
    PGLDD_BUTTON2_3,
    PGLDD_BUTTON2_4,
    PGLDD_BUTTON2_5,
    PGLDD_BUTTON3_0,
    PGLDD_BUTTON3_1,
    PGLDD_BUTTON3_2,
    PGLDD_BUTTON3_3,
    PGLDD_BUTTON3_4,
    PGLDD_BUTTON3_5,
    PGLDD_BUTTON4_0,
    PGLDD_BUTTON4_1,
    PGLDD_BUTTON4_2,
    PGLDD_BUTTON4_3,
    PGLDD_BUTTON4_4,
    PGLDD_BUTTON4_5,
    PGLDD_BUTTON5_0,
    PGLDD_BUTTON5_1,
    PGLDD_BUTTON5_2,
    PGLDD_BUTTON5_3,
    PGLDD_BUTTON5_4,
    PGLDD_BUTTON5_5
};

static void event_cb(lv_obj_t *obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        switch (*((uint8_t*) obj->user_data)) {
            case PGLDD_BUTTON0_0:

                break;
            case PGLDD_BUTTON0_1:

                break;
            case PGLDD_BUTTON0_2:

                break;
            case PGLDD_BUTTON0_3:

                break;
            case PGLDD_BUTTON0_4:

                break;
            case PGLDD_BUTTON0_5:

                break;
            case PGLDD_BUTTON1_0:

                break;
            case PGLDD_BUTTON1_1:

                break;
            case PGLDD_BUTTON1_2:

                break;
            case PGLDD_BUTTON1_3:

                break;
            case PGLDD_BUTTON1_4:

                break;
            case PGLDD_BUTTON1_5:

                break;
            case PGLDD_BUTTON2_0:

                break;
            case PGLDD_BUTTON2_1:

                break;
            case PGLDD_BUTTON2_2:

                break;
            case PGLDD_BUTTON2_3:

                break;
            case PGLDD_BUTTON2_4:

                break;
            case PGLDD_BUTTON2_5:

                break;
            case PGLDD_BUTTON3_0:

                break;
            case PGLDD_BUTTON3_1:

                break;
            case PGLDD_BUTTON3_2:

                break;
            case PGLDD_BUTTON3_3:

                break;
            case PGLDD_BUTTON3_4:

                break;
            case PGLDD_BUTTON3_5:

                break;
            case PGLDD_BUTTON4_0:

                break;
            case PGLDD_BUTTON4_1:

                break;
            case PGLDD_BUTTON4_2:

                break;
            case PGLDD_BUTTON4_3:

                break;
            case PGLDD_BUTTON4_4:

                break;
            case PGLDD_BUTTON4_5:

                break;
            case PGLDD_BUTTON5_0:

                break;
            case PGLDD_BUTTON5_1:

                break;
            case PGLDD_BUTTON5_2:

                break;
            case PGLDD_BUTTON5_3:

                break;
            case PGLDD_BUTTON5_4:

                break;
            case PGLDD_BUTTON5_5:

                break;
        }
    }
}

lv_obj_t* page_ladder_create() {
    lv_obj_t *parent = lv_obj_create(NULL, NULL);

    static lv_style_t button_2_s0;
    lv_style_init(&button_2_s0);
    lv_style_set_radius(&button_2_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_2_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_2_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_2 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_2, 0, &button_2_s0);
    lv_obj_set_hidden(button_2, false);
    lv_obj_set_click(button_2, true);
    lv_obj_set_drag(button_2, false);
    lv_obj_set_pos(button_2, 53, 0);
    lv_obj_set_size(button_2, 55, 42);
    lv_btn_set_checkable(button_2, false);
    lv_btn_set_fit(button_2, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON1_0, button_2);
    button_2_ev_0 = button_2;

    static lv_style_t button_3_s0;
    lv_style_init(&button_3_s0);
    lv_style_set_radius(&button_3_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_3_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_3_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_3 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_3, 0, &button_3_s0);
    lv_obj_set_hidden(button_3, false);
    lv_obj_set_click(button_3, true);
    lv_obj_set_drag(button_3, false);
    lv_obj_set_pos(button_3, 106, 42);
    lv_obj_set_size(button_3, 55, 41);
    lv_btn_set_checkable(button_3, false);
    lv_btn_set_fit(button_3, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON2_1, button_3);
    button_3_ev_0 = button_3;

    static lv_style_t button_4_s0;
    lv_style_init(&button_4_s0);
    lv_style_set_radius(&button_4_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_4_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_4_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_4 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_4, 0, &button_4_s0);
    lv_obj_set_hidden(button_4, false);
    lv_obj_set_click(button_4, true);
    lv_obj_set_drag(button_4, false);
    lv_obj_set_pos(button_4, 160, 0);
    lv_obj_set_size(button_4, 55, 42);
    lv_btn_set_checkable(button_4, false);
    lv_btn_set_fit(button_4, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON3_0, button_4);
    button_4_ev_0 = button_4;

    static lv_style_t button_5_s0;
    lv_style_init(&button_5_s0);
    lv_style_set_radius(&button_5_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_5_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_5_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_5 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_5, 0, &button_5_s0);
    lv_obj_set_hidden(button_5, false);
    lv_obj_set_click(button_5, true);
    lv_obj_set_drag(button_5, false);
    lv_obj_set_pos(button_5, 213, 0);
    lv_obj_set_size(button_5, 55, 42);
    lv_btn_set_checkable(button_5, false);
    lv_btn_set_fit(button_5, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON4_0, button_5);
    button_5_ev_0 = button_5;

    static lv_style_t button_6_s0;
    lv_style_init(&button_6_s0);
    lv_style_set_radius(&button_6_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_6_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_6_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_6 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_6, 0, &button_6_s0);
    lv_obj_set_hidden(button_6, false);
    lv_obj_set_click(button_6, true);
    lv_obj_set_drag(button_6, false);
    lv_obj_set_pos(button_6, 266, 0);
    lv_obj_set_size(button_6, 55, 42);
    lv_btn_set_checkable(button_6, false);
    lv_btn_set_fit(button_6, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON5_0, button_6);
    button_6_ev_0 = button_6;

    static lv_style_t button_7_s0;
    lv_style_init(&button_7_s0);
    lv_style_set_radius(&button_7_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_7_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_7_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_7_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_7_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_7_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_7_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_7_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_7 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_7, 0, &button_7_s0);
    lv_obj_set_hidden(button_7, false);
    lv_obj_set_click(button_7, true);
    lv_obj_set_drag(button_7, false);
    lv_obj_set_pos(button_7, 0, 42);
    lv_obj_set_size(button_7, 55, 41);
    lv_btn_set_checkable(button_7, false);
    lv_btn_set_fit(button_7, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON0_1, button_7);
    button_7_ev_0 = button_7;

    static lv_style_t button_8_s0;
    lv_style_init(&button_8_s0);
    lv_style_set_radius(&button_8_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_8_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_8_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_8_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_8_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_8_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_8_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_8_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_8 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_8, 0, &button_8_s0);
    lv_obj_set_hidden(button_8, false);
    lv_obj_set_click(button_8, true);
    lv_obj_set_drag(button_8, false);
    lv_obj_set_pos(button_8, 0, 81);
    lv_obj_set_size(button_8, 55, 41);
    lv_btn_set_checkable(button_8, false);
    lv_btn_set_fit(button_8, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON0_2, button_8);
    button_8_ev_0 = button_8;

    static lv_style_t button_9_s0;
    lv_style_init(&button_9_s0);
    lv_style_set_radius(&button_9_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_9_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_9_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_9_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_9_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_9_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_9_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_9_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_9 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_9, 0, &button_9_s0);
    lv_obj_set_hidden(button_9, false);
    lv_obj_set_click(button_9, true);
    lv_obj_set_drag(button_9, false);
    lv_obj_set_pos(button_9, 0, 120);
    lv_obj_set_size(button_9, 55, 41);
    lv_btn_set_checkable(button_9, false);
    lv_btn_set_fit(button_9, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON0_3, button_9);
    button_9_ev_0 = button_9;

    static lv_style_t button_10_s0;
    lv_style_init(&button_10_s0);
    lv_style_set_radius(&button_10_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_10_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_10_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_10_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_10_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_10_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_10_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_10_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_10 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_10, 0, &button_10_s0);
    lv_obj_set_hidden(button_10, false);
    lv_obj_set_click(button_10, true);
    lv_obj_set_drag(button_10, false);
    lv_obj_set_pos(button_10, 0, 159);
    lv_obj_set_size(button_10, 55, 41);
    lv_btn_set_checkable(button_10, false);
    lv_btn_set_fit(button_10, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON0_4, button_10);
    button_10_ev_0 = button_10;

    static lv_style_t button_11_s0;
    lv_style_init(&button_11_s0);
    lv_style_set_radius(&button_11_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_11_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_11_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_11_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_11_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_11_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_11_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_11_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_11 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_11, 0, &button_11_s0);
    lv_obj_set_hidden(button_11, false);
    lv_obj_set_click(button_11, true);
    lv_obj_set_drag(button_11, false);
    lv_obj_set_pos(button_11, 0, 198);
    lv_obj_set_size(button_11, 55, 41);
    lv_btn_set_checkable(button_11, false);
    lv_btn_set_fit(button_11, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON0_5, button_11);
    button_11_ev_0 = button_11;

    static lv_style_t button_12_s0;
    lv_style_init(&button_12_s0);
    lv_style_set_radius(&button_12_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_12_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_12_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_12_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_12_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_12_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_12_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_12_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_12 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_12, 0, &button_12_s0);
    lv_obj_set_hidden(button_12, false);
    lv_obj_set_click(button_12, true);
    lv_obj_set_drag(button_12, false);
    lv_obj_set_pos(button_12, 53, 42);
    lv_obj_set_size(button_12, 55, 41);
    lv_btn_set_checkable(button_12, false);
    lv_btn_set_fit(button_12, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON1_1, button_12);
    button_12_ev_0 = button_12;

    static lv_style_t button_13_s0;
    lv_style_init(&button_13_s0);
    lv_style_set_radius(&button_13_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_13_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_13_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_13_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_13_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_13_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_13_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_13_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_13 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_13, 0, &button_13_s0);
    lv_obj_set_hidden(button_13, false);
    lv_obj_set_click(button_13, true);
    lv_obj_set_drag(button_13, false);
    lv_obj_set_pos(button_13, 53, 81);
    lv_obj_set_size(button_13, 55, 41);
    lv_btn_set_checkable(button_13, false);
    lv_btn_set_fit(button_13, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON1_2, button_13);
    button_13_ev_0 = button_13;

    static lv_style_t button_14_s0;
    lv_style_init(&button_14_s0);
    lv_style_set_radius(&button_14_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_14_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_14_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_14_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_14_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_14_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_14_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_14_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_14 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_14, 0, &button_14_s0);
    lv_obj_set_hidden(button_14, false);
    lv_obj_set_click(button_14, true);
    lv_obj_set_drag(button_14, false);
    lv_obj_set_pos(button_14, 53, 120);
    lv_obj_set_size(button_14, 55, 41);
    lv_btn_set_checkable(button_14, false);
    lv_btn_set_fit(button_14, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON1_3, button_14);
    button_14_ev_0 = button_14;

    static lv_style_t button_15_s0;
    lv_style_init(&button_15_s0);
    lv_style_set_radius(&button_15_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_15_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_15_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_15_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_15_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_15_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_15_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_15_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_15_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_15 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_15, 0, &button_15_s0);
    lv_obj_set_hidden(button_15, false);
    lv_obj_set_click(button_15, true);
    lv_obj_set_drag(button_15, false);
    lv_obj_set_pos(button_15, 53, 159);
    lv_obj_set_size(button_15, 55, 41);
    lv_btn_set_checkable(button_15, false);
    lv_btn_set_fit(button_15, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON1_4, button_15);
    button_15_ev_0 = button_15;

    static lv_style_t button_16_s0;
    lv_style_init(&button_16_s0);
    lv_style_set_radius(&button_16_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_16_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_16_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_16_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_16_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_16_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_16_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_16_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_16_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_16_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_16_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_16_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_16_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_16_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_16 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_16, 0, &button_16_s0);
    lv_obj_set_hidden(button_16, false);
    lv_obj_set_click(button_16, true);
    lv_obj_set_drag(button_16, false);
    lv_obj_set_pos(button_16, 53, 198);
    lv_obj_set_size(button_16, 55, 41);
    lv_btn_set_checkable(button_16, false);
    lv_btn_set_fit(button_16, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON1_5, button_16);
    button_16_ev_0 = button_16;

    static lv_style_t button_17_s0;
    lv_style_init(&button_17_s0);
    lv_style_set_radius(&button_17_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_17_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_17_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_17_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_17_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_17_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_17_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_17_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_17_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_17_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_17_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_17_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_17_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_17_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_17 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_17, 0, &button_17_s0);
    lv_obj_set_hidden(button_17, false);
    lv_obj_set_click(button_17, true);
    lv_obj_set_drag(button_17, false);
    lv_obj_set_pos(button_17, 106, 0);
    lv_obj_set_size(button_17, 55, 42);
    lv_btn_set_checkable(button_17, false);
    lv_btn_set_fit(button_17, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON2_0, button_17);
    button_17_ev_0 = button_17;

    static lv_style_t button_18_s0;
    lv_style_init(&button_18_s0);
    lv_style_set_radius(&button_18_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_18_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_18_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_18_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_18_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_18_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_18_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_18_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_18_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_18_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_18_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_18_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_18_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_18_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_18 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_18, 0, &button_18_s0);
    lv_obj_set_hidden(button_18, false);
    lv_obj_set_click(button_18, true);
    lv_obj_set_drag(button_18, false);
    lv_obj_set_pos(button_18, 160, 42);
    lv_obj_set_size(button_18, 55, 41);
    lv_btn_set_checkable(button_18, false);
    lv_btn_set_fit(button_18, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON3_1, button_18);
    button_18_ev_0 = button_18;

    static lv_style_t button_19_s0;
    lv_style_init(&button_19_s0);
    lv_style_set_radius(&button_19_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_19_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_19_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_19_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_19_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_19_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_19_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_19_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_19_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_19_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_19_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_19_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_19_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_19_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_19 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_19, 0, &button_19_s0);
    lv_obj_set_hidden(button_19, false);
    lv_obj_set_click(button_19, true);
    lv_obj_set_drag(button_19, false);
    lv_obj_set_pos(button_19, 160, 81);
    lv_obj_set_size(button_19, 55, 41);
    lv_btn_set_checkable(button_19, false);
    lv_btn_set_fit(button_19, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON3_2, button_19);
    button_19_ev_0 = button_19;

    static lv_style_t button_20_s0;
    lv_style_init(&button_20_s0);
    lv_style_set_radius(&button_20_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_20_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_20_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_20_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_20_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_20_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_20_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_20_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_20_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_20_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_20_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_20_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_20_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_20_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_20 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_20, 0, &button_20_s0);
    lv_obj_set_hidden(button_20, false);
    lv_obj_set_click(button_20, true);
    lv_obj_set_drag(button_20, false);
    lv_obj_set_pos(button_20, 106, 81);
    lv_obj_set_size(button_20, 55, 41);
    lv_btn_set_checkable(button_20, false);
    lv_btn_set_fit(button_20, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON2_2, button_20);
    button_20_ev_0 = button_20;

    static lv_style_t button_21_s0;
    lv_style_init(&button_21_s0);
    lv_style_set_radius(&button_21_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_21_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_21_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_21_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_21_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_21_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_21_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_21_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_21_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_21_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_21_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_21_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_21_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_21_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_21 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_21, 0, &button_21_s0);
    lv_obj_set_hidden(button_21, false);
    lv_obj_set_click(button_21, true);
    lv_obj_set_drag(button_21, false);
    lv_obj_set_pos(button_21, 106, 120);
    lv_obj_set_size(button_21, 55, 41);
    lv_btn_set_checkable(button_21, false);
    lv_btn_set_fit(button_21, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON2_3, button_21);
    button_21_ev_0 = button_21;

    static lv_style_t button_22_s0;
    lv_style_init(&button_22_s0);
    lv_style_set_radius(&button_22_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_22_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_22_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_22_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_22_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_22_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_22_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_22_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_22_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_22_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_22_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_22_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_22_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_22_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_22 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_22, 0, &button_22_s0);
    lv_obj_set_hidden(button_22, false);
    lv_obj_set_click(button_22, true);
    lv_obj_set_drag(button_22, false);
    lv_obj_set_pos(button_22, 213, 42);
    lv_obj_set_size(button_22, 55, 41);
    lv_btn_set_checkable(button_22, false);
    lv_btn_set_fit(button_22, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON4_1, button_22);
    button_22_ev_0 = button_22;

    static lv_style_t button_23_s0;
    lv_style_init(&button_23_s0);
    lv_style_set_radius(&button_23_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_23_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_23_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_23_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_23_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_23_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_23_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_23_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_23_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_23_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_23_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_23_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_23_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_23_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_23 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_23, 0, &button_23_s0);
    lv_obj_set_hidden(button_23, false);
    lv_obj_set_click(button_23, true);
    lv_obj_set_drag(button_23, false);
    lv_obj_set_pos(button_23, 213, 81);
    lv_obj_set_size(button_23, 55, 41);
    lv_btn_set_checkable(button_23, false);
    lv_btn_set_fit(button_23, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON4_2, button_23);
    button_23_ev_0 = button_23;

    static lv_style_t button_24_s0;
    lv_style_init(&button_24_s0);
    lv_style_set_radius(&button_24_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_24_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_24_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_24_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_24_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_24_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_24_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_24_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_24_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_24_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_24_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_24_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_24_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_24_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_24 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_24, 0, &button_24_s0);
    lv_obj_set_hidden(button_24, false);
    lv_obj_set_click(button_24, true);
    lv_obj_set_drag(button_24, false);
    lv_obj_set_pos(button_24, 266, 42);
    lv_obj_set_size(button_24, 55, 41);
    lv_btn_set_checkable(button_24, false);
    lv_btn_set_fit(button_24, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON5_1, button_24);
    button_24_ev_0 = button_24;

    static lv_style_t button_25_s0;
    lv_style_init(&button_25_s0);
    lv_style_set_radius(&button_25_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_25_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_25_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_25_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_25_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_25_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_25_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_25_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_25_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_25_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_25_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_25_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_25_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_25_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_25 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_25, 0, &button_25_s0);
    lv_obj_set_hidden(button_25, false);
    lv_obj_set_click(button_25, true);
    lv_obj_set_drag(button_25, false);
    lv_obj_set_pos(button_25, 266, 81);
    lv_obj_set_size(button_25, 55, 41);
    lv_btn_set_checkable(button_25, false);
    lv_btn_set_fit(button_25, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON5_2, button_25);
    button_25_ev_0 = button_25;

    static lv_style_t button_26_s0;
    lv_style_init(&button_26_s0);
    lv_style_set_radius(&button_26_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_26_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_26_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_26_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_26_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_26_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_26_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_26_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_26_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_26_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_26_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_26_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_26_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_26_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_26 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_26, 0, &button_26_s0);
    lv_obj_set_hidden(button_26, false);
    lv_obj_set_click(button_26, true);
    lv_obj_set_drag(button_26, false);
    lv_obj_set_pos(button_26, 160, 120);
    lv_obj_set_size(button_26, 55, 41);
    lv_btn_set_checkable(button_26, false);
    lv_btn_set_fit(button_26, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON3_3, button_26);
    button_26_ev_0 = button_26;

    static lv_style_t button_27_s0;
    lv_style_init(&button_27_s0);
    lv_style_set_radius(&button_27_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_27_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_27_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_27_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_27_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_27_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_27_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_27_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_27_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_27_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_27_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_27_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_27_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_27_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_27 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_27, 0, &button_27_s0);
    lv_obj_set_hidden(button_27, false);
    lv_obj_set_click(button_27, true);
    lv_obj_set_drag(button_27, false);
    lv_obj_set_pos(button_27, 160, 159);
    lv_obj_set_size(button_27, 55, 41);
    lv_btn_set_checkable(button_27, false);
    lv_btn_set_fit(button_27, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON3_4, button_27);
    button_27_ev_0 = button_27;

    static lv_style_t button_28_s0;
    lv_style_init(&button_28_s0);
    lv_style_set_radius(&button_28_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_28_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_28_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_28_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_28_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_28_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_28_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_28_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_28_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_28_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_28_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_28_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_28_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_28_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_28 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_28, 0, &button_28_s0);
    lv_obj_set_hidden(button_28, false);
    lv_obj_set_click(button_28, true);
    lv_obj_set_drag(button_28, false);
    lv_obj_set_pos(button_28, 160, 198);
    lv_obj_set_size(button_28, 55, 41);
    lv_btn_set_checkable(button_28, false);
    lv_btn_set_fit(button_28, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON3_5, button_28);
    button_28_ev_0 = button_28;

    static lv_style_t button_29_s0;
    lv_style_init(&button_29_s0);
    lv_style_set_radius(&button_29_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_29_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_29_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_29_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_29_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_29_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_29_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_29_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_29_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_29_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_29_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_29_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_29_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_29_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_29 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_29, 0, &button_29_s0);
    lv_obj_set_hidden(button_29, false);
    lv_obj_set_click(button_29, true);
    lv_obj_set_drag(button_29, false);
    lv_obj_set_pos(button_29, 106, 159);
    lv_obj_set_size(button_29, 55, 41);
    lv_btn_set_checkable(button_29, false);
    lv_btn_set_fit(button_29, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON2_4, button_29);
    button_29_ev_0 = button_29;

    static lv_style_t button_30_s0;
    lv_style_init(&button_30_s0);
    lv_style_set_radius(&button_30_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_30_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_30_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_30_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_30_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_30_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_30_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_30_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_30_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_30_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_30_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_30_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_30_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_30_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_30 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_30, 0, &button_30_s0);
    lv_obj_set_hidden(button_30, false);
    lv_obj_set_click(button_30, true);
    lv_obj_set_drag(button_30, false);
    lv_obj_set_pos(button_30, 106, 198);
    lv_obj_set_size(button_30, 55, 41);
    lv_btn_set_checkable(button_30, false);
    lv_btn_set_fit(button_30, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON2_5, button_30);
    button_30_ev_0 = button_30;

    static lv_style_t button_31_s0;
    lv_style_init(&button_31_s0);
    lv_style_set_radius(&button_31_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_31_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_31_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_31_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_31_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_31_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_31_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_31_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_31_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_31_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_31_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_31_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_31_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_31_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_31 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_31, 0, &button_31_s0);
    lv_obj_set_hidden(button_31, false);
    lv_obj_set_click(button_31, true);
    lv_obj_set_drag(button_31, false);
    lv_obj_set_pos(button_31, 213, 120);
    lv_obj_set_size(button_31, 55, 41);
    lv_btn_set_checkable(button_31, false);
    lv_btn_set_fit(button_31, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON4_3, button_31);
    button_31_ev_0 = button_31;

    static lv_style_t button_32_s0;
    lv_style_init(&button_32_s0);
    lv_style_set_radius(&button_32_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_32_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_32_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_32_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_32_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_32_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_32_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_32_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_32_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_32_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_32_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_32_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_32_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_32_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_32 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_32, 0, &button_32_s0);
    lv_obj_set_hidden(button_32, false);
    lv_obj_set_click(button_32, true);
    lv_obj_set_drag(button_32, false);
    lv_obj_set_pos(button_32, 213, 159);
    lv_obj_set_size(button_32, 55, 41);
    lv_btn_set_checkable(button_32, false);
    lv_btn_set_fit(button_32, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON4_4, button_32);
    button_32_ev_0 = button_32;

    static lv_style_t button_33_s0;
    lv_style_init(&button_33_s0);
    lv_style_set_radius(&button_33_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_33_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_33_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_33_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_33_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_33_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_33_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_33_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_33_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_33_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_33_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_33_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_33_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_33_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_33 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_33, 0, &button_33_s0);
    lv_obj_set_hidden(button_33, false);
    lv_obj_set_click(button_33, true);
    lv_obj_set_drag(button_33, false);
    lv_obj_set_pos(button_33, 213, 198);
    lv_obj_set_size(button_33, 55, 41);
    lv_btn_set_checkable(button_33, false);
    lv_btn_set_fit(button_33, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON4_5, button_33);
    button_33_ev_0 = button_33;

    static lv_style_t button_34_s0;
    lv_style_init(&button_34_s0);
    lv_style_set_radius(&button_34_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_34_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_34_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_34_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_34_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_34_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_34_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_34_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_34_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_34_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_34_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_34_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_34_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_34_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_34 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_34, 0, &button_34_s0);
    lv_obj_set_hidden(button_34, false);
    lv_obj_set_click(button_34, true);
    lv_obj_set_drag(button_34, false);
    lv_obj_set_pos(button_34, 266, 120);
    lv_obj_set_size(button_34, 55, 41);
    lv_btn_set_checkable(button_34, false);
    lv_btn_set_fit(button_34, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON5_3, button_34);
    button_34_ev_0 = button_34;

    static lv_style_t button_35_s0;
    lv_style_init(&button_35_s0);
    lv_style_set_radius(&button_35_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_35_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_35_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_35_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_35_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_35_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_35_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_35_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_35_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_35_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_35_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_35_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_35_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_35_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_35 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_35, 0, &button_35_s0);
    lv_obj_set_hidden(button_35, false);
    lv_obj_set_click(button_35, true);
    lv_obj_set_drag(button_35, false);
    lv_obj_set_pos(button_35, 266, 159);
    lv_obj_set_size(button_35, 55, 41);
    lv_btn_set_checkable(button_35, false);
    lv_btn_set_fit(button_35, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON5_4, button_35);
    button_35_ev_0 = button_35;

    static lv_style_t button_36_s0;
    lv_style_init(&button_36_s0);
    lv_style_set_radius(&button_36_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_36_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_36_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_36_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_36_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_36_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_36_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_36_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_36_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_36_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_36_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_36_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_36_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_36_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_36 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_36, 0, &button_36_s0);
    lv_obj_set_hidden(button_36, false);
    lv_obj_set_click(button_36, true);
    lv_obj_set_drag(button_36, false);
    lv_obj_set_pos(button_36, 266, 198);
    lv_obj_set_size(button_36, 55, 41);
    lv_btn_set_checkable(button_36, false);
    lv_btn_set_fit(button_36, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON5_5, button_36);
    button_36_ev_0 = button_36;

    static lv_style_t button_1_s0;
    lv_style_init(&button_1_s0);
    lv_style_set_radius(&button_1_s0, LV_STATE_DEFAULT, 0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DEFAULT, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_CHECKED, 0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_CHECKED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_FOCUSED, 0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_FOCUSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_EDITED, 0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_EDITED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_HOVERED, 0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_HOVERED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_PRESSED, 0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_PRESSED, &lv_font_123abc_16);
    lv_style_set_radius(&button_1_s0, LV_STATE_DISABLED, 0);
    lv_style_set_value_font(&button_1_s0, LV_STATE_DISABLED, &lv_font_123abc_16);
    lv_obj_t *button_1 = lv_btn_create(parent, NULL);
    lv_obj_add_style(button_1, 0, &button_1_s0);
    lv_obj_set_hidden(button_1, false);
    lv_obj_set_click(button_1, true);
    lv_obj_set_drag(button_1, false);
    lv_obj_set_pos(button_1, 0, 0);
    lv_obj_set_size(button_1, 55, 42);
    lv_btn_set_checkable(button_1, false);
    lv_btn_set_fit(button_1, LV_FIT_NONE);
    PG_EVENT(PGLDD_BUTTON0_0, button_1);
    button_1_ev_0 = button_1;

    return parent;
}
