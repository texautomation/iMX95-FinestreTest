/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include "ecat_usr.h"
#include "ecatSharedMemory.h"

#define N_MAX_CHAR_TABLE    128

extern int slaveNum;								/*numero slave presenti*/

void custom_init(lv_ui *ui);
void select_row_table_draw_event_cb(lv_event_t * e);
void apri_msgbox_selezione_slave ( lv_event_t *e );
void set_style_title_table(lv_obj_t *table);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
