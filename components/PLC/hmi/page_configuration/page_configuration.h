#ifndef PAGE_CONFIGURATION_H
#define PAGE_CONFIGURATION_H

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
extern lv_obj_t* button_5_ev_0;
extern lv_obj_t* button_6_ev_0;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* page_configuration_create();

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*PAGE_CONFIGURATION_H*/
