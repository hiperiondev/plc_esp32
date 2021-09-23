#ifndef PAGE_WIFI_H
#define PAGE_WIFI_H

#ifdef __cplusplus
extern "C" {
#endif

/**********************
 *      INCLUDES
 **********************/

#include "lvgl.h"

/**********************
 *       WIDGETS
 **********************/

extern lv_obj_t* button_1_ev_0;
extern lv_obj_t* button_2_ev_0;
extern lv_obj_t* button_3_ev_0;
extern lv_obj_t* button_4_ev_0;
extern lv_obj_t* text_area_1_ev_0;
extern lv_obj_t* text_area_2_ev_0;
extern lv_obj_t* text_area_3_ev_0;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* page_wifi_create();

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*PAGE_WIFI_H*/
