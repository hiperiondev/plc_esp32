#ifndef PAGE_YESNO_H
#define PAGE_YESNO_H

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
extern lv_obj_t* text_area_1_ev_0;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* page_yesno_create();

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*PAGE_YESNO_H*/
