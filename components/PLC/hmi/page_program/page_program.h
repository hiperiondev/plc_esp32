#ifndef PAGE_PROGRAM_H
#define PAGE_PROGRAM_H

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

extern lv_obj_t* button_5_ev_0;
extern lv_obj_t* roller_1_ev_0;
extern lv_obj_t* label_2_ev_0;
extern lv_obj_t* button_1_ev_0;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* page_program_create();

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*PAGE_PROGRAM_H*/
