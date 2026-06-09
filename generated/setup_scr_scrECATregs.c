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



void setup_scr_scrECATregs(lv_ui *ui)
{
    //Write codes scrECATregs
    ui->scrECATregs = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrECATregs, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->scrECATregs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATregs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contToolbar
    ui->scrECATregs_contToolbar = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contToolbar, 940, 680);
    lv_obj_set_size(ui->scrECATregs_contToolbar, 330, 120);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contToolbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contToolbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contToolbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contToolbar, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contToolbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contRestart
    ui->scrECATregs_contRestart = lv_obj_create(ui->scrECATregs_contToolbar);
    lv_obj_set_pos(ui->scrECATregs_contRestart, 0, 60);
    lv_obj_set_size(ui->scrECATregs_contRestart, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contRestart, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contRestart, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contRestart, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contRestart, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contRestart, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contRestart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelRestart
    ui->scrECATregs_labelRestart = lv_label_create(ui->scrECATregs_contRestart);
    lv_obj_set_pos(ui->scrECATregs_labelRestart, 0, 20);
    lv_obj_set_size(ui->scrECATregs_labelRestart, 54, 30);
    lv_obj_add_flag(ui->scrECATregs_labelRestart, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATregs_labelRestart, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATregs_labelRestart, "Restart");
    lv_label_set_long_mode(ui->scrECATregs_labelRestart, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelRestart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelRestart, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelRestart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contReset
    ui->scrECATregs_contReset = lv_obj_create(ui->scrECATregs_contToolbar);
    lv_obj_set_pos(ui->scrECATregs_contReset, 272, 0);
    lv_obj_set_size(ui->scrECATregs_contReset, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contReset, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contReset, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contReset, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contReset, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contReset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contReset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelReset
    ui->scrECATregs_labelReset = lv_label_create(ui->scrECATregs_contReset);
    lv_obj_set_pos(ui->scrECATregs_labelReset, 0, 12);
    lv_obj_set_size(ui->scrECATregs_labelReset, 54, 30);
    lv_obj_add_flag(ui->scrECATregs_labelReset, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATregs_labelReset, "Reset\ndata");
    lv_label_set_long_mode(ui->scrECATregs_labelReset, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelReset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelReset, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelReset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contDown
    ui->scrECATregs_contDown = lv_obj_create(ui->scrECATregs_contToolbar);
    lv_obj_set_pos(ui->scrECATregs_contDown, 204, 0);
    lv_obj_set_size(ui->scrECATregs_contDown, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contDown, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contDown, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contDown, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contDown, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contDown, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgDown
    ui->scrECATregs_imgDown = lv_image_create(ui->scrECATregs_contDown);
    lv_obj_set_pos(ui->scrECATregs_imgDown, 7, 7);
    lv_obj_set_size(ui->scrECATregs_imgDown, 40, 40);
    lv_obj_add_flag(ui->scrECATregs_imgDown, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATregs_imgDown, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgDown, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgDown, &_Down_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATregs_imgDown, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgDown, 0);

    //Write style for scrECATregs_imgDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contUp
    ui->scrECATregs_contUp = lv_obj_create(ui->scrECATregs_contToolbar);
    lv_obj_set_pos(ui->scrECATregs_contUp, 136, 0);
    lv_obj_set_size(ui->scrECATregs_contUp, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contUp, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contUp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contUp, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contUp, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contUp, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgUp
    ui->scrECATregs_imgUp = lv_image_create(ui->scrECATregs_contUp);
    lv_obj_set_pos(ui->scrECATregs_imgUp, 7, 7);
    lv_obj_set_size(ui->scrECATregs_imgUp, 40, 40);
    lv_obj_add_flag(ui->scrECATregs_imgUp, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATregs_imgUp, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgUp, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgUp, &_Up_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATregs_imgUp, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgUp, 0);

    //Write style for scrECATregs_imgUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contEnd
    ui->scrECATregs_contEnd = lv_obj_create(ui->scrECATregs_contToolbar);
    lv_obj_set_pos(ui->scrECATregs_contEnd, 68, 0);
    lv_obj_set_size(ui->scrECATregs_contEnd, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contEnd, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contEnd, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contEnd, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contEnd, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contEnd, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contEnd, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgEnd
    ui->scrECATregs_imgEnd = lv_image_create(ui->scrECATregs_contEnd);
    lv_obj_set_pos(ui->scrECATregs_imgEnd, 7, 7);
    lv_obj_set_size(ui->scrECATregs_imgEnd, 40, 40);
    lv_obj_add_flag(ui->scrECATregs_imgEnd, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATregs_imgEnd, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgEnd, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgEnd, &_End_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATregs_imgEnd, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgEnd, 0);

    //Write style for scrECATregs_imgEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgEnd, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contHome
    ui->scrECATregs_contHome = lv_obj_create(ui->scrECATregs_contToolbar);
    lv_obj_set_pos(ui->scrECATregs_contHome, 0, 0);
    lv_obj_set_size(ui->scrECATregs_contHome, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contHome, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contHome, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contHome, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contHome, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contHome, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contHome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgHome
    ui->scrECATregs_imgHome = lv_image_create(ui->scrECATregs_contHome);
    lv_obj_set_pos(ui->scrECATregs_imgHome, 7, 7);
    lv_obj_set_size(ui->scrECATregs_imgHome, 40, 40);
    lv_obj_add_flag(ui->scrECATregs_imgHome, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATregs_imgHome, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgHome, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgHome, &_Home_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATregs_imgHome, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgHome, 0);

    //Write style for scrECATregs_imgHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgHome, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contExport
    ui->scrECATregs_contExport = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contExport, 1110, 510);
    lv_obj_set_size(ui->scrECATregs_contExport, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contExport, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contExport, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contExport, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contExport, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contExport, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contExport, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelExport
    ui->scrECATregs_labelExport = lv_label_create(ui->scrECATregs_contExport);
    lv_obj_set_pos(ui->scrECATregs_labelExport, 30, 130);
    lv_obj_set_size(ui->scrECATregs_labelExport, 100, 30);
    lv_label_set_text(ui->scrECATregs_labelExport, "");
    lv_label_set_long_mode(ui->scrECATregs_labelExport, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelExport, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelExport, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelExport, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contBand
    ui->scrECATregs_contBand = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contBand, 940, 510);
    lv_obj_set_size(ui->scrECATregs_contBand, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contBand, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contBand, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contBand, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contBand, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contBand, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contBand, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgBand
    ui->scrECATregs_imgBand = lv_image_create(ui->scrECATregs_contBand);
    lv_obj_set_pos(ui->scrECATregs_imgBand, 30, 30);
    lv_obj_set_size(ui->scrECATregs_imgBand, 100, 100);
    lv_obj_add_flag(ui->scrECATregs_imgBand, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgBand, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgBand, &_banda_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATregs_imgBand, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgBand, 0);

    //Write style for scrECATregs_imgBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgBand, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contLost
    ui->scrECATregs_contLost = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contLost, 1110, 340);
    lv_obj_set_size(ui->scrECATregs_contLost, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contLost, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contLost, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contLost, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contLost, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contLost, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contLost, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgLost
    ui->scrECATregs_imgLost = lv_image_create(ui->scrECATregs_contLost);
    lv_obj_set_pos(ui->scrECATregs_imgLost, 30, 30);
    lv_obj_set_size(ui->scrECATregs_imgLost, 100, 100);
    lv_obj_add_flag(ui->scrECATregs_imgLost, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgLost, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgLost, &_nodi_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATregs_imgLost, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgLost, 0);

    //Write style for scrECATregs_imgLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgLost, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contRegs
    ui->scrECATregs_contRegs = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contRegs, 940, 340);
    lv_obj_set_size(ui->scrECATregs_contRegs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contRegs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contRegs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contRegs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contRegs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contRegs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contRegs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelRegs
    ui->scrECATregs_labelRegs = lv_label_create(ui->scrECATregs_contRegs);
    lv_obj_set_pos(ui->scrECATregs_labelRegs, 30, 130);
    lv_obj_set_size(ui->scrECATregs_labelRegs, 100, 30);
    lv_label_set_text(ui->scrECATregs_labelRegs, "");
    lv_label_set_long_mode(ui->scrECATregs_labelRegs, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelRegs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelRegs, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelRegs, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contMsgs
    ui->scrECATregs_contMsgs = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contMsgs, 1110, 170);
    lv_obj_set_size(ui->scrECATregs_contMsgs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contMsgs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contMsgs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contMsgs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contMsgs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contMsgs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contMsgs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgMsgs
    ui->scrECATregs_imgMsgs = lv_image_create(ui->scrECATregs_contMsgs);
    lv_obj_set_pos(ui->scrECATregs_imgMsgs, 30, 30);
    lv_obj_set_size(ui->scrECATregs_imgMsgs, 100, 100);
    lv_obj_add_flag(ui->scrECATregs_imgMsgs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgMsgs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgMsgs, &_log_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATregs_imgMsgs, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgMsgs, 0);

    //Write style for scrECATregs_imgMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgMsgs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contNet
    ui->scrECATregs_contNet = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contNet, 940, 170);
    lv_obj_set_size(ui->scrECATregs_contNet, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contNet, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contNet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contNet, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contNet, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contNet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contNet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_imgNet
    ui->scrECATregs_imgNet = lv_image_create(ui->scrECATregs_contNet);
    lv_obj_set_pos(ui->scrECATregs_imgNet, 30, 30);
    lv_obj_set_size(ui->scrECATregs_imgNet, 100, 100);
    lv_obj_add_flag(ui->scrECATregs_imgNet, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATregs_imgNet, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATregs_imgNet, &_main_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATregs_imgNet, 50,50);
    lv_image_set_rotation(ui->scrECATregs_imgNet, 0);

    //Write style for scrECATregs_imgNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATregs_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATregs_imgNet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATregs_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contUndo
    ui->scrECATregs_contUndo = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contUndo, 1110, 0);
    lv_obj_set_size(ui->scrECATregs_contUndo, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contUndo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contUndo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contUndo, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contUndo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contUndo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contUndo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelUndo
    ui->scrECATregs_labelUndo = lv_label_create(ui->scrECATregs_contUndo);
    lv_obj_set_pos(ui->scrECATregs_labelUndo, 30, 130);
    lv_obj_set_size(ui->scrECATregs_labelUndo, 100, 30);
    lv_obj_add_flag(ui->scrECATregs_labelUndo, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATregs_labelUndo, "UNDO");
    lv_label_set_long_mode(ui->scrECATregs_labelUndo, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelUndo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelUndo, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelUndo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contMain
    ui->scrECATregs_contMain = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contMain, 940, 0);
    lv_obj_set_size(ui->scrECATregs_contMain, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contMain, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contMain, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contMain, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contMain, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contMain, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contMain, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelMain
    ui->scrECATregs_labelMain = lv_label_create(ui->scrECATregs_contMain);
    lv_obj_set_pos(ui->scrECATregs_labelMain, 30, 130);
    lv_obj_set_size(ui->scrECATregs_labelMain, 100, 30);
    lv_obj_add_flag(ui->scrECATregs_labelMain, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATregs_labelMain, "MAIN");
    lv_label_set_long_mode(ui->scrECATregs_labelMain, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelMain, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelMain, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelMain, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contWin
    ui->scrECATregs_contWin = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contWin, 10, 90);
    lv_obj_set_size(ui->scrECATregs_contWin, 917, 580);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contWin, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contWin, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contWin, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contWin, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contWin, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contLL
    ui->scrECATregs_contLL = lv_obj_create(ui->scrECATregs_contWin);
    lv_obj_set_pos(ui->scrECATregs_contLL, 0, 480);
    lv_obj_set_size(ui->scrECATregs_contLL, 917, 100);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contLL, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATregs_contLL, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATregs_contLL, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contLL, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contLL, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contLL, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_tableLL
    ui->scrECATregs_tableLL = lv_table_create(ui->scrECATregs_contLL);
    lv_obj_set_pos(ui->scrECATregs_tableLL, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_tableLL, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_tableLL, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATregs_tableLL,2);
    lv_table_set_row_count(ui->scrECATregs_tableLL,5);
    lv_table_set_cell_value(ui->scrECATregs_tableLL,0,0,"Lost Link counter");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,1,0,"0x0310 - Lost Link counter of Port 0");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,2,0,"0x0311 - Lost Link counter of Port 1");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,3,0,"0x0312- Lost Link counter of Port 2");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,4,0,"0x0313- Lost Link counter of Port 3");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,0,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,1,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,2,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,3,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableLL,4,1,"");

    //Write style for scrECATregs_tableLL, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATregs_tableLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableLL, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableLL, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableLL, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_tableLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_tableLL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_tableLL, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_tableLL, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_tableLL, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_tableLL, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_tableLL, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableLL, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableLL, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableLL, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableLL, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_tableLL, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_tableLL, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_tableLL, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_tableLL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableLL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableLL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableLL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contPDI
    ui->scrECATregs_contPDI = lv_obj_create(ui->scrECATregs_contWin);
    lv_obj_set_pos(ui->scrECATregs_contPDI, 452, 440);
    lv_obj_set_size(ui->scrECATregs_contPDI, 465, 40);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contPDI, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATregs_contPDI, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATregs_contPDI, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contPDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contPDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contPDI, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contPDI, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contPDI, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contPDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contPDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contPDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contPDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contPDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_tablePDI
    ui->scrECATregs_tablePDI = lv_table_create(ui->scrECATregs_contPDI);
    lv_obj_set_pos(ui->scrECATregs_tablePDI, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_tablePDI, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_tablePDI, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATregs_tablePDI,2);
    lv_table_set_row_count(ui->scrECATregs_tablePDI,2);
    lv_table_set_cell_value(ui->scrECATregs_tablePDI,0,0,"PDI error counter");
    lv_table_set_cell_value(ui->scrECATregs_tablePDI,1,0,"0x030D - PDI error counter");
    lv_table_set_cell_value(ui->scrECATregs_tablePDI,0,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tablePDI,1,1,"");

    //Write style for scrECATregs_tablePDI, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATregs_tablePDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tablePDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tablePDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tablePDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tablePDI, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tablePDI, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tablePDI, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tablePDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_tablePDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_tablePDI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_tablePDI, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_tablePDI, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_tablePDI, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_tablePDI, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_tablePDI, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tablePDI, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tablePDI, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tablePDI, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tablePDI, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_tablePDI, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_tablePDI, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_tablePDI, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_tablePDI, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tablePDI, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tablePDI, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tablePDI, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contPU
    ui->scrECATregs_contPU = lv_obj_create(ui->scrECATregs_contWin);
    lv_obj_set_pos(ui->scrECATregs_contPU, 452, 400);
    lv_obj_set_size(ui->scrECATregs_contPU, 465, 40);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contPU, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATregs_contPU, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATregs_contPU, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contPU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contPU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contPU, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contPU, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contPU, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contPU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contPU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contPU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contPU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contPU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_tablePU
    ui->scrECATregs_tablePU = lv_table_create(ui->scrECATregs_contPU);
    lv_obj_set_pos(ui->scrECATregs_tablePU, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_tablePU, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_tablePU, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATregs_tablePU,2);
    lv_table_set_row_count(ui->scrECATregs_tablePU,2);
    lv_table_set_cell_value(ui->scrECATregs_tablePU,0,0,"ECAT PU error counter");
    lv_table_set_cell_value(ui->scrECATregs_tablePU,1,0,"0x030C - ECAT PU error counter");
    lv_table_set_cell_value(ui->scrECATregs_tablePU,0,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tablePU,1,1,"");

    //Write style for scrECATregs_tablePU, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATregs_tablePU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tablePU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tablePU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tablePU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tablePU, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tablePU, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tablePU, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tablePU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_tablePU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_tablePU, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_tablePU, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_tablePU, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_tablePU, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_tablePU, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_tablePU, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tablePU, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tablePU, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tablePU, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tablePU, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_tablePU, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_tablePU, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_tablePU, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_tablePU, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tablePU, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tablePU, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tablePU, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contFwRxError
    ui->scrECATregs_contFwRxError = lv_obj_create(ui->scrECATregs_contWin);
    lv_obj_set_pos(ui->scrECATregs_contFwRxError, 452, 300);
    lv_obj_set_size(ui->scrECATregs_contFwRxError, 465, 100);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contFwRxError, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATregs_contFwRxError, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATregs_contFwRxError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contFwRxError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contFwRxError, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contFwRxError, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_tableFwRxError
    ui->scrECATregs_tableFwRxError = lv_table_create(ui->scrECATregs_contFwRxError);
    lv_obj_set_pos(ui->scrECATregs_tableFwRxError, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_tableFwRxError, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_tableFwRxError, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATregs_tableFwRxError,2);
    lv_table_set_row_count(ui->scrECATregs_tableFwRxError,5);
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,0,0,"Forwarded Rx error counter");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,1,0,"0x0308 - Forwarded Rx error counter of Port 0");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,2,0,"0x0309 - Forwarded Rx error counter of Port 1");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,3,0,"0x030A - Forwarded Rx error counter of Port 2");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,4,0,"0x030B - Forwarded Rx error counter of Port 3");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,0,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,1,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,2,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,3,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableFwRxError,4,1,"");

    //Write style for scrECATregs_tableFwRxError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATregs_tableFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableFwRxError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableFwRxError, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableFwRxError, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_tableFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_tableFwRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_tableFwRxError, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_tableFwRxError, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_tableFwRxError, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_tableFwRxError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_tableFwRxError, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableFwRxError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableFwRxError, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableFwRxError, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableFwRxError, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_tableFwRxError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_tableFwRxError, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_tableFwRxError, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_tableFwRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableFwRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableFwRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableFwRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contRxError
    ui->scrECATregs_contRxError = lv_obj_create(ui->scrECATregs_contWin);
    lv_obj_set_pos(ui->scrECATregs_contRxError, 0, 300);
    lv_obj_set_size(ui->scrECATregs_contRxError, 450, 180);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contRxError, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATregs_contRxError, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATregs_contRxError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contRxError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contRxError, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contRxError, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_tableRxError
    ui->scrECATregs_tableRxError = lv_table_create(ui->scrECATregs_contRxError);
    lv_obj_set_pos(ui->scrECATregs_tableRxError, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_tableRxError, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_tableRxError, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATregs_tableRxError,2);
    lv_table_set_row_count(ui->scrECATregs_tableRxError,9);
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,0,0,"Rx error counter");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,1,0,"0x0300 - Invalide frame counter of Port 0 ");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,2,0,"0x0301 - Rx error counter of Port 0");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,3,0,"0x0302 - Invalide frame counter of Port 1");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,4,0,"0x0303 - Rx error counter of Port 1");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,5,0,"0x0304 - Invalide frame counter of Port 2");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,6,0,"0x0305 - Rx error counter of Port 2");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,7,0,"0x0306 - Invalide frame counter of Port 3");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,8,0,"0x0307 - Rx error counter of Port 3");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,0,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,1,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,2,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,3,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,4,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,5,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,6,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,7,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableRxError,8,1,"");

    //Write style for scrECATregs_tableRxError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATregs_tableRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableRxError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableRxError, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableRxError, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_tableRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_tableRxError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_tableRxError, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_tableRxError, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_tableRxError, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_tableRxError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_tableRxError, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableRxError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableRxError, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableRxError, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableRxError, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_tableRxError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_tableRxError, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_tableRxError, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_tableRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableRxError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contEscDLStatus
    ui->scrECATregs_contEscDLStatus = lv_obj_create(ui->scrECATregs_contWin);
    lv_obj_set_pos(ui->scrECATregs_contEscDLStatus, 0, 240);
    lv_obj_set_size(ui->scrECATregs_contEscDLStatus, 917, 60);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contEscDLStatus, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATregs_contEscDLStatus, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATregs_contEscDLStatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contEscDLStatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contEscDLStatus, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contEscDLStatus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_tableEscDLStatus
    ui->scrECATregs_tableEscDLStatus = lv_table_create(ui->scrECATregs_contEscDLStatus);
    lv_obj_set_pos(ui->scrECATregs_tableEscDLStatus, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_tableEscDLStatus, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_tableEscDLStatus, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATregs_tableEscDLStatus,2);
    lv_table_set_row_count(ui->scrECATregs_tableEscDLStatus,3);
    lv_table_set_cell_value(ui->scrECATregs_tableEscDLStatus,0,0,"ESC DL status");
    lv_table_set_cell_value(ui->scrECATregs_tableEscDLStatus,1,0,"0x0110");
    lv_table_set_cell_value(ui->scrECATregs_tableEscDLStatus,2,0,"0x0111");
    lv_table_set_cell_value(ui->scrECATregs_tableEscDLStatus,0,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableEscDLStatus,1,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableEscDLStatus,2,1,"");

    //Write style for scrECATregs_tableEscDLStatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATregs_tableEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableEscDLStatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableEscDLStatus, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableEscDLStatus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_tableEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_tableEscDLStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_tableEscDLStatus, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_tableEscDLStatus, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_tableEscDLStatus, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_tableEscDLStatus, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_tableEscDLStatus, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableEscDLStatus, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableEscDLStatus, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableEscDLStatus, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableEscDLStatus, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_tableEscDLStatus, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_tableEscDLStatus, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_tableEscDLStatus, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_tableEscDLStatus, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableEscDLStatus, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableEscDLStatus, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableEscDLStatus, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contSlave
    ui->scrECATregs_contSlave = lv_obj_create(ui->scrECATregs_contWin);
    lv_obj_set_pos(ui->scrECATregs_contSlave, 0, 0);
    lv_obj_set_size(ui->scrECATregs_contSlave, 917, 240);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contSlave, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATregs_contSlave, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATregs_contSlave, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contSlave, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contSlave, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contSlave, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_tableSlave
    ui->scrECATregs_tableSlave = lv_table_create(ui->scrECATregs_contSlave);
    lv_obj_set_pos(ui->scrECATregs_tableSlave, 0, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_tableSlave, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_tableSlave, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATregs_tableSlave,23);
    lv_table_set_row_count(ui->scrECATregs_tableSlave,11);
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,0,"slave");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,0,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,1,"vendor");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,1,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,2,"product");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,2,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,3,"10");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,3," ");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,3," ");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,3,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,4,"11");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,4,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,5,"00");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,5,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,6,"01");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,6,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,7,"02");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,7,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,8,"03");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,8,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,9,"04");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,9,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,10,"05");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,10,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,11,"06");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,11,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,12,"07");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,12,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,13,"08");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,13,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,14,"09");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,14,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,15,"0A");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,15,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,16,"0B");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,16,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,17,"0C");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,17,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,18,"0D");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,18,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,19,"10");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,19,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,20,"11");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,20,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,21,"12");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,21,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,0,22,"13");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,1,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,2,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,3,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,4,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,5,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,6,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,7,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,8,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,9,22,"");
    lv_table_set_cell_value(ui->scrECATregs_tableSlave,10,22,"");

    //Write style for scrECATregs_tableSlave, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATregs_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableSlave, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableSlave, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableSlave, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_tableSlave, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_tableSlave, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_tableSlave, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_tableSlave, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_tableSlave, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_tableSlave, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_tableSlave, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_tableSlave, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_tableSlave, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contSlaveTitle
    ui->scrECATregs_contSlaveTitle = lv_obj_create(ui->scrECATregs_contSlave);
    lv_obj_set_pos(ui->scrECATregs_contSlaveTitle, 0, 0);
    lv_obj_set_size(ui->scrECATregs_contSlaveTitle, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contSlaveTitle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATregs_contSlaveTitle, LV_OBJ_FLAG_EVENT_BUBBLE);

    //Write style for scrECATregs_contSlaveTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contSlaveTitle, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contSlaveTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contSlaveTitle, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contSlaveTitle, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contSlaveTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contSlaveTitle, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contSlaveTitle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contSlaveTitle, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contSlaveTitle, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelSlaveTitle2
    ui->scrECATregs_labelSlaveTitle2 = lv_label_create(ui->scrECATregs_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATregs_labelSlaveTitle2, 608, 0);
    lv_obj_set_size(ui->scrECATregs_labelSlaveTitle2, 100, 14);
    lv_label_set_text(ui->scrECATregs_labelSlaveTitle2, "reg. 0x03xx");
    lv_label_set_long_mode(ui->scrECATregs_labelSlaveTitle2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelSlaveTitle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelSlaveTitle2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelSlaveTitle2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelSlaveTitle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelSlaveTitle2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelSlaveTitle1
    ui->scrECATregs_labelSlaveTitle1 = lv_label_create(ui->scrECATregs_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATregs_labelSlaveTitle1, 303, 0);
    lv_obj_set_size(ui->scrECATregs_labelSlaveTitle1, 100, 14);
    lv_label_set_text(ui->scrECATregs_labelSlaveTitle1, "reg. 0x01xx");
    lv_label_set_long_mode(ui->scrECATregs_labelSlaveTitle1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelSlaveTitle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelSlaveTitle1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelSlaveTitle1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelSlaveTitle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelSlaveTitle1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_labelTitle
    ui->scrECATregs_labelTitle = lv_label_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_labelTitle, 0, 50);
    lv_obj_set_size(ui->scrECATregs_labelTitle, 937, 32);
    lv_label_set_text(ui->scrECATregs_labelTitle, "Ethercat Registers");
    lv_label_set_long_mode(ui->scrECATregs_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrECATregs_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATregs_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_labelTitle, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_contAlarm
    ui->scrECATregs_contAlarm = lv_obj_create(ui->scrECATregs);
    lv_obj_set_pos(ui->scrECATregs_contAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATregs_contAlarm, 937, 32);
    lv_obj_set_scrollbar_mode(ui->scrECATregs_contAlarm, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATregs_contAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATregs_contAlarm, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATregs_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATregs_contAlarm, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATregs_contAlarm, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_contAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_contAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATregs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATregs_taAlarm
    ui->scrECATregs_taAlarm = lv_textarea_create(ui->scrECATregs_contAlarm);
    lv_obj_set_pos(ui->scrECATregs_taAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATregs_taAlarm, 933, 24);
    lv_textarea_set_text(ui->scrECATregs_taAlarm, "");
    lv_textarea_set_placeholder_text(ui->scrECATregs_taAlarm, "");
    lv_textarea_set_password_bullet(ui->scrECATregs_taAlarm, "*");
    lv_textarea_set_password_mode(ui->scrECATregs_taAlarm, false);
    lv_textarea_set_one_line(ui->scrECATregs_taAlarm, true);
    lv_textarea_set_accepted_chars(ui->scrECATregs_taAlarm, "");
    lv_textarea_set_max_length(ui->scrECATregs_taAlarm, 90);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scrECATregs_taAlarm, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scrECATregs_taAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATregs_taAlarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATregs_taAlarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATregs_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATregs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATregs_taAlarm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATregs_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_taAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_taAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATregs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATregs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATregs_taAlarm, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATregs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATregs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATregs_taAlarm, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATregs_taAlarm, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATregs_taAlarm, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATregs_taAlarm, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATregs_taAlarm, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scrECATregs.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrECATregs);

    //Init events for screen.
    events_init_scrECATregs(ui);
}
