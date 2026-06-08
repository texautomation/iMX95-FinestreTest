/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_scrECATband(lv_ui *ui)
{
    //Write codes scrECATband
    ui->scrECATband = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrECATband, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->scrECATband, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contToolbar
    ui->scrECATband_contToolbar = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contToolbar, 940, 680);
    lv_obj_set_size(ui->scrECATband_contToolbar, 330, 120);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contToolbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contToolbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contToolbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contToolbar, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contToolbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contRestart
    ui->scrECATband_contRestart = lv_obj_create(ui->scrECATband_contToolbar);
    lv_obj_set_pos(ui->scrECATband_contRestart, 0, 60);
    lv_obj_set_size(ui->scrECATband_contRestart, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contRestart, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contRestart, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contRestart, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contRestart, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contRestart, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contRestart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelRestart
    ui->scrECATband_labelRestart = lv_label_create(ui->scrECATband_contRestart);
    lv_obj_set_pos(ui->scrECATband_labelRestart, 0, 20);
    lv_obj_set_size(ui->scrECATband_labelRestart, 54, 30);
    lv_obj_add_flag(ui->scrECATband_labelRestart, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATband_labelRestart, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATband_labelRestart, "Restart");
    lv_label_set_long_mode(ui->scrECATband_labelRestart, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelRestart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelRestart, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelRestart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contReset
    ui->scrECATband_contReset = lv_obj_create(ui->scrECATband_contToolbar);
    lv_obj_set_pos(ui->scrECATband_contReset, 272, 0);
    lv_obj_set_size(ui->scrECATband_contReset, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contReset, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contReset, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contReset, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contReset, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contReset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contReset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelReset
    ui->scrECATband_labelReset = lv_label_create(ui->scrECATband_contReset);
    lv_obj_set_pos(ui->scrECATband_labelReset, 0, 12);
    lv_obj_set_size(ui->scrECATband_labelReset, 54, 30);
    lv_obj_add_flag(ui->scrECATband_labelReset, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATband_labelReset, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATband_labelReset, "Reset\ndata");
    lv_label_set_long_mode(ui->scrECATband_labelReset, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelReset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelReset, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelReset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contDown
    ui->scrECATband_contDown = lv_obj_create(ui->scrECATband_contToolbar);
    lv_obj_set_pos(ui->scrECATband_contDown, 204, 0);
    lv_obj_set_size(ui->scrECATband_contDown, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contDown, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contDown, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contDown, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contDown, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contDown, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgDown
    ui->scrECATband_imgDown = lv_image_create(ui->scrECATband_contDown);
    lv_obj_set_pos(ui->scrECATband_imgDown, 7, 7);
    lv_obj_set_size(ui->scrECATband_imgDown, 40, 40);
    lv_obj_add_flag(ui->scrECATband_imgDown, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATband_imgDown, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgDown, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgDown, &_Down_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATband_imgDown, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgDown, 0);

    //Write style for scrECATband_imgDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contUp
    ui->scrECATband_contUp = lv_obj_create(ui->scrECATband_contToolbar);
    lv_obj_set_pos(ui->scrECATband_contUp, 136, 0);
    lv_obj_set_size(ui->scrECATband_contUp, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contUp, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contUp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contUp, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contUp, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contUp, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgUp
    ui->scrECATband_imgUp = lv_image_create(ui->scrECATband_contUp);
    lv_obj_set_pos(ui->scrECATband_imgUp, 7, 7);
    lv_obj_set_size(ui->scrECATband_imgUp, 40, 40);
    lv_obj_add_flag(ui->scrECATband_imgUp, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATband_imgUp, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgUp, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgUp, &_Up_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATband_imgUp, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgUp, 0);

    //Write style for scrECATband_imgUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contEnd
    ui->scrECATband_contEnd = lv_obj_create(ui->scrECATband_contToolbar);
    lv_obj_set_pos(ui->scrECATband_contEnd, 68, 0);
    lv_obj_set_size(ui->scrECATband_contEnd, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contEnd, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contEnd, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contEnd, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contEnd, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contEnd, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contEnd, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgEnd
    ui->scrECATband_imgEnd = lv_image_create(ui->scrECATband_contEnd);
    lv_obj_set_pos(ui->scrECATband_imgEnd, 7, 7);
    lv_obj_set_size(ui->scrECATband_imgEnd, 40, 40);
    lv_obj_add_flag(ui->scrECATband_imgEnd, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATband_imgEnd, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgEnd, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgEnd, &_End_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATband_imgEnd, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgEnd, 0);

    //Write style for scrECATband_imgEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgEnd, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contHome
    ui->scrECATband_contHome = lv_obj_create(ui->scrECATband_contToolbar);
    lv_obj_set_pos(ui->scrECATband_contHome, 0, 0);
    lv_obj_set_size(ui->scrECATband_contHome, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contHome, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contHome, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contHome, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contHome, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contHome, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contHome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgHome
    ui->scrECATband_imgHome = lv_image_create(ui->scrECATband_contHome);
    lv_obj_set_pos(ui->scrECATband_imgHome, 7, 7);
    lv_obj_set_size(ui->scrECATband_imgHome, 40, 40);
    lv_obj_add_flag(ui->scrECATband_imgHome, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATband_imgHome, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgHome, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgHome, &_Home_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATband_imgHome, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgHome, 0);

    //Write style for scrECATband_imgHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgHome, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_cont_8
    ui->scrECATband_cont_8 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_cont_8, 1110, 510);
    lv_obj_set_size(ui->scrECATband_cont_8, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_cont_8, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_cont_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_cont_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_cont_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_cont_8, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_cont_8, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_cont_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_cont_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_cont_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_label_8
    ui->scrECATband_label_8 = lv_label_create(ui->scrECATband_cont_8);
    lv_obj_set_pos(ui->scrECATband_label_8, 30, 130);
    lv_obj_set_size(ui->scrECATband_label_8, 100, 30);
    lv_label_set_text(ui->scrECATband_label_8, "");
    lv_label_set_long_mode(ui->scrECATband_label_8, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_label_8, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_cont_7
    ui->scrECATband_cont_7 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_cont_7, 940, 510);
    lv_obj_set_size(ui->scrECATband_cont_7, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_cont_7, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_cont_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_cont_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_cont_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_cont_7, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_cont_7, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_cont_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_cont_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_cont_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_label_7
    ui->scrECATband_label_7 = lv_label_create(ui->scrECATband_cont_7);
    lv_obj_set_pos(ui->scrECATband_label_7, 30, 130);
    lv_obj_set_size(ui->scrECATband_label_7, 100, 30);
    lv_label_set_text(ui->scrECATband_label_7, "");
    lv_label_set_long_mode(ui->scrECATband_label_7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_label_7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contLost
    ui->scrECATband_contLost = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contLost, 1110, 340);
    lv_obj_set_size(ui->scrECATband_contLost, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contLost, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contLost, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contLost, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contLost, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contLost, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contLost, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgLost
    ui->scrECATband_imgLost = lv_image_create(ui->scrECATband_contLost);
    lv_obj_set_pos(ui->scrECATband_imgLost, 30, 30);
    lv_obj_set_size(ui->scrECATband_imgLost, 100, 100);
    lv_obj_add_flag(ui->scrECATband_imgLost, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgLost, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgLost, &_nodi_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATband_imgLost, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgLost, 0);

    //Write style for scrECATband_imgLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgLost, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contRegs
    ui->scrECATband_contRegs = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contRegs, 940, 340);
    lv_obj_set_size(ui->scrECATband_contRegs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contRegs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contRegs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contRegs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contRegs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contRegs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contRegs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgRegs
    ui->scrECATband_imgRegs = lv_image_create(ui->scrECATband_contRegs);
    lv_obj_set_pos(ui->scrECATband_imgRegs, 30, 30);
    lv_obj_set_size(ui->scrECATband_imgRegs, 100, 100);
    lv_obj_add_flag(ui->scrECATband_imgRegs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgRegs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgRegs, &_registri_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATband_imgRegs, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgRegs, 0);

    //Write style for scrECATband_imgRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgRegs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contMsgs
    ui->scrECATband_contMsgs = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contMsgs, 1110, 170);
    lv_obj_set_size(ui->scrECATband_contMsgs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contMsgs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contMsgs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contMsgs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contMsgs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contMsgs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contMsgs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgMsgs
    ui->scrECATband_imgMsgs = lv_image_create(ui->scrECATband_contMsgs);
    lv_obj_set_pos(ui->scrECATband_imgMsgs, 30, 30);
    lv_obj_set_size(ui->scrECATband_imgMsgs, 100, 100);
    lv_obj_add_flag(ui->scrECATband_imgMsgs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgMsgs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgMsgs, &_log_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATband_imgMsgs, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgMsgs, 0);

    //Write style for scrECATband_imgMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgMsgs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contNet
    ui->scrECATband_contNet = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contNet, 940, 170);
    lv_obj_set_size(ui->scrECATband_contNet, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contNet, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contNet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contNet, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contNet, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contNet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contNet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_imgNet
    ui->scrECATband_imgNet = lv_image_create(ui->scrECATband_contNet);
    lv_obj_set_pos(ui->scrECATband_imgNet, 30, 30);
    lv_obj_set_size(ui->scrECATband_imgNet, 100, 100);
    lv_obj_add_flag(ui->scrECATband_imgNet, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATband_imgNet, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATband_imgNet, &_main_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATband_imgNet, 50,50);
    lv_image_set_rotation(ui->scrECATband_imgNet, 0);

    //Write style for scrECATband_imgNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATband_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATband_imgNet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATband_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contUndo
    ui->scrECATband_contUndo = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contUndo, 1110, 0);
    lv_obj_set_size(ui->scrECATband_contUndo, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contUndo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contUndo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contUndo, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contUndo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contUndo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contUndo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelUndo
    ui->scrECATband_labelUndo = lv_label_create(ui->scrECATband_contUndo);
    lv_obj_set_pos(ui->scrECATband_labelUndo, 30, 130);
    lv_obj_set_size(ui->scrECATband_labelUndo, 100, 30);
    lv_obj_add_flag(ui->scrECATband_labelUndo, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATband_labelUndo, "UNDO");
    lv_label_set_long_mode(ui->scrECATband_labelUndo, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelUndo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelUndo, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelUndo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contMain
    ui->scrECATband_contMain = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contMain, 940, 0);
    lv_obj_set_size(ui->scrECATband_contMain, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contMain, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contMain, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contMain, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contMain, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contMain, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contMain, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelMain
    ui->scrECATband_labelMain = lv_label_create(ui->scrECATband_contMain);
    lv_obj_set_pos(ui->scrECATband_labelMain, 30, 130);
    lv_obj_set_size(ui->scrECATband_labelMain, 100, 30);
    lv_obj_add_flag(ui->scrECATband_labelMain, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATband_labelMain, "MAIN");
    lv_label_set_long_mode(ui->scrECATband_labelMain, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelMain, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelMain, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelMain, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contList
    ui->scrECATband_contList = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contList, 10, 325);
    lv_obj_set_size(ui->scrECATband_contList, 917, 309);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contList, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contList, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contList, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contList, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contList, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contList, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contList, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contList, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contList, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contList, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contList, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contList, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_listData
    ui->scrECATband_listData = lv_list_create(ui->scrECATband_contList);
    lv_obj_set_pos(ui->scrECATband_listData, 0, 22);
    lv_obj_set_size(ui->scrECATband_listData, 917, 285);
    lv_obj_set_scrollbar_mode(ui->scrECATband_listData, LV_SCROLLBAR_MODE_OFF);
    ui->scrECATband_listData_item0 =lv_list_add_text(ui->scrECATband_listData, "frame 1:");
    ui->scrECATband_listData_item1 =lv_list_add_text(ui->scrECATband_listData, "counter 1:");
    ui->scrECATband_listData_item2 =lv_list_add_text(ui->scrECATband_listData, "frame 2:");
    ui->scrECATband_listData_item3 =lv_list_add_text(ui->scrECATband_listData, "counter 2:");
    ui->scrECATband_listData_item4 =lv_list_add_text(ui->scrECATband_listData, "frame 3:");
    ui->scrECATband_listData_item5 =lv_list_add_text(ui->scrECATband_listData, "counter 3:");
    ui->scrECATband_listData_item6 =lv_list_add_text(ui->scrECATband_listData, "frame 4:");
    ui->scrECATband_listData_item7 =lv_list_add_text(ui->scrECATband_listData, "counter 4:");
    ui->scrECATband_listData_item8 =lv_list_add_text(ui->scrECATband_listData, "frame 5:");
    ui->scrECATband_listData_item9 =lv_list_add_text(ui->scrECATband_listData, "counter 5:");
    ui->scrECATband_listData_item10 =lv_list_add_text(ui->scrECATband_listData, "time slice:");
    ui->scrECATband_listData_item11 =lv_list_add_text(ui->scrECATband_listData, "sync:");
    ui->scrECATband_listData_item12 =lv_list_add_text(ui->scrECATband_listData, "ecat cycle:");

    //Write style state: LV_STATE_DEFAULT for &style_scrECATband_listData_main_main_default
    static lv_style_t style_scrECATband_listData_main_main_default;
    ui_init_style(&style_scrECATband_listData_main_main_default);

    lv_style_set_pad_top(&style_scrECATband_listData_main_main_default, 1);
    lv_style_set_pad_left(&style_scrECATband_listData_main_main_default, 0);
    lv_style_set_pad_right(&style_scrECATband_listData_main_main_default, 0);
    lv_style_set_pad_bottom(&style_scrECATband_listData_main_main_default, 1);
    lv_style_set_bg_opa(&style_scrECATband_listData_main_main_default, 255);
    lv_style_set_bg_color(&style_scrECATband_listData_main_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_bg_grad_dir(&style_scrECATband_listData_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_scrECATband_listData_main_main_default, 0);
    lv_style_set_radius(&style_scrECATband_listData_main_main_default, 0);
    lv_style_set_shadow_width(&style_scrECATband_listData_main_main_default, 0);
    lv_obj_add_style(ui->scrECATband_listData, &style_scrECATband_listData_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrECATband_listData_main_scrollbar_default
    static lv_style_t style_scrECATband_listData_main_scrollbar_default;
    ui_init_style(&style_scrECATband_listData_main_scrollbar_default);

    lv_style_set_radius(&style_scrECATband_listData_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scrECATband_listData_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scrECATband_listData_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrECATband_listData_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->scrECATband_listData, &style_scrECATband_listData_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrECATband_listData_extra_btns_main_default
    static lv_style_t style_scrECATband_listData_extra_btns_main_default;
    ui_init_style(&style_scrECATband_listData_extra_btns_main_default);

    lv_style_set_pad_top(&style_scrECATband_listData_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_scrECATband_listData_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_scrECATband_listData_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_scrECATband_listData_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_scrECATband_listData_extra_btns_main_default, 0);
    lv_style_set_text_color(&style_scrECATband_listData_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scrECATband_listData_extra_btns_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scrECATband_listData_extra_btns_main_default, 255);
    lv_style_set_radius(&style_scrECATband_listData_extra_btns_main_default, 3);
    lv_style_set_bg_opa(&style_scrECATband_listData_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_scrECATband_listData_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrECATband_listData_extra_btns_main_default, LV_GRAD_DIR_NONE);

    //Write style state: LV_STATE_DEFAULT for &style_scrECATband_listData_extra_texts_main_default
    static lv_style_t style_scrECATband_listData_extra_texts_main_default;
    ui_init_style(&style_scrECATband_listData_extra_texts_main_default);

    lv_style_set_pad_top(&style_scrECATband_listData_extra_texts_main_default, 3);
    lv_style_set_pad_left(&style_scrECATband_listData_extra_texts_main_default, 3);
    lv_style_set_pad_right(&style_scrECATband_listData_extra_texts_main_default, 3);
    lv_style_set_pad_bottom(&style_scrECATband_listData_extra_texts_main_default, 3);
    lv_style_set_border_width(&style_scrECATband_listData_extra_texts_main_default, 1);
    lv_style_set_border_opa(&style_scrECATband_listData_extra_texts_main_default, 255);
    lv_style_set_border_color(&style_scrECATband_listData_extra_texts_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scrECATband_listData_extra_texts_main_default, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM);
    lv_style_set_text_color(&style_scrECATband_listData_extra_texts_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scrECATband_listData_extra_texts_main_default, &lv_font_montserratMedium_14);
    lv_style_set_text_opa(&style_scrECATband_listData_extra_texts_main_default, 255);
    lv_style_set_radius(&style_scrECATband_listData_extra_texts_main_default, 0);
    lv_style_set_transform_width(&style_scrECATband_listData_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_scrECATband_listData_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_scrECATband_listData_extra_texts_main_default, lv_color_hex(0xb0b0b0));
    lv_style_set_bg_grad_dir(&style_scrECATband_listData_extra_texts_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->scrECATband_listData_item12, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item11, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item10, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item9, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item8, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item7, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item6, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item5, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item4, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item3, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item2, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item1, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrECATband_listData_item0, &style_scrECATband_listData_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contListDataValue
    ui->scrECATband_contListDataValue = lv_obj_create(ui->scrECATband_contList);
    lv_obj_set_pos(ui->scrECATband_contListDataValue, 0, 22);
    lv_obj_set_size(ui->scrECATband_contListDataValue, 917, 285);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contListDataValue, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contListDataValue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contListDataValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData13Value1
    ui->scrECATband_labelData13Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData13Value1, 150, 269);
    lv_obj_set_size(ui->scrECATband_labelData13Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData13Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData13Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData13Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData13Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData13Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData13Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData13Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData12Value1
    ui->scrECATband_labelData12Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData12Value1, 150, 247);
    lv_obj_set_size(ui->scrECATband_labelData12Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData12Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData12Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData12Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData12Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData12Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData12Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData12Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData11Value1
    ui->scrECATband_labelData11Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData11Value1, 150, 225);
    lv_obj_set_size(ui->scrECATband_labelData11Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData11Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData11Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData11Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData11Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData11Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData11Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData11Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData10Value1
    ui->scrECATband_labelData10Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData10Value1, 150, 203);
    lv_obj_set_size(ui->scrECATband_labelData10Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData10Value1, "0");
    lv_label_set_long_mode(ui->scrECATband_labelData10Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData10Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData10Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData10Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData10Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData10Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData9Value3
    ui->scrECATband_labelData9Value3 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData9Value3, 601, 181);
    lv_obj_set_size(ui->scrECATband_labelData9Value3, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData9Value3, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData9Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData9Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData9Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData9Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData9Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData9Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData9Value2
    ui->scrECATband_labelData9Value2 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData9Value2, 400, 181);
    lv_obj_set_size(ui->scrECATband_labelData9Value2, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData9Value2, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData9Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData9Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData9Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData9Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData9Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData9Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData9Value1
    ui->scrECATband_labelData9Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData9Value1, 150, 181);
    lv_obj_set_size(ui->scrECATband_labelData9Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData9Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData9Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData9Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData9Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData9Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData9Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData9Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData8Value1
    ui->scrECATband_labelData8Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData8Value1, 150, 159);
    lv_obj_set_size(ui->scrECATband_labelData8Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData8Value1, "0");
    lv_label_set_long_mode(ui->scrECATband_labelData8Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData8Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData8Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData8Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData8Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData8Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData7Value3
    ui->scrECATband_labelData7Value3 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData7Value3, 601, 137);
    lv_obj_set_size(ui->scrECATband_labelData7Value3, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData7Value3, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData7Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData7Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData7Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData7Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData7Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData7Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData7Value2
    ui->scrECATband_labelData7Value2 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData7Value2, 400, 137);
    lv_obj_set_size(ui->scrECATband_labelData7Value2, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData7Value2, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData7Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData7Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData7Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData7Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData7Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData7Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData7Value1
    ui->scrECATband_labelData7Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData7Value1, 150, 137);
    lv_obj_set_size(ui->scrECATband_labelData7Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData7Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData7Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData7Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData7Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData7Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData7Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData7Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData6Value1
    ui->scrECATband_labelData6Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData6Value1, 150, 115);
    lv_obj_set_size(ui->scrECATband_labelData6Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData6Value1, "0");
    lv_label_set_long_mode(ui->scrECATband_labelData6Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData6Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData6Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData6Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData6Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData6Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData5Value3
    ui->scrECATband_labelData5Value3 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData5Value3, 601, 93);
    lv_obj_set_size(ui->scrECATband_labelData5Value3, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData5Value3, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData5Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData5Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData5Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData5Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData5Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData5Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData5Value2
    ui->scrECATband_labelData5Value2 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData5Value2, 400, 93);
    lv_obj_set_size(ui->scrECATband_labelData5Value2, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData5Value2, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData5Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData5Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData5Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData5Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData5Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData5Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData5Value1
    ui->scrECATband_labelData5Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData5Value1, 150, 93);
    lv_obj_set_size(ui->scrECATband_labelData5Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData5Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData5Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData5Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData5Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData5Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData5Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData5Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData4Value1
    ui->scrECATband_labelData4Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData4Value1, 150, 71);
    lv_obj_set_size(ui->scrECATband_labelData4Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData4Value1, "0");
    lv_label_set_long_mode(ui->scrECATband_labelData4Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData4Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData4Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData4Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData4Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData4Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData3Value3
    ui->scrECATband_labelData3Value3 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData3Value3, 601, 49);
    lv_obj_set_size(ui->scrECATband_labelData3Value3, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData3Value3, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData3Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData3Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData3Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData3Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData3Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData3Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData3Value2
    ui->scrECATband_labelData3Value2 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData3Value2, 400, 49);
    lv_obj_set_size(ui->scrECATband_labelData3Value2, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData3Value2, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData3Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData3Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData3Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData3Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData3Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData3Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData3Value1
    ui->scrECATband_labelData3Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData3Value1, 150, 49);
    lv_obj_set_size(ui->scrECATband_labelData3Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData3Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData3Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData3Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData3Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData3Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData3Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData3Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData2Value1
    ui->scrECATband_labelData2Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData2Value1, 150, 27);
    lv_obj_set_size(ui->scrECATband_labelData2Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData2Value1, "0");
    lv_label_set_long_mode(ui->scrECATband_labelData2Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData2Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData2Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData2Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData2Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData2Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData1Value3
    ui->scrECATband_labelData1Value3 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData1Value3, 601, 5);
    lv_obj_set_size(ui->scrECATband_labelData1Value3, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData1Value3, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData1Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData1Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData1Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData1Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData1Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData1Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData1Value2
    ui->scrECATband_labelData1Value2 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData1Value2, 400, 5);
    lv_obj_set_size(ui->scrECATband_labelData1Value2, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData1Value2, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData1Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData1Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData1Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData1Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData1Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData1Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelData1Value1
    ui->scrECATband_labelData1Value1 = lv_label_create(ui->scrECATband_contListDataValue);
    lv_obj_set_pos(ui->scrECATband_labelData1Value1, 150, 5);
    lv_obj_set_size(ui->scrECATband_labelData1Value1, 150, 14);
    lv_label_set_text(ui->scrECATband_labelData1Value1, "0 us");
    lv_label_set_long_mode(ui->scrECATband_labelData1Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelData1Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelData1Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelData1Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelData1Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelData1Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelData1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_conttListTtle
    ui->scrECATband_conttListTtle = lv_obj_create(ui->scrECATband_contList);
    lv_obj_set_pos(ui->scrECATband_conttListTtle, 0, 0);
    lv_obj_set_size(ui->scrECATband_conttListTtle, 917, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATband_conttListTtle, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_conttListTtle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_conttListTtle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_conttListTtle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_conttListTtle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_conttListTtle, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_conttListTtle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_conttListTtle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_conttListTtle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_conttListTtle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_conttListTtle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_conttListTtle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelListTtle2
    ui->scrECATband_labelListTtle2 = lv_label_create(ui->scrECATband_conttListTtle);
    lv_obj_set_pos(ui->scrECATband_labelListTtle2, 601, 4);
    lv_obj_set_size(ui->scrECATband_labelListTtle2, 200, 14);
    lv_label_set_text(ui->scrECATband_labelListTtle2, "Rx");
    lv_label_set_long_mode(ui->scrECATband_labelListTtle2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelListTtle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelListTtle2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelListTtle2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelListTtle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelListTtle2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelListTtle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelListTtle1
    ui->scrECATband_labelListTtle1 = lv_label_create(ui->scrECATband_conttListTtle);
    lv_obj_set_pos(ui->scrECATband_labelListTtle1, 400, 4);
    lv_obj_set_size(ui->scrECATband_labelListTtle1, 200, 14);
    lv_label_set_text(ui->scrECATband_labelListTtle1, "Tx");
    lv_label_set_long_mode(ui->scrECATband_labelListTtle1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelListTtle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelListTtle1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelListTtle1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelListTtle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelListTtle1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelListTtle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_lineSeparation
    ui->scrECATband_lineSeparation = lv_line_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_lineSeparation, 10, 290);
    lv_obj_set_size(ui->scrECATband_lineSeparation, 917, 2);
    static lv_point_precise_t scrECATband_lineSeparation[] = {{0, 0},{937, 1}};
    lv_line_set_points(ui->scrECATband_lineSeparation, scrECATband_lineSeparation, 2);

    //Write style for scrECATband_lineSeparation, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scrECATband_lineSeparation, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scrECATband_lineSeparation, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scrECATband_lineSeparation, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scrECATband_lineSeparation, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contBar6
    ui->scrECATband_contBar6 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contBar6, 0, 240);
    lv_obj_set_size(ui->scrECATband_contBar6, 937, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contBar6, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contBar6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contBar6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contBar6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contBar6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_bar6
    ui->scrECATband_bar6 = lv_bar_create(ui->scrECATband_contBar6);
    lv_obj_set_pos(ui->scrECATband_bar6, 125, 0);
    lv_obj_set_size(ui->scrECATband_bar6, 800, 20);
    lv_obj_set_style_anim_duration(ui->scrECATband_bar6, 1000, 0);
    lv_bar_set_mode(ui->scrECATband_bar6, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->scrECATband_bar6, 0, 1000);
    lv_bar_set_value(ui->scrECATband_bar6, 0, LV_ANIM_OFF);

    //Write style for scrECATband_bar6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar6, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar6, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_bar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATband_bar6, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar6, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar6, lv_color_hex(0x606060), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar6, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar6, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelBar6
    ui->scrECATband_labelBar6 = lv_label_create(ui->scrECATband_contBar6);
    lv_obj_set_pos(ui->scrECATband_labelBar6, 0, 5);
    lv_obj_set_size(ui->scrECATband_labelBar6, 80, 20);
    lv_label_set_text(ui->scrECATband_labelBar6, "frame 5");
    lv_label_set_long_mode(ui->scrECATband_labelBar6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelBar6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelBar6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelBar6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelBar6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelBar6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelBar6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contBar5
    ui->scrECATband_contBar5 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contBar5, 0, 210);
    lv_obj_set_size(ui->scrECATband_contBar5, 937, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contBar5, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contBar5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contBar5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contBar5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contBar5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_bar5
    ui->scrECATband_bar5 = lv_bar_create(ui->scrECATband_contBar5);
    lv_obj_set_pos(ui->scrECATband_bar5, 125, 0);
    lv_obj_set_size(ui->scrECATband_bar5, 800, 20);
    lv_obj_set_style_anim_duration(ui->scrECATband_bar5, 1000, 0);
    lv_bar_set_mode(ui->scrECATband_bar5, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->scrECATband_bar5, 0, 1000);
    lv_bar_set_value(ui->scrECATband_bar5, 0, LV_ANIM_OFF);

    //Write style for scrECATband_bar5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar5, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar5, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_bar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATband_bar5, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar5, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar5, lv_color_hex(0x606060), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar5, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelBar5
    ui->scrECATband_labelBar5 = lv_label_create(ui->scrECATband_contBar5);
    lv_obj_set_pos(ui->scrECATband_labelBar5, 0, 5);
    lv_obj_set_size(ui->scrECATband_labelBar5, 80, 20);
    lv_label_set_text(ui->scrECATband_labelBar5, "frame 4");
    lv_label_set_long_mode(ui->scrECATband_labelBar5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelBar5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelBar5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelBar5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelBar5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelBar5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelBar5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contBar4
    ui->scrECATband_contBar4 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contBar4, 0, 180);
    lv_obj_set_size(ui->scrECATband_contBar4, 937, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contBar4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contBar4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contBar4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contBar4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contBar4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_bar4
    ui->scrECATband_bar4 = lv_bar_create(ui->scrECATband_contBar4);
    lv_obj_set_pos(ui->scrECATband_bar4, 125, 0);
    lv_obj_set_size(ui->scrECATband_bar4, 800, 20);
    lv_obj_set_style_anim_duration(ui->scrECATband_bar4, 1000, 0);
    lv_bar_set_mode(ui->scrECATband_bar4, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->scrECATband_bar4, 0, 1000);
    lv_bar_set_value(ui->scrECATband_bar4, 0, LV_ANIM_OFF);

    //Write style for scrECATband_bar4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar4, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_bar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATband_bar4, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar4, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar4, lv_color_hex(0x606060), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar4, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelBar4
    ui->scrECATband_labelBar4 = lv_label_create(ui->scrECATband_contBar4);
    lv_obj_set_pos(ui->scrECATband_labelBar4, 0, 5);
    lv_obj_set_size(ui->scrECATband_labelBar4, 80, 20);
    lv_label_set_text(ui->scrECATband_labelBar4, "frame 3");
    lv_label_set_long_mode(ui->scrECATband_labelBar4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelBar4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelBar4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelBar4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelBar4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelBar4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelBar4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contBar3
    ui->scrECATband_contBar3 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contBar3, 0, 150);
    lv_obj_set_size(ui->scrECATband_contBar3, 937, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contBar3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contBar3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contBar3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contBar3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contBar3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_bar3
    ui->scrECATband_bar3 = lv_bar_create(ui->scrECATband_contBar3);
    lv_obj_set_pos(ui->scrECATband_bar3, 125, 0);
    lv_obj_set_size(ui->scrECATband_bar3, 800, 20);
    lv_obj_set_style_anim_duration(ui->scrECATband_bar3, 1000, 0);
    lv_bar_set_mode(ui->scrECATband_bar3, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->scrECATband_bar3, 0, 1000);
    lv_bar_set_value(ui->scrECATband_bar3, 0, LV_ANIM_OFF);

    //Write style for scrECATband_bar3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar3, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_bar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATband_bar3, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar3, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar3, lv_color_hex(0x606060), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar3, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelBar3
    ui->scrECATband_labelBar3 = lv_label_create(ui->scrECATband_contBar3);
    lv_obj_set_pos(ui->scrECATband_labelBar3, 0, 5);
    lv_obj_set_size(ui->scrECATband_labelBar3, 80, 20);
    lv_label_set_text(ui->scrECATband_labelBar3, "frame 2");
    lv_label_set_long_mode(ui->scrECATband_labelBar3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelBar3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelBar3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelBar3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelBar3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelBar3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelBar3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contBar2
    ui->scrECATband_contBar2 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contBar2, 0, 120);
    lv_obj_set_size(ui->scrECATband_contBar2, 937, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contBar2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contBar2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contBar2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contBar2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contBar2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_bar2
    ui->scrECATband_bar2 = lv_bar_create(ui->scrECATband_contBar2);
    lv_obj_set_pos(ui->scrECATband_bar2, 125, 0);
    lv_obj_set_size(ui->scrECATband_bar2, 800, 20);
    lv_obj_set_style_anim_duration(ui->scrECATband_bar2, 1000, 0);
    lv_bar_set_mode(ui->scrECATband_bar2, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->scrECATband_bar2, 0, 1000);
    lv_bar_set_value(ui->scrECATband_bar2, 0, LV_ANIM_OFF);

    //Write style for scrECATband_bar2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar2, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_bar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATband_bar2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar2, lv_color_hex(0x606060), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar2, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelBar2
    ui->scrECATband_labelBar2 = lv_label_create(ui->scrECATband_contBar2);
    lv_obj_set_pos(ui->scrECATband_labelBar2, 0, 5);
    lv_obj_set_size(ui->scrECATband_labelBar2, 80, 20);
    lv_label_set_text(ui->scrECATband_labelBar2, "frame 1");
    lv_label_set_long_mode(ui->scrECATband_labelBar2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelBar2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelBar2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelBar2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelBar2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelBar2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelBar2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contBar1
    ui->scrECATband_contBar1 = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contBar1, 0, 90);
    lv_obj_set_size(ui->scrECATband_contBar1, 937, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contBar1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contBar1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contBar1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contBar1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contBar1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_bar1
    ui->scrECATband_bar1 = lv_bar_create(ui->scrECATband_contBar1);
    lv_obj_set_pos(ui->scrECATband_bar1, 125, 0);
    lv_obj_set_size(ui->scrECATband_bar1, 800, 20);
    lv_obj_set_style_anim_duration(ui->scrECATband_bar1, 1000, 0);
    lv_bar_set_mode(ui->scrECATband_bar1, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->scrECATband_bar1, 0, 1000);
    lv_bar_set_value(ui->scrECATband_bar1, 0, LV_ANIM_OFF);

    //Write style for scrECATband_bar1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar1, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_bar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATband_bar1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_bar1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_bar1, lv_color_hex(0x606060), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_bar1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_bar1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelBar1
    ui->scrECATband_labelBar1 = lv_label_create(ui->scrECATband_contBar1);
    lv_obj_set_pos(ui->scrECATband_labelBar1, 0, 5);
    lv_obj_set_size(ui->scrECATband_labelBar1, 100, 20);
    lv_label_set_text(ui->scrECATband_labelBar1, "ecat cycle");
    lv_label_set_long_mode(ui->scrECATband_labelBar1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelBar1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelBar1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelBar1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelBar1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelBar1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelBar1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_labelTitle
    ui->scrECATband_labelTitle = lv_label_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_labelTitle, 0, 50);
    lv_obj_set_size(ui->scrECATband_labelTitle, 937, 32);
    lv_label_set_text(ui->scrECATband_labelTitle, "Ethercat Bandwidth");
    lv_label_set_long_mode(ui->scrECATband_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrECATband_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATband_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_labelTitle, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_contAlarm
    ui->scrECATband_contAlarm = lv_obj_create(ui->scrECATband);
    lv_obj_set_pos(ui->scrECATband_contAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATband_contAlarm, 937, 32);
    lv_obj_set_scrollbar_mode(ui->scrECATband_contAlarm, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATband_contAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATband_contAlarm, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATband_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATband_contAlarm, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATband_contAlarm, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_contAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_contAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATband_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATband_taAlarm
    ui->scrECATband_taAlarm = lv_textarea_create(ui->scrECATband_contAlarm);
    lv_obj_set_pos(ui->scrECATband_taAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATband_taAlarm, 933, 24);
    lv_textarea_set_text(ui->scrECATband_taAlarm, "");
    lv_textarea_set_placeholder_text(ui->scrECATband_taAlarm, "");
    lv_textarea_set_password_bullet(ui->scrECATband_taAlarm, "*");
    lv_textarea_set_password_mode(ui->scrECATband_taAlarm, false);
    lv_textarea_set_one_line(ui->scrECATband_taAlarm, true);
    lv_textarea_set_accepted_chars(ui->scrECATband_taAlarm, "");
    lv_textarea_set_max_length(ui->scrECATband_taAlarm, 90);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scrECATband_taAlarm, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scrECATband_taAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATband_taAlarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATband_taAlarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATband_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATband_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATband_taAlarm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATband_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_taAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_taAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATband_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATband_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATband_taAlarm, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATband_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATband_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATband_taAlarm, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATband_taAlarm, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATband_taAlarm, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATband_taAlarm, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATband_taAlarm, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scrECATband.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrECATband);

    //Init events for screen.
    events_init_scrECATband(ui);
}
