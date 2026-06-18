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



void setup_scr_scrECATlost(lv_ui *ui)
{
    //Write codes scrECATlost
    ui->scrECATlost = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrECATlost, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->scrECATlost, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATlost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contToolbar
    ui->scrECATlost_contToolbar = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contToolbar, 940, 680);
    lv_obj_set_size(ui->scrECATlost_contToolbar, 330, 120);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contToolbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contToolbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contToolbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contToolbar, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contToolbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contRestart
    ui->scrECATlost_contRestart = lv_obj_create(ui->scrECATlost_contToolbar);
    lv_obj_set_pos(ui->scrECATlost_contRestart, 0, 60);
    lv_obj_set_size(ui->scrECATlost_contRestart, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contRestart, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contRestart, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contRestart, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contRestart, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contRestart, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contRestart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelRestart
    ui->scrECATlost_labelRestart = lv_label_create(ui->scrECATlost_contRestart);
    lv_obj_set_pos(ui->scrECATlost_labelRestart, 0, 20);
    lv_obj_set_size(ui->scrECATlost_labelRestart, 54, 30);
    lv_obj_add_flag(ui->scrECATlost_labelRestart, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATlost_labelRestart, "Restart");
    lv_label_set_long_mode(ui->scrECATlost_labelRestart, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelRestart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelRestart, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelRestart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contReset
    ui->scrECATlost_contReset = lv_obj_create(ui->scrECATlost_contToolbar);
    lv_obj_set_pos(ui->scrECATlost_contReset, 272, 0);
    lv_obj_set_size(ui->scrECATlost_contReset, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contReset, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contReset, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contReset, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contReset, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contReset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contReset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelReset
    ui->scrECATlost_labelReset = lv_label_create(ui->scrECATlost_contReset);
    lv_obj_set_pos(ui->scrECATlost_labelReset, 0, 12);
    lv_obj_set_size(ui->scrECATlost_labelReset, 54, 30);
    lv_obj_add_flag(ui->scrECATlost_labelReset, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->scrECATlost_labelReset, "Reset\ndata");
    lv_label_set_long_mode(ui->scrECATlost_labelReset, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelReset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelReset, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelReset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contDown
    ui->scrECATlost_contDown = lv_obj_create(ui->scrECATlost_contToolbar);
    lv_obj_set_pos(ui->scrECATlost_contDown, 204, 0);
    lv_obj_set_size(ui->scrECATlost_contDown, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contDown, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contDown, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contDown, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contDown, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contDown, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgDown
    ui->scrECATlost_imgDown = lv_image_create(ui->scrECATlost_contDown);
    lv_obj_set_pos(ui->scrECATlost_imgDown, 7, 7);
    lv_obj_set_size(ui->scrECATlost_imgDown, 40, 40);
    lv_obj_add_flag(ui->scrECATlost_imgDown, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATlost_imgDown, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgDown, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgDown, &_Down_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATlost_imgDown, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgDown, 0);

    //Write style for scrECATlost_imgDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contUp
    ui->scrECATlost_contUp = lv_obj_create(ui->scrECATlost_contToolbar);
    lv_obj_set_pos(ui->scrECATlost_contUp, 136, 0);
    lv_obj_set_size(ui->scrECATlost_contUp, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contUp, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contUp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contUp, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contUp, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contUp, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgUp
    ui->scrECATlost_imgUp = lv_image_create(ui->scrECATlost_contUp);
    lv_obj_set_pos(ui->scrECATlost_imgUp, 7, 7);
    lv_obj_set_size(ui->scrECATlost_imgUp, 40, 40);
    lv_obj_add_flag(ui->scrECATlost_imgUp, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATlost_imgUp, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgUp, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgUp, &_Up_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATlost_imgUp, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgUp, 0);

    //Write style for scrECATlost_imgUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contEnd
    ui->scrECATlost_contEnd = lv_obj_create(ui->scrECATlost_contToolbar);
    lv_obj_set_pos(ui->scrECATlost_contEnd, 68, 0);
    lv_obj_set_size(ui->scrECATlost_contEnd, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contEnd, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contEnd, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contEnd, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contEnd, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contEnd, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contEnd, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgEnd
    ui->scrECATlost_imgEnd = lv_image_create(ui->scrECATlost_contEnd);
    lv_obj_set_pos(ui->scrECATlost_imgEnd, 7, 7);
    lv_obj_set_size(ui->scrECATlost_imgEnd, 40, 40);
    lv_obj_add_flag(ui->scrECATlost_imgEnd, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATlost_imgEnd, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgEnd, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgEnd, &_End_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATlost_imgEnd, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgEnd, 0);

    //Write style for scrECATlost_imgEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgEnd, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contHome
    ui->scrECATlost_contHome = lv_obj_create(ui->scrECATlost_contToolbar);
    lv_obj_set_pos(ui->scrECATlost_contHome, 0, 0);
    lv_obj_set_size(ui->scrECATlost_contHome, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contHome, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contHome, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contHome, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contHome, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contHome, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contHome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgHome
    ui->scrECATlost_imgHome = lv_image_create(ui->scrECATlost_contHome);
    lv_obj_set_pos(ui->scrECATlost_imgHome, 7, 7);
    lv_obj_set_size(ui->scrECATlost_imgHome, 40, 40);
    lv_obj_add_flag(ui->scrECATlost_imgHome, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATlost_imgHome, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgHome, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgHome, &_Home_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATlost_imgHome, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgHome, 0);

    //Write style for scrECATlost_imgHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgHome, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contExport
    ui->scrECATlost_contExport = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contExport, 1110, 510);
    lv_obj_set_size(ui->scrECATlost_contExport, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contExport, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contExport, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contExport, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contExport, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contExport, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contExport, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelExport
    ui->scrECATlost_labelExport = lv_label_create(ui->scrECATlost_contExport);
    lv_obj_set_pos(ui->scrECATlost_labelExport, 30, 130);
    lv_obj_set_size(ui->scrECATlost_labelExport, 100, 30);
    lv_label_set_text(ui->scrECATlost_labelExport, "");
    lv_label_set_long_mode(ui->scrECATlost_labelExport, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelExport, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelExport, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelExport, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contBand
    ui->scrECATlost_contBand = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contBand, 940, 510);
    lv_obj_set_size(ui->scrECATlost_contBand, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contBand, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contBand, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contBand, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contBand, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contBand, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contBand, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgBand
    ui->scrECATlost_imgBand = lv_image_create(ui->scrECATlost_contBand);
    lv_obj_set_pos(ui->scrECATlost_imgBand, 30, 30);
    lv_obj_set_size(ui->scrECATlost_imgBand, 100, 100);
    lv_obj_add_flag(ui->scrECATlost_imgBand, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgBand, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgBand, &_banda_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATlost_imgBand, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgBand, 0);

    //Write style for scrECATlost_imgBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgBand, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contLost
    ui->scrECATlost_contLost = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contLost, 1110, 340);
    lv_obj_set_size(ui->scrECATlost_contLost, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contLost, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contLost, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contLost, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contLost, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contLost, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contLost, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelLost
    ui->scrECATlost_labelLost = lv_label_create(ui->scrECATlost_contLost);
    lv_obj_set_pos(ui->scrECATlost_labelLost, 30, 130);
    lv_obj_set_size(ui->scrECATlost_labelLost, 100, 30);
    lv_label_set_text(ui->scrECATlost_labelLost, "");
    lv_label_set_long_mode(ui->scrECATlost_labelLost, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelLost, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelLost, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelLost, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contRegs
    ui->scrECATlost_contRegs = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contRegs, 940, 340);
    lv_obj_set_size(ui->scrECATlost_contRegs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contRegs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contRegs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contRegs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contRegs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contRegs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contRegs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgRegs
    ui->scrECATlost_imgRegs = lv_image_create(ui->scrECATlost_contRegs);
    lv_obj_set_pos(ui->scrECATlost_imgRegs, 30, 30);
    lv_obj_set_size(ui->scrECATlost_imgRegs, 100, 100);
    lv_obj_add_flag(ui->scrECATlost_imgRegs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgRegs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgRegs, &_registri_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATlost_imgRegs, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgRegs, 0);

    //Write style for scrECATlost_imgRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgRegs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contMsgs
    ui->scrECATlost_contMsgs = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contMsgs, 1110, 170);
    lv_obj_set_size(ui->scrECATlost_contMsgs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contMsgs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contMsgs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contMsgs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contMsgs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contMsgs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contMsgs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgMsgs
    ui->scrECATlost_imgMsgs = lv_image_create(ui->scrECATlost_contMsgs);
    lv_obj_set_pos(ui->scrECATlost_imgMsgs, 30, 30);
    lv_obj_set_size(ui->scrECATlost_imgMsgs, 100, 100);
    lv_obj_add_flag(ui->scrECATlost_imgMsgs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgMsgs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgMsgs, &_log_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATlost_imgMsgs, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgMsgs, 0);

    //Write style for scrECATlost_imgMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgMsgs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contNet
    ui->scrECATlost_contNet = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contNet, 940, 170);
    lv_obj_set_size(ui->scrECATlost_contNet, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contNet, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contNet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contNet, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contNet, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contNet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contNet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_imgNet
    ui->scrECATlost_imgNet = lv_image_create(ui->scrECATlost_contNet);
    lv_obj_set_pos(ui->scrECATlost_imgNet, 30, 30);
    lv_obj_set_size(ui->scrECATlost_imgNet, 100, 100);
    lv_obj_add_flag(ui->scrECATlost_imgNet, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATlost_imgNet, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATlost_imgNet, &_main_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATlost_imgNet, 50,50);
    lv_image_set_rotation(ui->scrECATlost_imgNet, 0);

    //Write style for scrECATlost_imgNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATlost_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATlost_imgNet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATlost_imgNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contUndo
    ui->scrECATlost_contUndo = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contUndo, 1110, 0);
    lv_obj_set_size(ui->scrECATlost_contUndo, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contUndo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contUndo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contUndo, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contUndo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contUndo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contUndo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelUndo
    ui->scrECATlost_labelUndo = lv_label_create(ui->scrECATlost_contUndo);
    lv_obj_set_pos(ui->scrECATlost_labelUndo, 30, 130);
    lv_obj_set_size(ui->scrECATlost_labelUndo, 100, 20);
    lv_obj_add_flag(ui->scrECATlost_labelUndo, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATlost_labelUndo, "UNDO");
    lv_label_set_long_mode(ui->scrECATlost_labelUndo, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelUndo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelUndo, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelUndo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contMain
    ui->scrECATlost_contMain = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contMain, 940, 0);
    lv_obj_set_size(ui->scrECATlost_contMain, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contMain, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contMain, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contMain, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contMain, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contMain, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contMain, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelMain
    ui->scrECATlost_labelMain = lv_label_create(ui->scrECATlost_contMain);
    lv_obj_set_pos(ui->scrECATlost_labelMain, 30, 130);
    lv_obj_set_size(ui->scrECATlost_labelMain, 100, 20);
    lv_obj_add_flag(ui->scrECATlost_labelMain, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATlost_labelMain, "MAIN");
    lv_label_set_long_mode(ui->scrECATlost_labelMain, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelMain, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelMain, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelMain, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contWin
    ui->scrECATlost_contWin = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contWin, 10, 90);
    lv_obj_set_size(ui->scrECATlost_contWin, 917, 589);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contWin, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contWin, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contWin, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contWin, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contWin, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contLostData
    ui->scrECATlost_contLostData = lv_obj_create(ui->scrECATlost_contWin);
    lv_obj_set_pos(ui->scrECATlost_contLostData, 0, 447);
    lv_obj_set_size(ui->scrECATlost_contLostData, 917, 140);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contLostData, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATlost_contLostData, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATlost_contLostData, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contLostData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contLostData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contLostData, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contLostData, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contLostData, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contLostData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contLostData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contLostData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contLostData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contLostData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_tableLost
    ui->scrECATlost_tableLost = lv_table_create(ui->scrECATlost_contLostData);
    lv_obj_set_pos(ui->scrECATlost_tableLost, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_tableLost, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATlost_tableLost, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATlost_tableLost,2);
    lv_table_set_row_count(ui->scrECATlost_tableLost,7);
    lv_table_set_cell_value(ui->scrECATlost_tableLost,0,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,1,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,2,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,3,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,4,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,5,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,6,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,0,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,1,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,2,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,3,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,4,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,5,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableLost,6,1,"");

    //Write style for scrECATlost_tableLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATlost_tableLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_tableLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_tableLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_tableLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_tableLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_tableLost, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_tableLost, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATlost_tableLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_tableLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_tableLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATlost_tableLost, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATlost_tableLost, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_tableLost, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_tableLost, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_tableLost, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_tableLost, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_tableLost, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_tableLost, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATlost_tableLost, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_tableLost, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_tableLost, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_tableLost, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_tableLost, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_tableLost, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_tableLost, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_tableLost, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contLostTitle
    ui->scrECATlost_contLostTitle = lv_obj_create(ui->scrECATlost_contWin);
    lv_obj_set_pos(ui->scrECATlost_contLostTitle, 0, 426);
    lv_obj_set_size(ui->scrECATlost_contLostTitle, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contLostTitle, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contLostTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contLostTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contLostTitle, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contLostTitle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelLostTitle
    ui->scrECATlost_labelLostTitle = lv_label_create(ui->scrECATlost_contLostTitle);
    lv_obj_set_pos(ui->scrECATlost_labelLostTitle, 0, 4);
    lv_obj_set_size(ui->scrECATlost_labelLostTitle, 917, 14);
    lv_label_set_text(ui->scrECATlost_labelLostTitle, "Lost");
    lv_label_set_long_mode(ui->scrECATlost_labelLostTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelLostTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelLostTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelLostTitle, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelLostTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelLostTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelLostTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveData
    ui->scrECATlost_contSlaveData = lv_obj_create(ui->scrECATlost_contWin);
    lv_obj_set_pos(ui->scrECATlost_contSlaveData, 0, 65);
    lv_obj_set_size(ui->scrECATlost_contSlaveData, 917, 360);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveData, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATlost_contSlaveData, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATlost_contSlaveData, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveData, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveData, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveData, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_tableSlave
    ui->scrECATlost_tableSlave = lv_table_create(ui->scrECATlost_contSlaveData);
    lv_obj_set_pos(ui->scrECATlost_tableSlave, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_tableSlave, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATlost_tableSlave, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATlost_tableSlave,7);
    lv_table_set_row_count(ui->scrECATlost_tableSlave,18);
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,0,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,1,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,2,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,3,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,4,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,5,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,6,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,7,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,8,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,9,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,10,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,11,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,12,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,13,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,14,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,15,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,16,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,17,0,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,0,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,1,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,2,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,3,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,4,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,5,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,6,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,7,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,8,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,9,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,10,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,11,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,12,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,13,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,14,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,15,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,16,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,17,1,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,0,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,1,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,2,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,3,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,4,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,5,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,6,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,7,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,8,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,9,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,10,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,11,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,12,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,13,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,14,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,15,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,16,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,17,2,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,0,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,1,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,2,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,3,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,4,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,5,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,6,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,7,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,8,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,9,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,10,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,11,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,12,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,13,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,14,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,15,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,16,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,17,3,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,0,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,1,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,2,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,3,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,4,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,5,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,6,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,7,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,8,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,9,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,10,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,11,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,12,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,13,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,14,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,15,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,16,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,17,4,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,0,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,1,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,2,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,3,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,4,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,5,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,6,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,7,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,8,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,9,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,10,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,11,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,12,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,13,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,14,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,15,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,16,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,17,5,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,0,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,1,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,2,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,3,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,4,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,5,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,6,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,7,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,8,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,9,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,10,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,11,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,12,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,13,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,14,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,15,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,16,6,"");
    lv_table_set_cell_value(ui->scrECATlost_tableSlave,17,6,"");

    //Write style for scrECATlost_tableSlave, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATlost_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_tableSlave, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_tableSlave, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_tableSlave, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATlost_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATlost_tableSlave, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATlost_tableSlave, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_tableSlave, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_tableSlave, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_tableSlave, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_tableSlave, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATlost_tableSlave, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_tableSlave, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_tableSlave, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveTitle
    ui->scrECATlost_contSlaveTitle = lv_obj_create(ui->scrECATlost_contWin);
    lv_obj_set_pos(ui->scrECATlost_contSlaveTitle, 0, 44);
    lv_obj_set_size(ui->scrECATlost_contSlaveTitle, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveTitle, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveTitle, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveTitle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveTitle7
    ui->scrECATlost_labelSlaveTitle7 = lv_label_create(ui->scrECATlost_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle7, 768, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle7, 125, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveTitle7, "StatusCode");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveTitle7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveTitle7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveTitle7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveTitle7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveTitle7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveTitle7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveTitle7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveTitle6
    ui->scrECATlost_labelSlaveTitle6 = lv_label_create(ui->scrECATlost_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle6, 637, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle6, 130, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveTitle6, "State");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveTitle6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveTitle6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveTitle6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveTitle6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveTitle6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveTitle6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveTitle6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveTitle5
    ui->scrECATlost_labelSlaveTitle5 = lv_label_create(ui->scrECATlost_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle5, 544, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveTitle5, "STM");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveTitle5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveTitle5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveTitle5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveTitle5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveTitle5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveTitle5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveTitle5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveTitle4
    ui->scrECATlost_labelSlaveTitle4 = lv_label_create(ui->scrECATlost_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle4, 363, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveTitle4, "active error WRC");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveTitle4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveTitle4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveTitle4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveTitle4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveTitle4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveTitle4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveTitle4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveTitle3
    ui->scrECATlost_labelSlaveTitle3 = lv_label_create(ui->scrECATlost_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle3, 262, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveTitle3, "WRC");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveTitle3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveTitle3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveTitle3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveTitle3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveTitle3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveTitle3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveTitle2
    ui->scrECATlost_labelSlaveTitle2 = lv_label_create(ui->scrECATlost_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle2, 71, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle2, 190, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveTitle2, "product");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveTitle2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveTitle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveTitle2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveTitle2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveTitle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveTitle2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveTitle1
    ui->scrECATlost_labelSlaveTitle1 = lv_label_create(ui->scrECATlost_contSlaveTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle1, 3, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveTitle1, "slave");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveTitle1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveTitle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveTitle1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveTitle1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveTitle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveTitle1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contState
    ui->scrECATlost_contState = lv_obj_create(ui->scrECATlost_contWin);
    lv_obj_set_pos(ui->scrECATlost_contState, 0, 0);
    lv_obj_set_size(ui->scrECATlost_contState, 917, 42);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contState, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contState, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contState, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contState, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contState, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contStateData
    ui->scrECATlost_contStateData = lv_obj_create(ui->scrECATlost_contState);
    lv_obj_set_pos(ui->scrECATlost_contStateData, 0, 22);
    lv_obj_set_size(ui->scrECATlost_contStateData, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contStateData, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contStateData, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contStateData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contStateData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contStateData, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contStateData, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contStateData, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contStateData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contStateData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contStateData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contStateData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contStateData, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelStateData3
    ui->scrECATlost_labelStateData3 = lv_label_create(ui->scrECATlost_contStateData);
    lv_obj_set_pos(ui->scrECATlost_labelStateData3, 567, 3);
    lv_obj_set_size(ui->scrECATlost_labelStateData3, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelStateData3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelStateData3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelStateData3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelStateData3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelStateData3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelStateData3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelStateData3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelStateData3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelStateData2
    ui->scrECATlost_labelStateData2 = lv_label_create(ui->scrECATlost_contStateData);
    lv_obj_set_pos(ui->scrECATlost_labelStateData2, 336, 3);
    lv_obj_set_size(ui->scrECATlost_labelStateData2, 230, 14);
    lv_label_set_text(ui->scrECATlost_labelStateData2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelStateData2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelStateData2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelStateData2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelStateData2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelStateData2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelStateData2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelStateData2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelStateData1
    ui->scrECATlost_labelStateData1 = lv_label_create(ui->scrECATlost_contStateData);
    lv_obj_set_pos(ui->scrECATlost_labelStateData1, 35, 3);
    lv_obj_set_size(ui->scrECATlost_labelStateData1, 300, 14);
    lv_label_set_text(ui->scrECATlost_labelStateData1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelStateData1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelStateData1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelStateData1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelStateData1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelStateData1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelStateData1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelStateData1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contStateTitle
    ui->scrECATlost_contStateTitle = lv_obj_create(ui->scrECATlost_contState);
    lv_obj_set_pos(ui->scrECATlost_contStateTitle, 0, 0);
    lv_obj_set_size(ui->scrECATlost_contStateTitle, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contStateTitle, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contStateTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contStateTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contStateTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contStateTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contStateTitle, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contStateTitle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contStateTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contStateTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contStateTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contStateTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contStateTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelStateTitle3
    ui->scrECATlost_labelStateTitle3 = lv_label_create(ui->scrECATlost_contStateTitle);
    lv_obj_set_pos(ui->scrECATlost_labelStateTitle3, 552, 3);
    lv_obj_set_size(ui->scrECATlost_labelStateTitle3, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelStateTitle3, "active");
    lv_label_set_long_mode(ui->scrECATlost_labelStateTitle3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelStateTitle3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelStateTitle3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelStateTitle3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelStateTitle3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelStateTitle3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelStateTitle3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelStateTitle2
    ui->scrECATlost_labelStateTitle2 = lv_label_create(ui->scrECATlost_contStateTitle);
    lv_obj_set_pos(ui->scrECATlost_labelStateTitle2, 301, 4);
    lv_obj_set_size(ui->scrECATlost_labelStateTitle2, 250, 14);
    lv_label_set_text(ui->scrECATlost_labelStateTitle2, "configured");
    lv_label_set_long_mode(ui->scrECATlost_labelStateTitle2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelStateTitle2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelStateTitle2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelStateTitle2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelStateTitle2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelStateTitle2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelStateTitle2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelStateTitle1
    ui->scrECATlost_labelStateTitle1 = lv_label_create(ui->scrECATlost_contStateTitle);
    lv_obj_set_pos(ui->scrECATlost_labelStateTitle1, 3, 4);
    lv_obj_set_size(ui->scrECATlost_labelStateTitle1, 297, 14);
    lv_label_set_text(ui->scrECATlost_labelStateTitle1, "state capture");
    lv_label_set_long_mode(ui->scrECATlost_labelStateTitle1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelStateTitle1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelStateTitle1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelStateTitle1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelStateTitle1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelStateTitle1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelStateTitle1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelTitle
    ui->scrECATlost_labelTitle = lv_label_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_labelTitle, 0, 50);
    lv_obj_set_size(ui->scrECATlost_labelTitle, 937, 32);
    lv_label_set_text(ui->scrECATlost_labelTitle, "Ethercat Lost");
    lv_label_set_long_mode(ui->scrECATlost_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelTitle, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contAlarm
    ui->scrECATlost_contAlarm = lv_obj_create(ui->scrECATlost);
    lv_obj_set_pos(ui->scrECATlost_contAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATlost_contAlarm, 937, 32);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contAlarm, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contAlarm, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATlost_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATlost_contAlarm, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATlost_contAlarm, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_taAlarm
    ui->scrECATlost_taAlarm = lv_textarea_create(ui->scrECATlost_contAlarm);
    lv_obj_set_pos(ui->scrECATlost_taAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATlost_taAlarm, 933, 24);
    lv_textarea_set_text(ui->scrECATlost_taAlarm, "");
    lv_textarea_set_placeholder_text(ui->scrECATlost_taAlarm, "");
    lv_textarea_set_password_bullet(ui->scrECATlost_taAlarm, "*");
    lv_textarea_set_password_mode(ui->scrECATlost_taAlarm, false);
    lv_textarea_set_one_line(ui->scrECATlost_taAlarm, true);
    lv_textarea_set_accepted_chars(ui->scrECATlost_taAlarm, "");
    lv_textarea_set_max_length(ui->scrECATlost_taAlarm, 90);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scrECATlost_taAlarm, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scrECATlost_taAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATlost_taAlarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_taAlarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_taAlarm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_taAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_taAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATlost_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_taAlarm, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATlost_taAlarm, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATlost_taAlarm, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_taAlarm, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_taAlarm, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_taAlarm, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scrECATlost.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrECATlost);

    //Init events for screen.
    events_init_scrECATlost(ui);
}
