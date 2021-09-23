#ifndef PAGE_FIRMWARE_H
#define PAGE_FIRMWARE_H

#ifdef __cplusplus
extern "C" {
#endif

/**********************
 *      INCLUDES
 **********************/

#include "lvgl/lvgl.h"

/**********************
 *       WIDGETS
 **********************/

extern lv_obj_t* text_area_1_ev_0;
extern lv_obj_t* button_5_ev_0;
extern lv_obj_t* text_area_2_ev_0;
extern lv_obj_t* button_1_ev_0;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* page_firmware_create();

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*PAGE_FIRMWARE_H*/