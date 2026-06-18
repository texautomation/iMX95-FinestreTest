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



void setup_scr_scrECATmsgs(lv_ui *ui)
{
    //Write codes scrECATmsgs
    ui->scrECATmsgs = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrECATmsgs, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATmsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contToolbar
    ui->scrECATmsgs_contToolbar = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contToolbar, 940, 680);
    lv_obj_set_size(ui->scrECATmsgs_contToolbar, 330, 120);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contToolbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contToolbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contToolbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contToolbar, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contToolbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contRestart
    ui->scrECATmsgs_contRestart = lv_obj_create(ui->scrECATmsgs_contToolbar);
    lv_obj_set_pos(ui->scrECATmsgs_contRestart, 0, 60);
    lv_obj_set_size(ui->scrECATmsgs_contRestart, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contRestart, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contRestart, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contRestart, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contRestart, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contRestart, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contRestart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelRestart
    ui->scrECATmsgs_labelRestart = lv_label_create(ui->scrECATmsgs_contRestart);
    lv_obj_set_pos(ui->scrECATmsgs_labelRestart, 0, 20);
    lv_obj_set_size(ui->scrECATmsgs_labelRestart, 54, 30);
    lv_obj_add_flag(ui->scrECATmsgs_labelRestart, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATmsgs_labelRestart, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATmsgs_labelRestart, "Restart");
    lv_label_set_long_mode(ui->scrECATmsgs_labelRestart, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelRestart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelRestart, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelRestart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contReset
    ui->scrECATmsgs_contReset = lv_obj_create(ui->scrECATmsgs_contToolbar);
    lv_obj_set_pos(ui->scrECATmsgs_contReset, 272, 0);
    lv_obj_set_size(ui->scrECATmsgs_contReset, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contReset, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contReset, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contReset, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contReset, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contReset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contReset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelReset
    ui->scrECATmsgs_labelReset = lv_label_create(ui->scrECATmsgs_contReset);
    lv_obj_set_pos(ui->scrECATmsgs_labelReset, 0, 12);
    lv_obj_set_size(ui->scrECATmsgs_labelReset, 54, 30);
    lv_obj_add_flag(ui->scrECATmsgs_labelReset, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATmsgs_labelReset, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATmsgs_labelReset, "Reset\ndata");
    lv_label_set_long_mode(ui->scrECATmsgs_labelReset, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelReset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelReset, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelReset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contDown
    ui->scrECATmsgs_contDown = lv_obj_create(ui->scrECATmsgs_contToolbar);
    lv_obj_set_pos(ui->scrECATmsgs_contDown, 204, 0);
    lv_obj_set_size(ui->scrECATmsgs_contDown, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contDown, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contDown, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contDown, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contDown, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contDown, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgDown
    ui->scrECATmsgs_imgDown = lv_image_create(ui->scrECATmsgs_contDown);
    lv_obj_set_pos(ui->scrECATmsgs_imgDown, 7, 7);
    lv_obj_set_size(ui->scrECATmsgs_imgDown, 40, 40);
    lv_obj_add_flag(ui->scrECATmsgs_imgDown, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATmsgs_imgDown, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgDown, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgDown, &_Down_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATmsgs_imgDown, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgDown, 0);

    //Write style for scrECATmsgs_imgDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contUp
    ui->scrECATmsgs_contUp = lv_obj_create(ui->scrECATmsgs_contToolbar);
    lv_obj_set_pos(ui->scrECATmsgs_contUp, 136, 0);
    lv_obj_set_size(ui->scrECATmsgs_contUp, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contUp, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contUp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contUp, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contUp, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contUp, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgUp
    ui->scrECATmsgs_imgUp = lv_image_create(ui->scrECATmsgs_contUp);
    lv_obj_set_pos(ui->scrECATmsgs_imgUp, 7, 7);
    lv_obj_set_size(ui->scrECATmsgs_imgUp, 40, 40);
    lv_obj_add_flag(ui->scrECATmsgs_imgUp, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATmsgs_imgUp, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgUp, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgUp, &_Up_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATmsgs_imgUp, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgUp, 0);

    //Write style for scrECATmsgs_imgUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contEnd
    ui->scrECATmsgs_contEnd = lv_obj_create(ui->scrECATmsgs_contToolbar);
    lv_obj_set_pos(ui->scrECATmsgs_contEnd, 68, 0);
    lv_obj_set_size(ui->scrECATmsgs_contEnd, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contEnd, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contEnd, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contEnd, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contEnd, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contEnd, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contEnd, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgEnd
    ui->scrECATmsgs_imgEnd = lv_image_create(ui->scrECATmsgs_contEnd);
    lv_obj_set_pos(ui->scrECATmsgs_imgEnd, 7, 7);
    lv_obj_set_size(ui->scrECATmsgs_imgEnd, 40, 40);
    lv_obj_add_flag(ui->scrECATmsgs_imgEnd, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATmsgs_imgEnd, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgEnd, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgEnd, &_End_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATmsgs_imgEnd, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgEnd, 0);

    //Write style for scrECATmsgs_imgEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgEnd, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contHome
    ui->scrECATmsgs_contHome = lv_obj_create(ui->scrECATmsgs_contToolbar);
    lv_obj_set_pos(ui->scrECATmsgs_contHome, 0, 0);
    lv_obj_set_size(ui->scrECATmsgs_contHome, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contHome, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contHome, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contHome, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contHome, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contHome, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contHome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgHome
    ui->scrECATmsgs_imgHome = lv_image_create(ui->scrECATmsgs_contHome);
    lv_obj_set_pos(ui->scrECATmsgs_imgHome, 7, 7);
    lv_obj_set_size(ui->scrECATmsgs_imgHome, 40, 40);
    lv_obj_add_flag(ui->scrECATmsgs_imgHome, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATmsgs_imgHome, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgHome, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgHome, &_Home_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATmsgs_imgHome, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgHome, 0);

    //Write style for scrECATmsgs_imgHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgHome, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contExport
    ui->scrECATmsgs_contExport = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contExport, 1110, 510);
    lv_obj_set_size(ui->scrECATmsgs_contExport, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contExport, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contExport, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contExport, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contExport, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contExport, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contExport, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelExport
    ui->scrECATmsgs_labelExport = lv_label_create(ui->scrECATmsgs_contExport);
    lv_obj_set_pos(ui->scrECATmsgs_labelExport, 30, 130);
    lv_obj_set_size(ui->scrECATmsgs_labelExport, 100, 20);
    lv_obj_add_flag(ui->scrECATmsgs_labelExport, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATmsgs_labelExport, "EXPORT");
    lv_label_set_long_mode(ui->scrECATmsgs_labelExport, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelExport, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelExport, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelExport, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contBand
    ui->scrECATmsgs_contBand = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contBand, 940, 510);
    lv_obj_set_size(ui->scrECATmsgs_contBand, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contBand, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contBand, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contBand, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contBand, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contBand, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contBand, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgBand
    ui->scrECATmsgs_imgBand = lv_image_create(ui->scrECATmsgs_contBand);
    lv_obj_set_pos(ui->scrECATmsgs_imgBand, 30, 30);
    lv_obj_set_size(ui->scrECATmsgs_imgBand, 100, 100);
    lv_obj_add_flag(ui->scrECATmsgs_imgBand, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgBand, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgBand, &_banda_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATmsgs_imgBand, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgBand, 0);

    //Write style for scrECATmsgs_imgBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgBand, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contLost
    ui->scrECATmsgs_contLost = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contLost, 1110, 340);
    lv_obj_set_size(ui->scrECATmsgs_contLost, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contLost, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contLost, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contLost, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contLost, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contLost, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contLost, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgLost
    ui->scrECATmsgs_imgLost = lv_image_create(ui->scrECATmsgs_contLost);
    lv_obj_set_pos(ui->scrECATmsgs_imgLost, 30, 30);
    lv_obj_set_size(ui->scrECATmsgs_imgLost, 100, 100);
    lv_obj_add_flag(ui->scrECATmsgs_imgLost, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgLost, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgLost, &_nodi_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATmsgs_imgLost, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgLost, 0);

    //Write style for scrECATmsgs_imgLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgLost, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contRegs
    ui->scrECATmsgs_contRegs = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contRegs, 940, 340);
    lv_obj_set_size(ui->scrECATmsgs_contRegs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contRegs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contRegs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contRegs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contRegs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contRegs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contRegs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgRegs
    ui->scrECATmsgs_imgRegs = lv_image_create(ui->scrECATmsgs_contRegs);
    lv_obj_set_pos(ui->scrECATmsgs_imgRegs, 30, 30);
    lv_obj_set_size(ui->scrECATmsgs_imgRegs, 100, 100);
    lv_obj_add_flag(ui->scrECATmsgs_imgRegs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgRegs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgRegs, &_registri_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATmsgs_imgRegs, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgRegs, 0);

    //Write style for scrECATmsgs_imgRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgRegs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contMsgs
    ui->scrECATmsgs_contMsgs = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contMsgs, 1110, 170);
    lv_obj_set_size(ui->scrECATmsgs_contMsgs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contMsgs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contMsgs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contMsgs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contMsgs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contMsgs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contMsgs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelMsgs
    ui->scrECATmsgs_labelMsgs = lv_label_create(ui->scrECATmsgs_contMsgs);
    lv_obj_set_pos(ui->scrECATmsgs_labelMsgs, 30, 130);
    lv_obj_set_size(ui->scrECATmsgs_labelMsgs, 100, 30);
    lv_label_set_text(ui->scrECATmsgs_labelMsgs, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelMsgs, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelMsgs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelMsgs, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelMsgs, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNet
    ui->scrECATmsgs_contNet = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contNet, 940, 170);
    lv_obj_set_size(ui->scrECATmsgs_contNet, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNet, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contNet, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contNet, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_imgNet
    ui->scrECATmsgs_imgNet = lv_image_create(ui->scrECATmsgs_contNet);
    lv_obj_set_pos(ui->scrECATmsgs_imgNet, 30, 30);
    lv_obj_set_size(ui->scrECATmsgs_imgNet, 100, 100);
    lv_obj_add_flag(ui->scrECATmsgs_imgNet, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATmsgs_imgNet, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATmsgs_imgNet, &_main_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATmsgs_imgNet, 50,50);
    lv_image_set_rotation(ui->scrECATmsgs_imgNet, 0);

    //Write style for scrECATmsgs_imgNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATmsgs_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATmsgs_imgNet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATmsgs_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contUndo
    ui->scrECATmsgs_contUndo = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contUndo, 1110, 0);
    lv_obj_set_size(ui->scrECATmsgs_contUndo, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contUndo, LV_SCROLLBAR_MODE_AUTO);

    //Write style for scrECATmsgs_contUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contUndo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contUndo, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contUndo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contUndo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contUndo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelUndo
    ui->scrECATmsgs_labelUndo = lv_label_create(ui->scrECATmsgs_contUndo);
    lv_obj_set_pos(ui->scrECATmsgs_labelUndo, 30, 130);
    lv_obj_set_size(ui->scrECATmsgs_labelUndo, 100, 20);
    lv_obj_add_flag(ui->scrECATmsgs_labelUndo, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATmsgs_labelUndo, "UNDO");
    lv_label_set_long_mode(ui->scrECATmsgs_labelUndo, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelUndo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelUndo, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelUndo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contMain
    ui->scrECATmsgs_contMain = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contMain, 940, 0);
    lv_obj_set_size(ui->scrECATmsgs_contMain, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contMain, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contMain, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contMain, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contMain, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contMain, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contMain, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelMain
    ui->scrECATmsgs_labelMain = lv_label_create(ui->scrECATmsgs_contMain);
    lv_obj_set_pos(ui->scrECATmsgs_labelMain, 30, 130);
    lv_obj_set_size(ui->scrECATmsgs_labelMain, 100, 20);
    lv_obj_add_flag(ui->scrECATmsgs_labelMain, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATmsgs_labelMain, "MAIN");
    lv_label_set_long_mode(ui->scrECATmsgs_labelMain, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelMain, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelMain, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelMain, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contWin
    ui->scrECATmsgs_contWin = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contWin, 9, 90);
    lv_obj_set_size(ui->scrECATmsgs_contWin, 917, 583);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contWin, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contWin, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contWin, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contWin, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contWin, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contError
    ui->scrECATmsgs_contError = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contError, 0, 482);
    lv_obj_set_size(ui->scrECATmsgs_contError, 917, 100);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contError, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contError, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contError, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_tableError
    ui->scrECATmsgs_tableError = lv_table_create(ui->scrECATmsgs_contError);
    lv_obj_set_pos(ui->scrECATmsgs_tableError, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_tableError, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrECATmsgs_tableError,1);
    lv_table_set_row_count(ui->scrECATmsgs_tableError,5);
    lv_table_set_cell_value(ui->scrECATmsgs_tableError,0,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableError,1,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableError,2,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableError,3,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableError,4,0,"");

    //Write style for scrECATmsgs_tableError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableError, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableError, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_tableError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_tableError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATmsgs_tableError, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATmsgs_tableError, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_tableError, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_tableError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_tableError, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableError, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableError, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableError, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_tableError, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_tableError, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_tableError, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableError, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contTitleError
    ui->scrECATmsgs_contTitleError = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contTitleError, 0, 461);
    lv_obj_set_size(ui->scrECATmsgs_contTitleError, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contTitleError, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contTitleError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contTitleError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contTitleError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contTitleError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contTitleError, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contTitleError, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contTitleError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contTitleError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contTitleError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contTitleError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contTitleError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelError
    ui->scrECATmsgs_labelError = lv_label_create(ui->scrECATmsgs_contTitleError);
    lv_obj_set_pos(ui->scrECATmsgs_labelError, 3, 3);
    lv_obj_set_size(ui->scrECATmsgs_labelError, 330, 14);
    lv_label_set_text(ui->scrECATmsgs_labelError, "log event: ERROR");
    lv_label_set_long_mode(ui->scrECATmsgs_labelError, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelError, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelError, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelError, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelError, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelError, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelError, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contWarning
    ui->scrECATmsgs_contWarning = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contWarning, 0, 359);
    lv_obj_set_size(ui->scrECATmsgs_contWarning, 917, 100);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contWarning, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contWarning, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contWarning, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contWarning, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contWarning, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_tableWarning
    ui->scrECATmsgs_tableWarning = lv_table_create(ui->scrECATmsgs_contWarning);
    lv_obj_set_pos(ui->scrECATmsgs_tableWarning, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_tableWarning, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrECATmsgs_tableWarning,1);
    lv_table_set_row_count(ui->scrECATmsgs_tableWarning,5);
    lv_table_set_cell_value(ui->scrECATmsgs_tableWarning,0,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableWarning,1,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableWarning,2,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableWarning,3,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableWarning,4,0,"");

    //Write style for scrECATmsgs_tableWarning, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableWarning, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableWarning, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableWarning, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_tableWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_tableWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATmsgs_tableWarning, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATmsgs_tableWarning, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_tableWarning, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_tableWarning, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_tableWarning, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableWarning, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableWarning, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableWarning, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableWarning, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_tableWarning, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_tableWarning, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_tableWarning, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableWarning, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableWarning, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableWarning, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableWarning, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contTitleWarning
    ui->scrECATmsgs_contTitleWarning = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contTitleWarning, 0, 338);
    lv_obj_set_size(ui->scrECATmsgs_contTitleWarning, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contTitleWarning, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contTitleWarning, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contTitleWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contTitleWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contTitleWarning, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contTitleWarning, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contTitleWarning, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contTitleWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contTitleWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contTitleWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contTitleWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contTitleWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelWarning
    ui->scrECATmsgs_labelWarning = lv_label_create(ui->scrECATmsgs_contTitleWarning);
    lv_obj_set_pos(ui->scrECATmsgs_labelWarning, 3, 3);
    lv_obj_set_size(ui->scrECATmsgs_labelWarning, 330, 14);
    lv_label_set_text(ui->scrECATmsgs_labelWarning, "log event: WARNING");
    lv_label_set_long_mode(ui->scrECATmsgs_labelWarning, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelWarning, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelWarning, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelWarning, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelWarning, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelWarning, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelWarning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contInfo
    ui->scrECATmsgs_contInfo = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contInfo, 0, 236);
    lv_obj_set_size(ui->scrECATmsgs_contInfo, 917, 100);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contInfo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contInfo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contInfo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contInfo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contInfo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_tableInfo
    ui->scrECATmsgs_tableInfo = lv_table_create(ui->scrECATmsgs_contInfo);
    lv_obj_set_pos(ui->scrECATmsgs_tableInfo, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_tableInfo, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrECATmsgs_tableInfo,1);
    lv_table_set_row_count(ui->scrECATmsgs_tableInfo,5);
    lv_table_set_cell_value(ui->scrECATmsgs_tableInfo,0,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableInfo,1,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableInfo,2,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableInfo,3,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableInfo,4,0,"");

    //Write style for scrECATmsgs_tableInfo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableInfo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableInfo, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableInfo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATmsgs_tableInfo, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATmsgs_tableInfo, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_tableInfo, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_tableInfo, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_tableInfo, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableInfo, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableInfo, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableInfo, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableInfo, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_tableInfo, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_tableInfo, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_tableInfo, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contTitleInfo
    ui->scrECATmsgs_contTitleInfo = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contTitleInfo, 0, 215);
    lv_obj_set_size(ui->scrECATmsgs_contTitleInfo, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contTitleInfo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contTitleInfo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contTitleInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contTitleInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contTitleInfo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contTitleInfo, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contTitleInfo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contTitleInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contTitleInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contTitleInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contTitleInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contTitleInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelInfo
    ui->scrECATmsgs_labelInfo = lv_label_create(ui->scrECATmsgs_contTitleInfo);
    lv_obj_set_pos(ui->scrECATmsgs_labelInfo, 3, 3);
    lv_obj_set_size(ui->scrECATmsgs_labelInfo, 330, 14);
    lv_label_set_text(ui->scrECATmsgs_labelInfo, "log event: INFO");
    lv_label_set_long_mode(ui->scrECATmsgs_labelInfo, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelInfo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelInfo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelInfo, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelInfo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelInfo, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contDebug
    ui->scrECATmsgs_contDebug = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contDebug, 0, 113);
    lv_obj_set_size(ui->scrECATmsgs_contDebug, 917, 100);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contDebug, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contDebug, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contDebug, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contDebug, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contDebug, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_tableDebug
    ui->scrECATmsgs_tableDebug = lv_table_create(ui->scrECATmsgs_contDebug);
    lv_obj_set_pos(ui->scrECATmsgs_tableDebug, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_tableDebug, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrECATmsgs_tableDebug,1);
    lv_table_set_row_count(ui->scrECATmsgs_tableDebug,5);
    lv_table_set_cell_value(ui->scrECATmsgs_tableDebug,0,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableDebug,1,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableDebug,2,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableDebug,3,0,"");
    lv_table_set_cell_value(ui->scrECATmsgs_tableDebug,4,0,"");

    //Write style for scrECATmsgs_tableDebug, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableDebug, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableDebug, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableDebug, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_tableDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_tableDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATmsgs_tableDebug, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATmsgs_tableDebug, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_tableDebug, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_tableDebug, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_tableDebug, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_tableDebug, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_tableDebug, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_tableDebug, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_tableDebug, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_tableDebug, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_tableDebug, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_tableDebug, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_tableDebug, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_tableDebug, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_tableDebug, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_tableDebug, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contTitleDebug
    ui->scrECATmsgs_contTitleDebug = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contTitleDebug, 0, 92);
    lv_obj_set_size(ui->scrECATmsgs_contTitleDebug, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contTitleDebug, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contTitleDebug, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contTitleDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contTitleDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contTitleDebug, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contTitleDebug, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contTitleDebug, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contTitleDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contTitleDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contTitleDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contTitleDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contTitleDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelDebug
    ui->scrECATmsgs_labelDebug = lv_label_create(ui->scrECATmsgs_contTitleDebug);
    lv_obj_set_pos(ui->scrECATmsgs_labelDebug, 3, 3);
    lv_obj_set_size(ui->scrECATmsgs_labelDebug, 330, 14);
    lv_label_set_text(ui->scrECATmsgs_labelDebug, "log event: DEBUG");
    lv_label_set_long_mode(ui->scrECATmsgs_labelDebug, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelDebug, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelDebug, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelDebug, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelDebug, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelDebug, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelDebug, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfig
    ui->scrECATmsgs_contConfig = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contConfig, 0, 46);
    lv_obj_set_size(ui->scrECATmsgs_contConfig, 917, 44);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfig, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfig, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfig, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfig, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfig, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigData5
    ui->scrECATmsgs_contConfigData5 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigData5, 750, 24);
    lv_obj_set_size(ui->scrECATmsgs_contConfigData5, 167, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigData5, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigData5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigData5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigData5, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigData5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigData5
    ui->scrECATmsgs_labelConfigData5 = lv_label_create(ui->scrECATmsgs_contConfigData5);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigData5, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigData5, 167, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigData5, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigData5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigData5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigData5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigData5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigData5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigData5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigData5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigData4
    ui->scrECATmsgs_contConfigData4 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigData4, 600, 24);
    lv_obj_set_size(ui->scrECATmsgs_contConfigData4, 150, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigData4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigData4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigData4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigData4, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigData4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigData4
    ui->scrECATmsgs_labelConfigData4 = lv_label_create(ui->scrECATmsgs_contConfigData4);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigData4, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigData4, 150, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigData4, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigData4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigData4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigData4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigData4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigData4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigData4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigData3
    ui->scrECATmsgs_contConfigData3 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigData3, 400, 24);
    lv_obj_set_size(ui->scrECATmsgs_contConfigData3, 200, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigData3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigData3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigData3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigData3, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigData3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigData3
    ui->scrECATmsgs_labelConfigData3 = lv_label_create(ui->scrECATmsgs_contConfigData3);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigData3, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigData3, 200, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigData3, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigData3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigData3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigData3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigData3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigData3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigData3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigData2
    ui->scrECATmsgs_contConfigData2 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigData2, 150, 24);
    lv_obj_set_size(ui->scrECATmsgs_contConfigData2, 250, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigData2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigData2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigData2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigData2, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigData2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigData2
    ui->scrECATmsgs_labelConfigData2 = lv_label_create(ui->scrECATmsgs_contConfigData2);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigData2, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigData2, 250, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigData2, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigData2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigData2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigData2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigData2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigData2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigData2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigData1
    ui->scrECATmsgs_contConfigData1 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigData1, 0, 24);
    lv_obj_set_size(ui->scrECATmsgs_contConfigData1, 150, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigData1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigData1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigData1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigData1, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigData1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigData1
    ui->scrECATmsgs_labelConfigData1 = lv_label_create(ui->scrECATmsgs_contConfigData1);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigData1, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigData1, 150, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigData1, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigData1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigData1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigData1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigData1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigData1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigData1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigTitle5
    ui->scrECATmsgs_contConfigTitle5 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigTitle5, 750, 0);
    lv_obj_set_size(ui->scrECATmsgs_contConfigTitle5, 167, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigTitle5, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigTitle5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigTitle5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigTitle5, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigTitle5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigTitle5
    ui->scrECATmsgs_labelConfigTitle5 = lv_label_create(ui->scrECATmsgs_contConfigTitle5);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigTitle5, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigTitle5, 167, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigTitle5, "ecat cycle");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigTitle5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigTitle5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigTitle5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigTitle5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigTitle5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigTitle5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigTitle4
    ui->scrECATmsgs_contConfigTitle4 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigTitle4, 600, 0);
    lv_obj_set_size(ui->scrECATmsgs_contConfigTitle4, 150, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigTitle4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigTitle4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigTitle4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigTitle4, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigTitle4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigTitle4
    ui->scrECATmsgs_labelConfigTitle4 = lv_label_create(ui->scrECATmsgs_contConfigTitle4);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigTitle4, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigTitle4, 150, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigTitle4, "sync");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigTitle4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigTitle4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigTitle4, lv_color_hex(0xfefefe), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigTitle4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigTitle4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigTitle4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigTitle3
    ui->scrECATmsgs_contConfigTitle3 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigTitle3, 400, 0);
    lv_obj_set_size(ui->scrECATmsgs_contConfigTitle3, 200, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigTitle3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigTitle3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigTitle3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigTitle3, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigTitle3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigTitle3
    ui->scrECATmsgs_labelConfigTitle3 = lv_label_create(ui->scrECATmsgs_contConfigTitle3);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigTitle3, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigTitle3, 200, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigTitle3, "cable");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigTitle3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigTitle3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigTitle3, lv_color_hex(0xfefefe), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigTitle3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigTitle3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigTitle3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigTitle2
    ui->scrECATmsgs_contConfigTitle2 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigTitle2, 150, 0);
    lv_obj_set_size(ui->scrECATmsgs_contConfigTitle2, 250, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigTitle2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigTitle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigTitle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigTitle2, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigTitle2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigTitle2
    ui->scrECATmsgs_labelConfigTitle2 = lv_label_create(ui->scrECATmsgs_contConfigTitle2);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigTitle2, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigTitle2, 250, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigTitle2, "frame wrong/noECAT/lost");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigTitle2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigTitle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigTitle2, lv_color_hex(0xfefefe), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigTitle2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigTitle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigTitle2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contConfigTitle1
    ui->scrECATmsgs_contConfigTitle1 = lv_obj_create(ui->scrECATmsgs_contConfig);
    lv_obj_set_pos(ui->scrECATmsgs_contConfigTitle1, 3, 0);
    lv_obj_set_size(ui->scrECATmsgs_contConfigTitle1, 147, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contConfigTitle1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contConfigTitle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contConfigTitle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contConfigTitle1, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contConfigTitle1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelConfigTitle1
    ui->scrECATmsgs_labelConfigTitle1 = lv_label_create(ui->scrECATmsgs_contConfigTitle1);
    lv_obj_set_pos(ui->scrECATmsgs_labelConfigTitle1, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelConfigTitle1, 150, 14);
    lv_label_set_text(ui->scrECATmsgs_labelConfigTitle1, "config/active");
    lv_label_set_long_mode(ui->scrECATmsgs_labelConfigTitle1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelConfigTitle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelConfigTitle1, lv_color_hex(0xfefefe), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelConfigTitle1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelConfigTitle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelConfigTitle1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelConfigTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetwork
    ui->scrECATmsgs_contNetwork = lv_obj_create(ui->scrECATmsgs_contWin);
    lv_obj_set_pos(ui->scrECATmsgs_contNetwork, 0, 0);
    lv_obj_set_size(ui->scrECATmsgs_contNetwork, 917, 44);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetwork, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetwork, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetwork, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetwork, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetwork, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkData4
    ui->scrECATmsgs_contNetworkData4 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkData4, 700, 24);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkData4, 217, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkData4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkData4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkData4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkData4, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkData4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkData4
    ui->scrECATmsgs_labelNetworkData4 = lv_label_create(ui->scrECATmsgs_contNetworkData4);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkData4, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkData4, 217, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkData4, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkData4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkData4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkData4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkData4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkData4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkData4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkData4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkData3
    ui->scrECATmsgs_contNetworkData3 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkData3, 500, 24);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkData3, 200, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkData3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkData3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkData3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkData3, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkData3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkData3
    ui->scrECATmsgs_labelNetworkData3 = lv_label_create(ui->scrECATmsgs_contNetworkData3);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkData3, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkData3, 200, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkData3, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkData3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkData3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkData3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkData3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkData3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkData3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkData2
    ui->scrECATmsgs_contNetworkData2 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkData2, 300, 24);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkData2, 200, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkData2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkData2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkData2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkData2, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkData2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkData2
    ui->scrECATmsgs_labelNetworkData2 = lv_label_create(ui->scrECATmsgs_contNetworkData2);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkData2, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkData2, 200, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkData2, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkData2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkData2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkData2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkData2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkData2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkData2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkData1
    ui->scrECATmsgs_contNetworkData1 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkData1, 0, 24);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkData1, 300, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkData1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkData1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkData1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkData1, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkData1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkData1
    ui->scrECATmsgs_labelNetworkData1 = lv_label_create(ui->scrECATmsgs_contNetworkData1);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkData1, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkData1, 300, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkData1, "");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkData1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkData1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkData1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkData1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkData1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkData1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkTitle4
    ui->scrECATmsgs_contNetworkTitle4 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkTitle4, 700, 0);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkTitle4, 217, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkTitle4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkTitle4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkTitle4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkTitle4, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkTitle4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkTitle4
    ui->scrECATmsgs_labelNetworkTitle4 = lv_label_create(ui->scrECATmsgs_contNetworkTitle4);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkTitle4, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkTitle4, 217, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkTitle4, "type");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkTitle4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkTitle4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkTitle4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkTitle4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkTitle4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkTitle4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkTitle3
    ui->scrECATmsgs_contNetworkTitle3 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkTitle3, 500, 0);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkTitle3, 200, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkTitle3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkTitle3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkTitle3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkTitle3, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkTitle3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkTitle3
    ui->scrECATmsgs_labelNetworkTitle3 = lv_label_create(ui->scrECATmsgs_contNetworkTitle3);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkTitle3, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkTitle3, 200, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkTitle3, "source");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkTitle3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkTitle3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkTitle3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkTitle3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkTitle3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkTitle3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkTitle2
    ui->scrECATmsgs_contNetworkTitle2 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkTitle2, 300, 0);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkTitle2, 200, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkTitle2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkTitle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkTitle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkTitle2, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkTitle2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkTitle2
    ui->scrECATmsgs_labelNetworkTitle2 = lv_label_create(ui->scrECATmsgs_contNetworkTitle2);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkTitle2, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkTitle2, 200, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkTitle2, "destination");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkTitle2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkTitle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkTitle2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkTitle2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkTitle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkTitle2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contNetworkTitle1
    ui->scrECATmsgs_contNetworkTitle1 = lv_obj_create(ui->scrECATmsgs_contNetwork);
    lv_obj_set_pos(ui->scrECATmsgs_contNetworkTitle1, 3, 0);
    lv_obj_set_size(ui->scrECATmsgs_contNetworkTitle1, 297, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contNetworkTitle1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contNetworkTitle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contNetworkTitle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contNetworkTitle1, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contNetworkTitle1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelNetworkTitle1
    ui->scrECATmsgs_labelNetworkTitle1 = lv_label_create(ui->scrECATmsgs_contNetworkTitle1);
    lv_obj_set_pos(ui->scrECATmsgs_labelNetworkTitle1, 0, 4);
    lv_obj_set_size(ui->scrECATmsgs_labelNetworkTitle1, 300, 14);
    lv_label_set_text(ui->scrECATmsgs_labelNetworkTitle1, "network name");
    lv_label_set_long_mode(ui->scrECATmsgs_labelNetworkTitle1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelNetworkTitle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelNetworkTitle1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelNetworkTitle1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelNetworkTitle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelNetworkTitle1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelNetworkTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_labelTitle
    ui->scrECATmsgs_labelTitle = lv_label_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_labelTitle, 0, 50);
    lv_obj_set_size(ui->scrECATmsgs_labelTitle, 937, 32);
    lv_label_set_text(ui->scrECATmsgs_labelTitle, "Ethercat Messages");
    lv_label_set_long_mode(ui->scrECATmsgs_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrECATmsgs_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATmsgs_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_labelTitle, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_contAlarm
    ui->scrECATmsgs_contAlarm = lv_obj_create(ui->scrECATmsgs);
    lv_obj_set_pos(ui->scrECATmsgs_contAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATmsgs_contAlarm, 937, 32);
    lv_obj_set_scrollbar_mode(ui->scrECATmsgs_contAlarm, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATmsgs_contAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATmsgs_contAlarm, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATmsgs_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATmsgs_contAlarm, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATmsgs_contAlarm, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_contAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_contAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATmsgs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATmsgs_taAlarm
    ui->scrECATmsgs_taAlarm = lv_textarea_create(ui->scrECATmsgs_contAlarm);
    lv_obj_set_pos(ui->scrECATmsgs_taAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATmsgs_taAlarm, 933, 24);
    lv_textarea_set_text(ui->scrECATmsgs_taAlarm, "");
    lv_textarea_set_placeholder_text(ui->scrECATmsgs_taAlarm, "");
    lv_textarea_set_password_bullet(ui->scrECATmsgs_taAlarm, "*");
    lv_textarea_set_password_mode(ui->scrECATmsgs_taAlarm, false);
    lv_textarea_set_one_line(ui->scrECATmsgs_taAlarm, true);
    lv_textarea_set_accepted_chars(ui->scrECATmsgs_taAlarm, "");
    lv_textarea_set_max_length(ui->scrECATmsgs_taAlarm, 90);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scrECATmsgs_taAlarm, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scrECATmsgs_taAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATmsgs_taAlarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATmsgs_taAlarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATmsgs_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATmsgs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATmsgs_taAlarm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_taAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_taAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATmsgs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATmsgs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATmsgs_taAlarm, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATmsgs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATmsgs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATmsgs_taAlarm, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATmsgs_taAlarm, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATmsgs_taAlarm, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATmsgs_taAlarm, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATmsgs_taAlarm, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scrECATmsgs.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrECATmsgs);

    //Init events for screen.
    events_init_scrECATmsgs(ui);
}
