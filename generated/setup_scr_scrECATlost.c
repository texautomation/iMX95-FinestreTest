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
    lv_obj_set_size(ui->scrECATlost_labelUndo, 100, 30);
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
    lv_obj_set_size(ui->scrECATlost_labelMain, 100, 30);
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
    lv_obj_set_size(ui->scrECATlost_contWin, 917, 622);
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

    //Write codes scrECATlost_contSlaveLosted
    ui->scrECATlost_contSlaveLosted = lv_obj_create(ui->scrECATlost_contWin);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLosted, 0, 466);
    lv_obj_set_size(ui->scrECATlost_contSlaveLosted, 917, 156);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLosted, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLosted, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLosted, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLosted, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLosted, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLosted, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLosted, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLosted, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLosted, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLosted, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLosted, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLosted, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveLostedRiga6
    ui->scrECATlost_contSlaveLostedRiga6 = lv_obj_create(ui->scrECATlost_contSlaveLosted);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLostedRiga6, 0, 134);
    lv_obj_set_size(ui->scrECATlost_contSlaveLostedRiga6, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLostedRiga6, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLostedRiga6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLostedRiga6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLostedRiga6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLostedRiga6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLostedRiga6, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLostedRiga6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLostedRiga6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLostedRiga6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLostedRiga6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLostedRiga6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLostedRiga6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedRiga6_1
    ui->scrECATlost_labelSlaveLostedRiga6_1 = lv_label_create(ui->scrECATlost_contSlaveLostedRiga6);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedRiga6_1, 40, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedRiga6_1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedRiga6_1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedRiga6_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedRiga6_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedRiga6_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedRiga6_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedRiga6_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedRiga6_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveLostedRiga5
    ui->scrECATlost_contSlaveLostedRiga5 = lv_obj_create(ui->scrECATlost_contSlaveLosted);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLostedRiga5, 0, 112);
    lv_obj_set_size(ui->scrECATlost_contSlaveLostedRiga5, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLostedRiga5, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLostedRiga5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLostedRiga5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLostedRiga5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLostedRiga5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLostedRiga5, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLostedRiga5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLostedRiga5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLostedRiga5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLostedRiga5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLostedRiga5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLostedRiga5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedRiga5_1
    ui->scrECATlost_labelSlaveLostedRiga5_1 = lv_label_create(ui->scrECATlost_contSlaveLostedRiga5);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedRiga5_1, 40, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedRiga5_1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedRiga5_1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedRiga5_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedRiga5_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedRiga5_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedRiga5_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedRiga5_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedRiga5_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveLostedRiga4
    ui->scrECATlost_contSlaveLostedRiga4 = lv_obj_create(ui->scrECATlost_contSlaveLosted);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLostedRiga4, 0, 90);
    lv_obj_set_size(ui->scrECATlost_contSlaveLostedRiga4, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLostedRiga4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLostedRiga4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLostedRiga4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLostedRiga4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLostedRiga4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLostedRiga4, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLostedRiga4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLostedRiga4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLostedRiga4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLostedRiga4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLostedRiga4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLostedRiga4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedRiga4_1
    ui->scrECATlost_labelSlaveLostedRiga4_1 = lv_label_create(ui->scrECATlost_contSlaveLostedRiga4);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedRiga4_1, 40, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedRiga4_1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedRiga4_1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedRiga4_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedRiga4_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedRiga4_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedRiga4_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedRiga4_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedRiga4_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveLostedRiga3
    ui->scrECATlost_contSlaveLostedRiga3 = lv_obj_create(ui->scrECATlost_contSlaveLosted);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLostedRiga3, 0, 68);
    lv_obj_set_size(ui->scrECATlost_contSlaveLostedRiga3, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLostedRiga3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLostedRiga3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLostedRiga3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLostedRiga3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLostedRiga3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLostedRiga3, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLostedRiga3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLostedRiga3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLostedRiga3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLostedRiga3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLostedRiga3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLostedRiga3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedRiga3_1
    ui->scrECATlost_labelSlaveLostedRiga3_1 = lv_label_create(ui->scrECATlost_contSlaveLostedRiga3);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedRiga3_1, 40, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedRiga3_1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedRiga3_1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedRiga3_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedRiga3_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedRiga3_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedRiga3_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedRiga3_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedRiga3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveLostedRiga2
    ui->scrECATlost_contSlaveLostedRiga2 = lv_obj_create(ui->scrECATlost_contSlaveLosted);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLostedRiga2, 0, 46);
    lv_obj_set_size(ui->scrECATlost_contSlaveLostedRiga2, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLostedRiga2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLostedRiga2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLostedRiga2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLostedRiga2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLostedRiga2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLostedRiga2, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLostedRiga2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLostedRiga2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLostedRiga2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLostedRiga2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLostedRiga2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLostedRiga2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedRiga2_1
    ui->scrECATlost_labelSlaveLostedRiga2_1 = lv_label_create(ui->scrECATlost_contSlaveLostedRiga2);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedRiga2_1, 40, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedRiga2_1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedRiga2_1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedRiga2_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedRiga2_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedRiga2_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedRiga2_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedRiga2_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedRiga2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveLostedRiga1
    ui->scrECATlost_contSlaveLostedRiga1 = lv_obj_create(ui->scrECATlost_contSlaveLosted);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLostedRiga1, 0, 24);
    lv_obj_set_size(ui->scrECATlost_contSlaveLostedRiga1, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLostedRiga1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLostedRiga1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLostedRiga1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLostedRiga1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLostedRiga1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLostedRiga1, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLostedRiga1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLostedRiga1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLostedRiga1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLostedRiga1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLostedRiga1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLostedRiga1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedRiga1_2
    ui->scrECATlost_labelSlaveLostedRiga1_2 = lv_label_create(ui->scrECATlost_contSlaveLostedRiga1);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedRiga1_2, 40, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedRiga1_2, 40, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedRiga1_2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedRiga1_2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedRiga1_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedRiga1_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedRiga1_2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedRiga1_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedRiga1_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedRiga1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedRiga1_1
    ui->scrECATlost_labelSlaveLostedRiga1_1 = lv_label_create(ui->scrECATlost_contSlaveLostedRiga1);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedRiga1_1, 40, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedRiga1_1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedRiga1_1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedRiga1_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedRiga1_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedRiga1_1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedRiga1_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedRiga1_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedRiga1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveLostedTitle
    ui->scrECATlost_contSlaveLostedTitle = lv_obj_create(ui->scrECATlost_contSlaveLosted);
    lv_obj_set_pos(ui->scrECATlost_contSlaveLostedTitle, 0, 0);
    lv_obj_set_size(ui->scrECATlost_contSlaveLostedTitle, 917, 22);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlaveLostedTitle, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlaveLostedTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlaveLostedTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlaveLostedTitle, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlaveLostedTitle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlaveLostedTitle
    ui->scrECATlost_labelSlaveLostedTitle = lv_label_create(ui->scrECATlost_contSlaveLostedTitle);
    lv_obj_set_pos(ui->scrECATlost_labelSlaveLostedTitle, 0, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveLostedTitle, 917, 14);
    lv_label_set_text(ui->scrECATlost_labelSlaveLostedTitle, "Lost");
    lv_label_set_long_mode(ui->scrECATlost_labelSlaveLostedTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlaveLostedTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlaveLostedTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlaveLostedTitle, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlaveLostedTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlaveLostedTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlaveLostedTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave
    ui->scrECATlost_contSlave = lv_obj_create(ui->scrECATlost_contWin);
    lv_obj_set_pos(ui->scrECATlost_contSlave, 0, 46);
    lv_obj_set_size(ui->scrECATlost_contSlave, 917, 420);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave18Value
    ui->scrECATlost_contSlave18Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave18Value, 0, 398);
    lv_obj_set_size(ui->scrECATlost_contSlave18Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave18Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave18Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave18Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave18Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave18Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave18Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave18Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave18Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave18Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave18Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave18Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave18Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave18Value7
    ui->scrECATlost_labelSlave18Value7 = lv_label_create(ui->scrECATlost_contSlave18Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave18Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave18Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave18Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave18Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave18Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave18Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave18Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave18Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave18Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave18Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave18Value6
    ui->scrECATlost_labelSlave18Value6 = lv_label_create(ui->scrECATlost_contSlave18Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave18Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave18Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave18Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave18Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave18Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave18Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave18Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave18Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave18Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave18Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave18Value5
    ui->scrECATlost_labelSlave18Value5 = lv_label_create(ui->scrECATlost_contSlave18Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave18Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave18Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave18Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave18Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave18Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave18Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave18Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave18Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave18Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave18Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave18Value4
    ui->scrECATlost_labelSlave18Value4 = lv_label_create(ui->scrECATlost_contSlave18Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave18Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave18Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave18Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave18Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave18Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave18Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave18Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave18Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave18Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave18Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave18Value3
    ui->scrECATlost_labelSlave18Value3 = lv_label_create(ui->scrECATlost_contSlave18Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave18Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave18Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave18Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave18Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave18Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave18Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave18Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave18Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave18Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave18Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave18Value2
    ui->scrECATlost_labelSlave18Value2 = lv_label_create(ui->scrECATlost_contSlave18Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave18Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave18Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave18Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave18Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave18Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave18Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave18Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave18Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave18Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave18Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave18Value1
    ui->scrECATlost_labelSlave18Value1 = lv_label_create(ui->scrECATlost_contSlave18Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave18Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave18Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave18Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave18Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave18Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave18Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave18Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave18Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave18Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave18Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave17Value
    ui->scrECATlost_contSlave17Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave17Value, 0, 376);
    lv_obj_set_size(ui->scrECATlost_contSlave17Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave17Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave17Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave17Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave17Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave17Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave17Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave17Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave17Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave17Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave17Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave17Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave17Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave17Value7
    ui->scrECATlost_labelSlave17Value7 = lv_label_create(ui->scrECATlost_contSlave17Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave17Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave17Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave17Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave17Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave17Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave17Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave17Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave17Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave17Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave17Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave17Value6
    ui->scrECATlost_labelSlave17Value6 = lv_label_create(ui->scrECATlost_contSlave17Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave17Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave17Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave17Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave17Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave17Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave17Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave17Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave17Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave17Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave17Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave17Value5
    ui->scrECATlost_labelSlave17Value5 = lv_label_create(ui->scrECATlost_contSlave17Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave17Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave17Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave17Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave17Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave17Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave17Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave17Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave17Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave17Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave17Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave17Value4
    ui->scrECATlost_labelSlave17Value4 = lv_label_create(ui->scrECATlost_contSlave17Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave17Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave17Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave17Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave17Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave17Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave17Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave17Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave17Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave17Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave17Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave17Value3
    ui->scrECATlost_labelSlave17Value3 = lv_label_create(ui->scrECATlost_contSlave17Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave17Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave17Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave17Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave17Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave17Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave17Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave17Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave17Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave17Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave17Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave17Value2
    ui->scrECATlost_labelSlave17Value2 = lv_label_create(ui->scrECATlost_contSlave17Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave17Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave17Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave17Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave17Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave17Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave17Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave17Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave17Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave17Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave17Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave17Value1
    ui->scrECATlost_labelSlave17Value1 = lv_label_create(ui->scrECATlost_contSlave17Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave17Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave17Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave17Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave17Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave17Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave17Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave17Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave17Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave17Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave17Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave16Value
    ui->scrECATlost_contSlave16Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave16Value, 0, 354);
    lv_obj_set_size(ui->scrECATlost_contSlave16Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave16Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave16Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave16Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave16Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave16Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave16Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave16Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave16Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave16Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave16Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave16Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave16Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave16Value7
    ui->scrECATlost_labelSlave16Value7 = lv_label_create(ui->scrECATlost_contSlave16Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave16Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave16Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave16Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave16Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave16Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave16Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave16Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave16Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave16Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave16Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave16Value6
    ui->scrECATlost_labelSlave16Value6 = lv_label_create(ui->scrECATlost_contSlave16Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave16Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave16Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave16Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave16Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave16Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave16Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave16Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave16Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave16Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave16Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave16Value5
    ui->scrECATlost_labelSlave16Value5 = lv_label_create(ui->scrECATlost_contSlave16Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave16Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave16Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave16Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave16Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave16Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave16Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave16Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave16Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave16Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave16Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave16Value4
    ui->scrECATlost_labelSlave16Value4 = lv_label_create(ui->scrECATlost_contSlave16Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave16Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave16Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave16Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave16Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave16Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave16Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave16Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave16Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave16Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave16Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave16Value3
    ui->scrECATlost_labelSlave16Value3 = lv_label_create(ui->scrECATlost_contSlave16Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave16Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave16Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave16Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave16Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave16Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave16Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave16Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave16Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave16Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave16Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave16Value2
    ui->scrECATlost_labelSlave16Value2 = lv_label_create(ui->scrECATlost_contSlave16Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave16Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave16Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave16Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave16Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave16Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave16Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave16Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave16Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave16Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave16Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave16Value1
    ui->scrECATlost_labelSlave16Value1 = lv_label_create(ui->scrECATlost_contSlave16Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave16Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave16Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave16Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave16Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave16Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave16Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave16Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave16Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave16Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave16Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave15Value
    ui->scrECATlost_contSlave15Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave15Value, 0, 332);
    lv_obj_set_size(ui->scrECATlost_contSlave15Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave15Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave15Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave15Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave15Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave15Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave15Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave15Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave15Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave15Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave15Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave15Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave15Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave15Value7
    ui->scrECATlost_labelSlave15Value7 = lv_label_create(ui->scrECATlost_contSlave15Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave15Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave15Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave15Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave15Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave15Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave15Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave15Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave15Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave15Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave15Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave15Value6
    ui->scrECATlost_labelSlave15Value6 = lv_label_create(ui->scrECATlost_contSlave15Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave15Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave15Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave15Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave15Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave15Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave15Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave15Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave15Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave15Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave15Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave15Value5
    ui->scrECATlost_labelSlave15Value5 = lv_label_create(ui->scrECATlost_contSlave15Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave15Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave15Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave15Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave15Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave15Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave15Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave15Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave15Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave15Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave15Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave15Value4
    ui->scrECATlost_labelSlave15Value4 = lv_label_create(ui->scrECATlost_contSlave15Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave15Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave15Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave15Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave15Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave15Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave15Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave15Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave15Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave15Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave15Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave15Value3
    ui->scrECATlost_labelSlave15Value3 = lv_label_create(ui->scrECATlost_contSlave15Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave15Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave15Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave15Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave15Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave15Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave15Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave15Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave15Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave15Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave15Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave15Value2
    ui->scrECATlost_labelSlave15Value2 = lv_label_create(ui->scrECATlost_contSlave15Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave15Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave15Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave15Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave15Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave15Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave15Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave15Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave15Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave15Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave15Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave15Value1
    ui->scrECATlost_labelSlave15Value1 = lv_label_create(ui->scrECATlost_contSlave15Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave15Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave15Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave15Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave15Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave15Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave15Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave15Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave15Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave15Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave15Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave14Value
    ui->scrECATlost_contSlave14Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave14Value, 0, 310);
    lv_obj_set_size(ui->scrECATlost_contSlave14Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave14Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave14Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave14Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave14Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave14Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave14Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave14Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave14Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave14Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave14Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave14Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave14Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave14Value7
    ui->scrECATlost_labelSlave14Value7 = lv_label_create(ui->scrECATlost_contSlave14Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave14Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave14Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave14Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave14Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave14Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave14Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave14Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave14Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave14Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave14Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave14Value6
    ui->scrECATlost_labelSlave14Value6 = lv_label_create(ui->scrECATlost_contSlave14Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave14Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave14Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave14Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave14Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave14Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave14Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave14Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave14Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave14Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave14Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave14Value5
    ui->scrECATlost_labelSlave14Value5 = lv_label_create(ui->scrECATlost_contSlave14Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave14Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave14Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave14Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave14Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave14Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave14Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave14Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave14Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave14Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave14Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave14Value4
    ui->scrECATlost_labelSlave14Value4 = lv_label_create(ui->scrECATlost_contSlave14Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave14Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave14Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave14Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave14Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave14Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave14Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave14Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave14Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave14Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave14Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave14Value3
    ui->scrECATlost_labelSlave14Value3 = lv_label_create(ui->scrECATlost_contSlave14Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave14Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave14Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave14Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave14Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave14Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave14Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave14Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave14Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave14Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave14Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave14Value2
    ui->scrECATlost_labelSlave14Value2 = lv_label_create(ui->scrECATlost_contSlave14Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave14Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave14Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave14Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave14Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave14Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave14Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave14Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave14Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave14Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave14Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave14Value1
    ui->scrECATlost_labelSlave14Value1 = lv_label_create(ui->scrECATlost_contSlave14Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave14Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave14Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave14Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave14Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave14Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave14Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave14Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave14Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave14Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave14Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave13Value
    ui->scrECATlost_contSlave13Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave13Value, 0, 288);
    lv_obj_set_size(ui->scrECATlost_contSlave13Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave13Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave13Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave13Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave13Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave13Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave13Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave13Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave13Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave13Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave13Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave13Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave13Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave13Value7
    ui->scrECATlost_labelSlave13Value7 = lv_label_create(ui->scrECATlost_contSlave13Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave13Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave13Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave13Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave13Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave13Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave13Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave13Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave13Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave13Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave13Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave13Value6
    ui->scrECATlost_labelSlave13Value6 = lv_label_create(ui->scrECATlost_contSlave13Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave13Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave13Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave13Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave13Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave13Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave13Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave13Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave13Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave13Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave13Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave13Value5
    ui->scrECATlost_labelSlave13Value5 = lv_label_create(ui->scrECATlost_contSlave13Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave13Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave13Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave13Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave13Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave13Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave13Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave13Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave13Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave13Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave13Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave13Value4
    ui->scrECATlost_labelSlave13Value4 = lv_label_create(ui->scrECATlost_contSlave13Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave13Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave13Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave13Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave13Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave13Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave13Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave13Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave13Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave13Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave13Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave13Value3
    ui->scrECATlost_labelSlave13Value3 = lv_label_create(ui->scrECATlost_contSlave13Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave13Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave13Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave13Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave13Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave13Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave13Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave13Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave13Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave13Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave13Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave13Value2
    ui->scrECATlost_labelSlave13Value2 = lv_label_create(ui->scrECATlost_contSlave13Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave13Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave13Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave13Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave13Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave13Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave13Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave13Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave13Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave13Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave13Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave13Value1
    ui->scrECATlost_labelSlave13Value1 = lv_label_create(ui->scrECATlost_contSlave13Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave13Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave13Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave13Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave13Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave13Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave13Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave13Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave13Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave13Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave13Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave12Value
    ui->scrECATlost_contSlave12Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave12Value, 0, 266);
    lv_obj_set_size(ui->scrECATlost_contSlave12Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave12Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave12Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave12Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave12Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave12Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave12Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave12Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave12Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave12Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave12Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave12Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave12Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave12Value7
    ui->scrECATlost_labelSlave12Value7 = lv_label_create(ui->scrECATlost_contSlave12Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave12Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave12Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave12Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave12Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave12Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave12Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave12Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave12Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave12Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave12Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave12Value6
    ui->scrECATlost_labelSlave12Value6 = lv_label_create(ui->scrECATlost_contSlave12Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave12Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave12Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave12Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave12Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave12Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave12Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave12Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave12Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave12Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave12Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave12Value5
    ui->scrECATlost_labelSlave12Value5 = lv_label_create(ui->scrECATlost_contSlave12Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave12Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave12Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave12Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave12Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave12Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave12Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave12Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave12Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave12Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave12Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave12Value4
    ui->scrECATlost_labelSlave12Value4 = lv_label_create(ui->scrECATlost_contSlave12Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave12Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave12Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave12Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave12Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave12Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave12Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave12Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave12Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave12Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave12Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave12Value3
    ui->scrECATlost_labelSlave12Value3 = lv_label_create(ui->scrECATlost_contSlave12Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave12Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave12Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave12Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave12Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave12Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave12Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave12Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave12Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave12Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave12Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave12Value2
    ui->scrECATlost_labelSlave12Value2 = lv_label_create(ui->scrECATlost_contSlave12Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave12Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave12Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave12Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave12Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave12Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave12Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave12Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave12Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave12Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave12Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave12Value1
    ui->scrECATlost_labelSlave12Value1 = lv_label_create(ui->scrECATlost_contSlave12Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave12Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave12Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave12Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave12Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave12Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave12Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave12Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave12Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave12Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave12Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave11Value
    ui->scrECATlost_contSlave11Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave11Value, 0, 244);
    lv_obj_set_size(ui->scrECATlost_contSlave11Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave11Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave11Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave11Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave11Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave11Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave11Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave11Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave11Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave11Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave11Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave11Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave11Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave11Value7
    ui->scrECATlost_labelSlave11Value7 = lv_label_create(ui->scrECATlost_contSlave11Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave11Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave11Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave11Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave11Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave11Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave11Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave11Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave11Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave11Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave11Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave11Value6
    ui->scrECATlost_labelSlave11Value6 = lv_label_create(ui->scrECATlost_contSlave11Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave11Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave11Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave11Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave11Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave11Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave11Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave11Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave11Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave11Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave11Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave11Value5
    ui->scrECATlost_labelSlave11Value5 = lv_label_create(ui->scrECATlost_contSlave11Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave11Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave11Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave11Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave11Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave11Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave11Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave11Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave11Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave11Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave11Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave11Value4
    ui->scrECATlost_labelSlave11Value4 = lv_label_create(ui->scrECATlost_contSlave11Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave11Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave11Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave11Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave11Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave11Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave11Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave11Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave11Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave11Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave11Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave11Value3
    ui->scrECATlost_labelSlave11Value3 = lv_label_create(ui->scrECATlost_contSlave11Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave11Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave11Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave11Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave11Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave11Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave11Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave11Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave11Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave11Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave11Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave11Value2
    ui->scrECATlost_labelSlave11Value2 = lv_label_create(ui->scrECATlost_contSlave11Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave11Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave11Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave11Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave11Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave11Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave11Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave11Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave11Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave11Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave11Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave11Value1
    ui->scrECATlost_labelSlave11Value1 = lv_label_create(ui->scrECATlost_contSlave11Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave11Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave11Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave11Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave11Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave11Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave11Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave11Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave11Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave11Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave11Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave10Value
    ui->scrECATlost_contSlave10Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave10Value, 0, 222);
    lv_obj_set_size(ui->scrECATlost_contSlave10Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave10Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave10Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave10Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave10Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave10Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave10Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave10Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave10Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave10Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave10Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave10Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave10Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave10Value7
    ui->scrECATlost_labelSlave10Value7 = lv_label_create(ui->scrECATlost_contSlave10Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave10Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave10Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave10Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave10Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave10Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave10Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave10Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave10Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave10Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave10Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave10Value6
    ui->scrECATlost_labelSlave10Value6 = lv_label_create(ui->scrECATlost_contSlave10Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave10Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave10Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave10Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave10Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave10Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave10Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave10Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave10Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave10Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave10Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave10Value5
    ui->scrECATlost_labelSlave10Value5 = lv_label_create(ui->scrECATlost_contSlave10Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave10Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave10Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave10Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave10Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave10Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave10Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave10Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave10Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave10Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave10Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave10Value4
    ui->scrECATlost_labelSlave10Value4 = lv_label_create(ui->scrECATlost_contSlave10Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave10Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave10Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave10Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave10Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave10Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave10Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave10Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave10Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave10Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave10Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave10Value3
    ui->scrECATlost_labelSlave10Value3 = lv_label_create(ui->scrECATlost_contSlave10Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave10Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave10Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave10Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave10Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave10Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave10Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave10Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave10Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave10Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave10Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave10Value2
    ui->scrECATlost_labelSlave10Value2 = lv_label_create(ui->scrECATlost_contSlave10Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave10Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave10Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave10Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave10Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave10Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave10Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave10Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave10Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave10Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave10Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave10Value1
    ui->scrECATlost_labelSlave10Value1 = lv_label_create(ui->scrECATlost_contSlave10Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave10Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave10Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave10Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave10Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave10Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave10Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave10Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave10Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave10Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave10Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave9Value
    ui->scrECATlost_contSlave9Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave9Value, 0, 200);
    lv_obj_set_size(ui->scrECATlost_contSlave9Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave9Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave9Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave9Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave9Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave9Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave9Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave9Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave9Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave9Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave9Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave9Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave9Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave9Value7
    ui->scrECATlost_labelSlave9Value7 = lv_label_create(ui->scrECATlost_contSlave9Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave9Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave9Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave9Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave9Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave9Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave9Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave9Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave9Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave9Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave9Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave9Value6
    ui->scrECATlost_labelSlave9Value6 = lv_label_create(ui->scrECATlost_contSlave9Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave9Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave9Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave9Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave9Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave9Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave9Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave9Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave9Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave9Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave9Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave9Value5
    ui->scrECATlost_labelSlave9Value5 = lv_label_create(ui->scrECATlost_contSlave9Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave9Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave9Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave9Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave9Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave9Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave9Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave9Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave9Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave9Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave9Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave9Value4
    ui->scrECATlost_labelSlave9Value4 = lv_label_create(ui->scrECATlost_contSlave9Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave9Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave9Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave9Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave9Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave9Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave9Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave9Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave9Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave9Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave9Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave9Value3
    ui->scrECATlost_labelSlave9Value3 = lv_label_create(ui->scrECATlost_contSlave9Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave9Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave9Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave9Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave9Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave9Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave9Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave9Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave9Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave9Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave9Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave9Value2
    ui->scrECATlost_labelSlave9Value2 = lv_label_create(ui->scrECATlost_contSlave9Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave9Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave9Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave9Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave9Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave9Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave9Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave9Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave9Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave9Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave9Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave9Value1
    ui->scrECATlost_labelSlave9Value1 = lv_label_create(ui->scrECATlost_contSlave9Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave9Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave9Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave9Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave9Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave9Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave9Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave9Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave9Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave9Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave9Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave8Value
    ui->scrECATlost_contSlave8Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave8Value, 0, 178);
    lv_obj_set_size(ui->scrECATlost_contSlave8Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave8Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave8Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave8Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave8Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave8Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave8Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave8Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave8Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave8Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave8Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave8Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave8Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave8Value7
    ui->scrECATlost_labelSlave8Value7 = lv_label_create(ui->scrECATlost_contSlave8Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave8Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave8Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave8Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave8Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave8Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave8Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave8Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave8Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave8Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave8Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave8Value6
    ui->scrECATlost_labelSlave8Value6 = lv_label_create(ui->scrECATlost_contSlave8Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave8Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave8Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave8Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave8Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave8Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave8Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave8Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave8Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave8Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave8Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave8Value5
    ui->scrECATlost_labelSlave8Value5 = lv_label_create(ui->scrECATlost_contSlave8Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave8Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave8Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave8Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave8Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave8Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave8Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave8Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave8Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave8Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave8Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave8Value4
    ui->scrECATlost_labelSlave8Value4 = lv_label_create(ui->scrECATlost_contSlave8Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave8Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave8Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave8Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave8Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave8Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave8Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave8Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave8Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave8Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave8Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave8Value3
    ui->scrECATlost_labelSlave8Value3 = lv_label_create(ui->scrECATlost_contSlave8Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave8Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave8Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave8Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave8Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave8Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave8Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave8Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave8Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave8Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave8Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave8Value2
    ui->scrECATlost_labelSlave8Value2 = lv_label_create(ui->scrECATlost_contSlave8Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave8Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave8Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave8Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave8Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave8Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave8Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave8Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave8Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave8Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave8Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave8Value1
    ui->scrECATlost_labelSlave8Value1 = lv_label_create(ui->scrECATlost_contSlave8Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave8Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave8Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave8Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave8Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave8Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave8Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave8Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave8Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave8Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave8Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave7Value
    ui->scrECATlost_contSlave7Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave7Value, 0, 156);
    lv_obj_set_size(ui->scrECATlost_contSlave7Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave7Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave7Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave7Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave7Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave7Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave7Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave7Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave7Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave7Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave7Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave7Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave7Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave7Value7
    ui->scrECATlost_labelSlave7Value7 = lv_label_create(ui->scrECATlost_contSlave7Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave7Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave7Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave7Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave7Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave7Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave7Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave7Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave7Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave7Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave7Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave7Value6
    ui->scrECATlost_labelSlave7Value6 = lv_label_create(ui->scrECATlost_contSlave7Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave7Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave7Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave7Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave7Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave7Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave7Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave7Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave7Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave7Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave7Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave7Value5
    ui->scrECATlost_labelSlave7Value5 = lv_label_create(ui->scrECATlost_contSlave7Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave7Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave7Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave7Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave7Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave7Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave7Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave7Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave7Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave7Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave7Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave7Value4
    ui->scrECATlost_labelSlave7Value4 = lv_label_create(ui->scrECATlost_contSlave7Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave7Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave7Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave7Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave7Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave7Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave7Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave7Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave7Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave7Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave7Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave7Value3
    ui->scrECATlost_labelSlave7Value3 = lv_label_create(ui->scrECATlost_contSlave7Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave7Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave7Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave7Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave7Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave7Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave7Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave7Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave7Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave7Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave7Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave7Value2
    ui->scrECATlost_labelSlave7Value2 = lv_label_create(ui->scrECATlost_contSlave7Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave7Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave7Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave7Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave7Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave7Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave7Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave7Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave7Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave7Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave7Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave7Value1
    ui->scrECATlost_labelSlave7Value1 = lv_label_create(ui->scrECATlost_contSlave7Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave7Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave7Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave7Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave7Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave7Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave7Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave7Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave7Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave7Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave7Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave6Value
    ui->scrECATlost_contSlave6Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave6Value, 0, 134);
    lv_obj_set_size(ui->scrECATlost_contSlave6Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave6Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave6Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave6Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave6Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave6Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave6Value7
    ui->scrECATlost_labelSlave6Value7 = lv_label_create(ui->scrECATlost_contSlave6Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave6Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave6Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave6Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave6Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave6Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave6Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave6Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave6Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave6Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave6Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave6Value6
    ui->scrECATlost_labelSlave6Value6 = lv_label_create(ui->scrECATlost_contSlave6Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave6Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave6Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave6Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave6Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave6Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave6Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave6Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave6Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave6Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave6Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave6Value5
    ui->scrECATlost_labelSlave6Value5 = lv_label_create(ui->scrECATlost_contSlave6Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave6Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave6Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave6Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave6Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave6Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave6Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave6Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave6Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave6Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave6Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave6Value4
    ui->scrECATlost_labelSlave6Value4 = lv_label_create(ui->scrECATlost_contSlave6Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave6Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave6Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave6Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave6Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave6Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave6Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave6Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave6Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave6Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave6Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave6Value2
    ui->scrECATlost_labelSlave6Value2 = lv_label_create(ui->scrECATlost_contSlave6Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave6Value2, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave6Value2, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave6Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave6Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave6Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave6Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave6Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave6Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave6Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave6Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave6Value1
    ui->scrECATlost_labelSlave6Value1 = lv_label_create(ui->scrECATlost_contSlave6Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave6Value1, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave6Value1, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave6Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave6Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave6Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave6Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave6Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave6Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave6Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave6Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave6Value
    ui->scrECATlost_labelSlave6Value = lv_label_create(ui->scrECATlost_contSlave6Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave6Value, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave6Value, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave6Value, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave6Value, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave6Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave6Value, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave6Value, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave6Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave6Value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave6Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave5Value
    ui->scrECATlost_contSlave5Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave5Value, 0, 112);
    lv_obj_set_size(ui->scrECATlost_contSlave5Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave5Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave5Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave5Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave5Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave5Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave5Value6
    ui->scrECATlost_labelSlave5Value6 = lv_label_create(ui->scrECATlost_contSlave5Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave5Value6, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave5Value6, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave5Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave5Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave5Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave5Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave5Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave5Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave5Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave5Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave5Value
    ui->scrECATlost_labelSlave5Value = lv_label_create(ui->scrECATlost_contSlave5Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave5Value, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave5Value, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave5Value, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave5Value, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave5Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave5Value, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave5Value, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave5Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave5Value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave5Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave5Value5
    ui->scrECATlost_labelSlave5Value5 = lv_label_create(ui->scrECATlost_contSlave5Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave5Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave5Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave5Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave5Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave5Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave5Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave5Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave5Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave5Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave5Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave5Value4
    ui->scrECATlost_labelSlave5Value4 = lv_label_create(ui->scrECATlost_contSlave5Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave5Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave5Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave5Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave5Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave5Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave5Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave5Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave5Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave5Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave5Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave5Value3
    ui->scrECATlost_labelSlave5Value3 = lv_label_create(ui->scrECATlost_contSlave5Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave5Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave5Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave5Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave5Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave5Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave5Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave5Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave5Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave5Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave5Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave5Value2
    ui->scrECATlost_labelSlave5Value2 = lv_label_create(ui->scrECATlost_contSlave5Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave5Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave5Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave5Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave5Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave5Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave5Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave5Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave5Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave5Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave5Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave5Value1
    ui->scrECATlost_labelSlave5Value1 = lv_label_create(ui->scrECATlost_contSlave5Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave5Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave5Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave5Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave5Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave5Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave5Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave5Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave5Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave5Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave5Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave4Value
    ui->scrECATlost_contSlave4Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave4Value, 0, 90);
    lv_obj_set_size(ui->scrECATlost_contSlave4Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave4Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave4Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave4Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave4Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave4Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave4Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave4Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave4Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave4Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave4Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave4Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave4Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave4Value7
    ui->scrECATlost_labelSlave4Value7 = lv_label_create(ui->scrECATlost_contSlave4Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave4Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave4Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave4Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave4Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave4Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave4Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave4Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave4Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave4Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave4Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave4Value6
    ui->scrECATlost_labelSlave4Value6 = lv_label_create(ui->scrECATlost_contSlave4Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave4Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave4Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave4Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave4Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave4Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave4Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave4Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave4Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave4Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave4Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave4Value5
    ui->scrECATlost_labelSlave4Value5 = lv_label_create(ui->scrECATlost_contSlave4Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave4Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave4Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave4Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave4Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave4Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave4Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave4Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave4Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave4Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave4Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave4Value4
    ui->scrECATlost_labelSlave4Value4 = lv_label_create(ui->scrECATlost_contSlave4Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave4Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave4Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave4Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave4Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave4Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave4Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave4Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave4Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave4Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave4Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave4Value3
    ui->scrECATlost_labelSlave4Value3 = lv_label_create(ui->scrECATlost_contSlave4Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave4Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave4Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave4Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave4Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave4Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave4Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave4Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave4Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave4Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave4Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave4Value2
    ui->scrECATlost_labelSlave4Value2 = lv_label_create(ui->scrECATlost_contSlave4Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave4Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave4Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave4Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave4Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave4Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave4Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave4Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave4Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave4Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave4Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave4Value1
    ui->scrECATlost_labelSlave4Value1 = lv_label_create(ui->scrECATlost_contSlave4Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave4Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave4Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave4Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave4Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave4Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave4Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave4Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave4Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave4Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave4Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave3Value
    ui->scrECATlost_contSlave3Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave3Value, 0, 68);
    lv_obj_set_size(ui->scrECATlost_contSlave3Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave3Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave3Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave3Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave3Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave3Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave3Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave3Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave3Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave3Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave3Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave3Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave3Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave3Value7
    ui->scrECATlost_labelSlave3Value7 = lv_label_create(ui->scrECATlost_contSlave3Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave3Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave3Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave3Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave3Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave3Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave3Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave3Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave3Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave3Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave3Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave3Value6
    ui->scrECATlost_labelSlave3Value6 = lv_label_create(ui->scrECATlost_contSlave3Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave3Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave3Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave3Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave3Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave3Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave3Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave3Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave3Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave3Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave3Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave3Value5
    ui->scrECATlost_labelSlave3Value5 = lv_label_create(ui->scrECATlost_contSlave3Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave3Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave3Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave3Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave3Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave3Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave3Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave3Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave3Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave3Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave3Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave3Value4
    ui->scrECATlost_labelSlave3Value4 = lv_label_create(ui->scrECATlost_contSlave3Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave3Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave3Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave3Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave3Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave3Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave3Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave3Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave3Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave3Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave3Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave3Value3
    ui->scrECATlost_labelSlave3Value3 = lv_label_create(ui->scrECATlost_contSlave3Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave3Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave3Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave3Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave3Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave3Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave3Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave3Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave3Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave3Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave3Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave3Value2
    ui->scrECATlost_labelSlave3Value2 = lv_label_create(ui->scrECATlost_contSlave3Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave3Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave3Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave3Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave3Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave3Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave3Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave3Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave3Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave3Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave3Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave3Value1
    ui->scrECATlost_labelSlave3Value1 = lv_label_create(ui->scrECATlost_contSlave3Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave3Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave3Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave3Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave3Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave3Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave3Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave3Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave3Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave3Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave3Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave2Value
    ui->scrECATlost_contSlave2Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave2Value, 0, 46);
    lv_obj_set_size(ui->scrECATlost_contSlave2Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave2Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave2Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave2Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave2Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave2Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave2Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave2Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave2Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave2Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave2Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave2Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave2Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave2Value7
    ui->scrECATlost_labelSlave2Value7 = lv_label_create(ui->scrECATlost_contSlave2Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave2Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave2Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave2Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave2Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave2Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave2Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave2Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave2Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave2Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave2Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave2Value6
    ui->scrECATlost_labelSlave2Value6 = lv_label_create(ui->scrECATlost_contSlave2Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave2Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave2Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave2Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave2Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave2Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave2Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave2Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave2Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave2Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave2Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave2Value5
    ui->scrECATlost_labelSlave2Value5 = lv_label_create(ui->scrECATlost_contSlave2Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave2Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave2Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave2Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave2Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave2Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave2Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave2Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave2Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave2Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave2Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave2Value4
    ui->scrECATlost_labelSlave2Value4 = lv_label_create(ui->scrECATlost_contSlave2Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave2Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave2Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave2Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave2Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave2Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave2Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave2Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave2Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave2Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave2Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave2Value3
    ui->scrECATlost_labelSlave2Value3 = lv_label_create(ui->scrECATlost_contSlave2Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave2Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave2Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave2Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave2Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave2Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave2Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave2Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave2Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave2Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave2Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave2Value2
    ui->scrECATlost_labelSlave2Value2 = lv_label_create(ui->scrECATlost_contSlave2Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave2Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave2Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave2Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave2Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave2Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave2Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave2Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave2Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave2Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave2Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave2Value1
    ui->scrECATlost_labelSlave2Value1 = lv_label_create(ui->scrECATlost_contSlave2Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave2Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave2Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave2Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave2Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave2Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave2Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave2Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave2Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave2Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave2Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlave1Value
    ui->scrECATlost_contSlave1Value = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlave1Value, 0, 24);
    lv_obj_set_size(ui->scrECATlost_contSlave1Value, 917, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATlost_contSlave1Value, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATlost_contSlave1Value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_contSlave1Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_contSlave1Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_contSlave1Value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATlost_contSlave1Value, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATlost_contSlave1Value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_contSlave1Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_contSlave1Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_contSlave1Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_contSlave1Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_contSlave1Value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave1Value7
    ui->scrECATlost_labelSlave1Value7 = lv_label_create(ui->scrECATlost_contSlave1Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave1Value7, 798, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave1Value7, 105, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave1Value7, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave1Value7, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave1Value7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave1Value7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave1Value7, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave1Value7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave1Value7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave1Value7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave1Value6
    ui->scrECATlost_labelSlave1Value6 = lv_label_create(ui->scrECATlost_contSlave1Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave1Value6, 647, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave1Value6, 150, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave1Value6, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave1Value6, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave1Value6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave1Value6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave1Value6, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave1Value6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave1Value6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave1Value6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave1Value5
    ui->scrECATlost_labelSlave1Value5 = lv_label_create(ui->scrECATlost_contSlave1Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave1Value5, 554, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave1Value5, 92, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave1Value5, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave1Value5, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave1Value5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave1Value5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave1Value5, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave1Value5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave1Value5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave1Value5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave1Value4
    ui->scrECATlost_labelSlave1Value4 = lv_label_create(ui->scrECATlost_contSlave1Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave1Value4, 373, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave1Value4, 180, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave1Value4, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave1Value4, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave1Value4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave1Value4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave1Value4, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave1Value4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave1Value4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave1Value4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave1Value3
    ui->scrECATlost_labelSlave1Value3 = lv_label_create(ui->scrECATlost_contSlave1Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave1Value3, 272, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave1Value3, 100, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave1Value3, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave1Value3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave1Value3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave1Value3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave1Value3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave1Value3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave1Value3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave1Value3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave1Value2
    ui->scrECATlost_labelSlave1Value2 = lv_label_create(ui->scrECATlost_contSlave1Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave1Value2, 71, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave1Value2, 200, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave1Value2, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave1Value2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave1Value2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave1Value2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave1Value2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave1Value2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave1Value2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave1Value2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_labelSlave1Value1
    ui->scrECATlost_labelSlave1Value1 = lv_label_create(ui->scrECATlost_contSlave1Value);
    lv_obj_set_pos(ui->scrECATlost_labelSlave1Value1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelSlave1Value1, 67, 14);
    lv_label_set_text(ui->scrECATlost_labelSlave1Value1, "");
    lv_label_set_long_mode(ui->scrECATlost_labelSlave1Value1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATlost_labelSlave1Value1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATlost_labelSlave1Value1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATlost_labelSlave1Value1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATlost_labelSlave1Value1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATlost_labelSlave1Value1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATlost_labelSlave1Value1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATlost_contSlaveTitle
    ui->scrECATlost_contSlaveTitle = lv_obj_create(ui->scrECATlost_contSlave);
    lv_obj_set_pos(ui->scrECATlost_contSlaveTitle, 0, 0);
    lv_obj_set_size(ui->scrECATlost_contSlaveTitle, 917, 22);
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
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle7, 798, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle7, 105, 14);
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
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle6, 647, 4);
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle6, 150, 14);
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
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle5, 554, 4);
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
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle4, 373, 4);
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
    lv_obj_set_pos(ui->scrECATlost_labelSlaveTitle3, 272, 4);
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
    lv_obj_set_size(ui->scrECATlost_labelSlaveTitle2, 200, 14);
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
    lv_obj_set_size(ui->scrECATlost_contState, 917, 44);
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
    lv_obj_set_pos(ui->scrECATlost_contStateData, 0, 24);
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
    lv_obj_set_pos(ui->scrECATlost_labelStateData3, 552, 3);
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
    lv_obj_set_pos(ui->scrECATlost_labelStateData2, 301, 3);
    lv_obj_set_size(ui->scrECATlost_labelStateData2, 250, 14);
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
    lv_obj_set_pos(ui->scrECATlost_labelStateData1, 3, 3);
    lv_obj_set_size(ui->scrECATlost_labelStateData1, 297, 14);
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
    lv_obj_set_size(ui->scrECATlost_contStateTitle, 917, 22);
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
