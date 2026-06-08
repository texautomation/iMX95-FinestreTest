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



void setup_scr_scrECATnet(lv_ui *ui)
{
    //Write codes scrECATnet
    ui->scrECATnet = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrECATnet, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->scrECATnet, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATnet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contToolbar
    ui->scrECATnet_contToolbar = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contToolbar, 940, 680);
    lv_obj_set_size(ui->scrECATnet_contToolbar, 330, 120);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contToolbar, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_contToolbar, LV_OBJ_FLAG_HIDDEN);

    //Write style for scrECATnet_contToolbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contToolbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contToolbar, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contToolbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contToolbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contRestart
    ui->scrECATnet_contRestart = lv_obj_create(ui->scrECATnet_contToolbar);
    lv_obj_set_pos(ui->scrECATnet_contRestart, 0, 60);
    lv_obj_set_size(ui->scrECATnet_contRestart, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contRestart, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contRestart, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contRestart, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contRestart, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contRestart, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contRestart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelRestart
    ui->scrECATnet_labelRestart = lv_label_create(ui->scrECATnet_contRestart);
    lv_obj_set_pos(ui->scrECATnet_labelRestart, 0, 20);
    lv_obj_set_size(ui->scrECATnet_labelRestart, 54, 30);
    lv_obj_add_flag(ui->scrECATnet_labelRestart, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATnet_labelRestart, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATnet_labelRestart, "Restart");
    lv_label_set_long_mode(ui->scrECATnet_labelRestart, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelRestart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelRestart, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelRestart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contReset
    ui->scrECATnet_contReset = lv_obj_create(ui->scrECATnet_contToolbar);
    lv_obj_set_pos(ui->scrECATnet_contReset, 272, 0);
    lv_obj_set_size(ui->scrECATnet_contReset, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contReset, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contReset, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contReset, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contReset, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contReset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contReset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelReset
    ui->scrECATnet_labelReset = lv_label_create(ui->scrECATnet_contReset);
    lv_obj_set_pos(ui->scrECATnet_labelReset, 0, 12);
    lv_obj_set_size(ui->scrECATnet_labelReset, 54, 30);
    lv_obj_add_flag(ui->scrECATnet_labelReset, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrECATnet_labelReset, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATnet_labelReset, "Reset\ndata");
    lv_label_set_long_mode(ui->scrECATnet_labelReset, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelReset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelReset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelReset, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelReset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelReset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelReset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contDown
    ui->scrECATnet_contDown = lv_obj_create(ui->scrECATnet_contToolbar);
    lv_obj_set_pos(ui->scrECATnet_contDown, 204, 0);
    lv_obj_set_size(ui->scrECATnet_contDown, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contDown, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contDown, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contDown, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contDown, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contDown, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgDown
    ui->scrECATnet_imgDown = lv_image_create(ui->scrECATnet_contDown);
    lv_obj_set_pos(ui->scrECATnet_imgDown, 7, 7);
    lv_obj_set_size(ui->scrECATnet_imgDown, 40, 40);
    lv_obj_add_flag(ui->scrECATnet_imgDown, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgDown, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgDown, &_Down_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATnet_imgDown, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgDown, 0);

    //Write style for scrECATnet_imgDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contUp
    ui->scrECATnet_contUp = lv_obj_create(ui->scrECATnet_contToolbar);
    lv_obj_set_pos(ui->scrECATnet_contUp, 136, 0);
    lv_obj_set_size(ui->scrECATnet_contUp, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contUp, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contUp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contUp, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contUp, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contUp, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgUp
    ui->scrECATnet_imgUp = lv_image_create(ui->scrECATnet_contUp);
    lv_obj_set_pos(ui->scrECATnet_imgUp, 7, 7);
    lv_obj_set_size(ui->scrECATnet_imgUp, 40, 40);
    lv_obj_add_flag(ui->scrECATnet_imgUp, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgUp, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgUp, &_Up_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATnet_imgUp, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgUp, 0);

    //Write style for scrECATnet_imgUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contEnd
    ui->scrECATnet_contEnd = lv_obj_create(ui->scrECATnet_contToolbar);
    lv_obj_set_pos(ui->scrECATnet_contEnd, 68, 0);
    lv_obj_set_size(ui->scrECATnet_contEnd, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contEnd, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contEnd, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contEnd, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contEnd, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contEnd, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contEnd, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contEnd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgEnd
    ui->scrECATnet_imgEnd = lv_image_create(ui->scrECATnet_contEnd);
    lv_obj_set_pos(ui->scrECATnet_imgEnd, 7, 7);
    lv_obj_set_size(ui->scrECATnet_imgEnd, 40, 40);
    lv_obj_add_flag(ui->scrECATnet_imgEnd, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgEnd, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgEnd, &_End_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATnet_imgEnd, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgEnd, 0);

    //Write style for scrECATnet_imgEnd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgEnd, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgEnd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contHome
    ui->scrECATnet_contHome = lv_obj_create(ui->scrECATnet_contToolbar);
    lv_obj_set_pos(ui->scrECATnet_contHome, 0, 0);
    lv_obj_set_size(ui->scrECATnet_contHome, 58, 58);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contHome, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contHome, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contHome, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contHome, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contHome, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contHome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contHome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgHome
    ui->scrECATnet_imgHome = lv_image_create(ui->scrECATnet_contHome);
    lv_obj_set_pos(ui->scrECATnet_imgHome, 7, 7);
    lv_obj_set_size(ui->scrECATnet_imgHome, 40, 40);
    lv_obj_add_flag(ui->scrECATnet_imgHome, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgHome, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgHome, &_Home_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrECATnet_imgHome, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgHome, 0);

    //Write style for scrECATnet_imgHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgHome, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contExport
    ui->scrECATnet_contExport = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contExport, 1110, 510);
    lv_obj_set_size(ui->scrECATnet_contExport, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contExport, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contExport, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contExport, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contExport, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contExport, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contExport, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelExport
    ui->scrECATnet_labelExport = lv_label_create(ui->scrECATnet_contExport);
    lv_obj_set_pos(ui->scrECATnet_labelExport, 30, 130);
    lv_obj_set_size(ui->scrECATnet_labelExport, 100, 30);
    lv_obj_add_flag(ui->scrECATnet_labelExport, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATnet_labelExport, "EXPORT");
    lv_label_set_long_mode(ui->scrECATnet_labelExport, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelExport, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelExport, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelExport, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contBand
    ui->scrECATnet_contBand = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contBand, 940, 510);
    lv_obj_set_size(ui->scrECATnet_contBand, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contBand, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contBand, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contBand, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contBand, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contBand, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contBand, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contBand, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgBand
    ui->scrECATnet_imgBand = lv_image_create(ui->scrECATnet_contBand);
    lv_obj_set_pos(ui->scrECATnet_imgBand, 30, 30);
    lv_obj_set_size(ui->scrECATnet_imgBand, 100, 100);
    lv_obj_add_flag(ui->scrECATnet_imgBand, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgBand, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgBand, &_banda_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATnet_imgBand, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgBand, 0);

    //Write style for scrECATnet_imgBand, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgBand, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgBand, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contLost
    ui->scrECATnet_contLost = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contLost, 1110, 340);
    lv_obj_set_size(ui->scrECATnet_contLost, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contLost, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contLost, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contLost, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contLost, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contLost, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contLost, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contLost, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgLost
    ui->scrECATnet_imgLost = lv_image_create(ui->scrECATnet_contLost);
    lv_obj_set_pos(ui->scrECATnet_imgLost, 30, 30);
    lv_obj_set_size(ui->scrECATnet_imgLost, 100, 100);
    lv_obj_add_flag(ui->scrECATnet_imgLost, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgLost, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgLost, &_nodi_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATnet_imgLost, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgLost, 0);

    //Write style for scrECATnet_imgLost, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgLost, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgLost, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contRegs
    ui->scrECATnet_contRegs = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contRegs, 940, 340);
    lv_obj_set_size(ui->scrECATnet_contRegs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contRegs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contRegs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contRegs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contRegs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contRegs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contRegs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contRegs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgRegs
    ui->scrECATnet_imgRegs = lv_image_create(ui->scrECATnet_contRegs);
    lv_obj_set_pos(ui->scrECATnet_imgRegs, 30, 30);
    lv_obj_set_size(ui->scrECATnet_imgRegs, 100, 100);
    lv_obj_add_flag(ui->scrECATnet_imgRegs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgRegs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgRegs, &_registri_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATnet_imgRegs, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgRegs, 0);

    //Write style for scrECATnet_imgRegs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgRegs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgRegs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contMsgs
    ui->scrECATnet_contMsgs = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contMsgs, 1110, 170);
    lv_obj_set_size(ui->scrECATnet_contMsgs, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contMsgs, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contMsgs, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contMsgs, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contMsgs, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contMsgs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contMsgs, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contMsgs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_imgMsgs
    ui->scrECATnet_imgMsgs = lv_image_create(ui->scrECATnet_contMsgs);
    lv_obj_set_pos(ui->scrECATnet_imgMsgs, 30, 30);
    lv_obj_set_size(ui->scrECATnet_imgMsgs, 100, 100);
    lv_obj_add_flag(ui->scrECATnet_imgMsgs, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrECATnet_imgMsgs, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrECATnet_imgMsgs, &_log_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrECATnet_imgMsgs, 50,50);
    lv_image_set_rotation(ui->scrECATnet_imgMsgs, 0);

    //Write style for scrECATnet_imgMsgs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrECATnet_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scrECATnet_imgMsgs, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrECATnet_imgMsgs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contNet
    ui->scrECATnet_contNet = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contNet, 940, 170);
    lv_obj_set_size(ui->scrECATnet_contNet, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contNet, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contNet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contNet, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contNet, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contNet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contNet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelNet
    ui->scrECATnet_labelNet = lv_label_create(ui->scrECATnet_contNet);
    lv_obj_set_pos(ui->scrECATnet_labelNet, 30, 130);
    lv_obj_set_size(ui->scrECATnet_labelNet, 100, 30);
    lv_label_set_text(ui->scrECATnet_labelNet, "");
    lv_label_set_long_mode(ui->scrECATnet_labelNet, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelNet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelNet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelNet, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelNet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelNet, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelNet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contUndo
    ui->scrECATnet_contUndo = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contUndo, 1110, 0);
    lv_obj_set_size(ui->scrECATnet_contUndo, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contUndo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contUndo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contUndo, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contUndo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contUndo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contUndo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelUndo
    ui->scrECATnet_labelUndo = lv_label_create(ui->scrECATnet_contUndo);
    lv_obj_set_pos(ui->scrECATnet_labelUndo, 30, 130);
    lv_obj_set_size(ui->scrECATnet_labelUndo, 100, 30);
    lv_obj_add_flag(ui->scrECATnet_labelUndo, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATnet_labelUndo, "UNDO");
    lv_label_set_long_mode(ui->scrECATnet_labelUndo, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelUndo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelUndo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelUndo, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelUndo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelUndo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelUndo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contMain
    ui->scrECATnet_contMain = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contMain, 940, 0);
    lv_obj_set_size(ui->scrECATnet_contMain, 160, 160);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contMain, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contMain, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contMain, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contMain, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contMain, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contMain, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelMain
    ui->scrECATnet_labelMain = lv_label_create(ui->scrECATnet_contMain);
    lv_obj_set_pos(ui->scrECATnet_labelMain, 30, 130);
    lv_obj_set_size(ui->scrECATnet_labelMain, 100, 30);
    lv_obj_add_flag(ui->scrECATnet_labelMain, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrECATnet_labelMain, "MAIN");
    lv_label_set_long_mode(ui->scrECATnet_labelMain, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelMain, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelMain, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelMain, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contWin
    ui->scrECATnet_contWin = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contWin, 10, 90);
    lv_obj_set_size(ui->scrECATnet_contWin, 917, 600);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contWin, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contWin, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contWin, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contWin, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contWin, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contWin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contInfo
    ui->scrECATnet_contInfo = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contInfo, 482, 280);
    lv_obj_set_size(ui->scrECATnet_contInfo, 435, 320);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contInfo, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATnet_contInfo, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATnet_contInfo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contInfo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contInfo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contInfo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableDC
    ui->scrECATnet_tableDC = lv_table_create(ui->scrECATnet_contInfo);
    lv_obj_set_pos(ui->scrECATnet_tableDC, 0, 200);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableDC, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableDC, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableDC,2);
    lv_table_set_row_count(ui->scrECATnet_tableDC,6);
    lv_table_set_cell_value(ui->scrECATnet_tableDC,0,0,"DC system time");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,1,0,"manage:");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,2,0,"jitter:");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,3,0,"ticks:");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,4,0,"Master:");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,5,0,"Network:");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,0,1,"( 32 bit )");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,2,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,3,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,4,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableDC,5,1,"");

    //Write style for scrECATnet_tableDC, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableDC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableDC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableDC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableDC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableDC, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableDC, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableDC, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableDC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableDC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableDC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableDC, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableDC, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableDC, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableDC, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableDC, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableDC, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableDC, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableDC, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableDC, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableDC, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableDC, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableDC, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableDC, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableDC, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableDC, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableDC, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableInfo
    ui->scrECATnet_tableInfo = lv_table_create(ui->scrECATnet_contInfo);
    lv_obj_set_pos(ui->scrECATnet_tableInfo, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableInfo, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableInfo, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableInfo,2);
    lv_table_set_row_count(ui->scrECATnet_tableInfo,10);
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,0,0,"Information");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,2,0,"vendor:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,3,0,"serial:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,4,0,"product:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,5,0,"revision:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,6,0,"DC:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,7,0,"cycle0:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,8,0,"EoE IP:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,9,0,"Gateway:");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,0,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,2,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,3,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,4,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,5,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,6,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,7,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,8,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInfo,9,1,"");

    //Write style for scrECATnet_tableInfo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableInfo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableInfo, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableInfo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableInfo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableInfo, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableInfo, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableInfo, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableInfo, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableInfo, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableInfo, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableInfo, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableInfo, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableInfo, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableInfo, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableInfo, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableInfo, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableInfo, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contAL
    ui->scrECATnet_contAL = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contAL, 482, 80);
    lv_obj_set_size(ui->scrECATnet_contAL, 435, 200);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contAL, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATnet_contAL, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATnet_contAL, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contAL, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contAL, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contAL, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableEmcy
    ui->scrECATnet_tableEmcy = lv_table_create(ui->scrECATnet_contAL);
    lv_obj_set_pos(ui->scrECATnet_tableEmcy, 0, 60);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableEmcy, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableEmcy, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableEmcy,8);
    lv_table_set_row_count(ui->scrECATnet_tableEmcy,7);
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,0,"emcy");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,1,"time");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,2,"reg");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,3,"M1");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,4,"M2");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,4,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,4,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,4,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,4,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,4,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,4,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,5,"M3");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,5,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,5,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,5,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,5,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,5,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,5,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,6,"M4");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,6,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,6,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,6,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,6,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,6,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,6,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,0,7,"M5");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,1,7,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,2,7,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,3,7,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,4,7,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,5,7,"");
    lv_table_set_cell_value(ui->scrECATnet_tableEmcy,6,7,"");

    //Write style for scrECATnet_tableEmcy, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableEmcy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableEmcy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableEmcy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableEmcy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableEmcy, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableEmcy, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableEmcy, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableEmcy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableEmcy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableEmcy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableEmcy, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableEmcy, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableEmcy, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableEmcy, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableEmcy, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableEmcy, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableEmcy, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableEmcy, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableEmcy, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableEmcy, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableEmcy, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableEmcy, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableEmcy, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableEmcy, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableEmcy, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableEmcy, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableAL
    ui->scrECATnet_tableAL = lv_table_create(ui->scrECATnet_contAL);
    lv_obj_set_pos(ui->scrECATnet_tableAL, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableAL, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableAL, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableAL,1);
    lv_table_set_row_count(ui->scrECATnet_tableAL,3);
    lv_table_set_cell_value(ui->scrECATnet_tableAL,0,0,"Al status code ( 0x0134 )");
    lv_table_set_cell_value(ui->scrECATnet_tableAL,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableAL,2,0,"");

    //Write style for scrECATnet_tableAL, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableAL, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableAL, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableAL, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableAL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableAL, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableAL, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableAL, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableAL, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableAL, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableAL, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableAL, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableAL, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableAL, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableAL, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableAL, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableAL, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableAL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableAL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableAL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableAL, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contOutput
    ui->scrECATnet_contOutput = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contOutput, 0, 460);
    lv_obj_set_size(ui->scrECATnet_contOutput, 480, 140);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contOutput, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contOutput, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contOutput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contOutput, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contOutput, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableOutput
    ui->scrECATnet_tableOutput = lv_table_create(ui->scrECATnet_contOutput);
    lv_obj_set_pos(ui->scrECATnet_tableOutput, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableOutput, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableOutput, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableOutput,3);
    lv_table_set_row_count(ui->scrECATnet_tableOutput,7);
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,0,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,2,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,3,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,4,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,5,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,6,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,0,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,2,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,3,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,4,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,5,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,6,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,0,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,1,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,2,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,3,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,4,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,5,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableOutput,6,2,"");

    //Write style for scrECATnet_tableOutput, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableOutput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableOutput, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableOutput, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableOutput, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableOutput, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableOutput, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableOutput, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableOutput, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableOutput, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableOutput, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableOutput, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableOutput, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableOutput, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableOutput, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableOutput, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableOutput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableOutput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableOutput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableOutput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contTitleOutput
    ui->scrECATnet_contTitleOutput = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contTitleOutput, 0, 440);
    lv_obj_set_size(ui->scrECATnet_contTitleOutput, 480, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contTitleOutput, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contTitleOutput, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contTitleOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contTitleOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contTitleOutput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contTitleOutput, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contTitleOutput, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contTitleOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contTitleOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contTitleOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contTitleOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contTitleOutput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelTitleOutput3
    ui->scrECATnet_labelTitleOutput3 = lv_label_create(ui->scrECATnet_contTitleOutput);
    lv_obj_set_pos(ui->scrECATnet_labelTitleOutput3, 393, 3);
    lv_obj_set_size(ui->scrECATnet_labelTitleOutput3, 87, 14);
    lv_label_set_text(ui->scrECATnet_labelTitleOutput3, "value");
    lv_label_set_long_mode(ui->scrECATnet_labelTitleOutput3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelTitleOutput3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelTitleOutput3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelTitleOutput3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelTitleOutput3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelTitleOutput3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelTitleOutput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelTitleOutput2
    ui->scrECATnet_labelTitleOutput2 = lv_label_create(ui->scrECATnet_contTitleOutput);
    lv_obj_set_pos(ui->scrECATnet_labelTitleOutput2, 353, 3);
    lv_obj_set_size(ui->scrECATnet_labelTitleOutput2, 40, 14);
    lv_label_set_text(ui->scrECATnet_labelTitleOutput2, "size");
    lv_label_set_long_mode(ui->scrECATnet_labelTitleOutput2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelTitleOutput2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelTitleOutput2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelTitleOutput2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelTitleOutput2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelTitleOutput2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelTitleOutput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelTitleOutput1
    ui->scrECATnet_labelTitleOutput1 = lv_label_create(ui->scrECATnet_contTitleOutput);
    lv_obj_set_pos(ui->scrECATnet_labelTitleOutput1, 3, 3);
    lv_obj_set_size(ui->scrECATnet_labelTitleOutput1, 350, 14);
    lv_label_set_text(ui->scrECATnet_labelTitleOutput1, "output data");
    lv_label_set_long_mode(ui->scrECATnet_labelTitleOutput1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelTitleOutput1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelTitleOutput1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelTitleOutput1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelTitleOutput1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelTitleOutput1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelTitleOutput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contInput
    ui->scrECATnet_contInput = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contInput, 0, 300);
    lv_obj_set_size(ui->scrECATnet_contInput, 480, 140);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contInput, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contInput, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contInput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contInput, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contInput, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableInput
    ui->scrECATnet_tableInput = lv_table_create(ui->scrECATnet_contInput);
    lv_obj_set_pos(ui->scrECATnet_tableInput, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableInput, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrECATnet_tableInput,3);
    lv_table_set_row_count(ui->scrECATnet_tableInput,7);
    lv_table_set_cell_value(ui->scrECATnet_tableInput,0,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,2,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,3,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,4,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,5,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,6,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,0,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,2,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,3,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,4,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,5,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,6,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,0,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,1,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,2,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,3,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,4,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,5,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableInput,6,2,"");

    //Write style for scrECATnet_tableInput, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableInput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableInput, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableInput, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableInput, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableInput, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableInput, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableInput, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableInput, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableInput, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableInput, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableInput, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableInput, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableInput, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableInput, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableInput, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableInput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableInput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableInput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableInput, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contTitleInput
    ui->scrECATnet_contTitleInput = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contTitleInput, 0, 280);
    lv_obj_set_size(ui->scrECATnet_contTitleInput, 480, 20);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contTitleInput, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contTitleInput, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contTitleInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contTitleInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contTitleInput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contTitleInput, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contTitleInput, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contTitleInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contTitleInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contTitleInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contTitleInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contTitleInput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelTitleInput3
    ui->scrECATnet_labelTitleInput3 = lv_label_create(ui->scrECATnet_contTitleInput);
    lv_obj_set_pos(ui->scrECATnet_labelTitleInput3, 393, 3);
    lv_obj_set_size(ui->scrECATnet_labelTitleInput3, 87, 14);
    lv_label_set_text(ui->scrECATnet_labelTitleInput3, "value");
    lv_label_set_long_mode(ui->scrECATnet_labelTitleInput3, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelTitleInput3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelTitleInput3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelTitleInput3, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelTitleInput3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelTitleInput3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelTitleInput3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelTitleInput2
    ui->scrECATnet_labelTitleInput2 = lv_label_create(ui->scrECATnet_contTitleInput);
    lv_obj_set_pos(ui->scrECATnet_labelTitleInput2, 353, 3);
    lv_obj_set_size(ui->scrECATnet_labelTitleInput2, 40, 14);
    lv_label_set_text(ui->scrECATnet_labelTitleInput2, "size");
    lv_label_set_long_mode(ui->scrECATnet_labelTitleInput2, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelTitleInput2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelTitleInput2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelTitleInput2, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelTitleInput2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelTitleInput2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelTitleInput2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelTitleInput1
    ui->scrECATnet_labelTitleInput1 = lv_label_create(ui->scrECATnet_contTitleInput);
    lv_obj_set_pos(ui->scrECATnet_labelTitleInput1, 3, 3);
    lv_obj_set_size(ui->scrECATnet_labelTitleInput1, 350, 14);
    lv_label_set_text(ui->scrECATnet_labelTitleInput1, "input data");
    lv_label_set_long_mode(ui->scrECATnet_labelTitleInput1, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelTitleInput1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelTitleInput1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelTitleInput1, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelTitleInput1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelTitleInput1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelTitleInput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contSlave
    ui->scrECATnet_contSlave = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contSlave, 0, 80);
    lv_obj_set_size(ui->scrECATnet_contSlave, 480, 200);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contSlave, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATnet_contSlave, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATnet_contSlave, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contSlave, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contSlave, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contSlave, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableSlave
    ui->scrECATnet_tableSlave = lv_table_create(ui->scrECATnet_contSlave);
    lv_obj_set_pos(ui->scrECATnet_tableSlave, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableSlave, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableSlave, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableSlave,4);
    lv_table_set_row_count(ui->scrECATnet_tableSlave,10);
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,0,0,"slave");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,2,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,3,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,4,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,5,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,6,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,7,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,8,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,9,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,0,1,"transition");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,2,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,3,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,4,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,5,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,6,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,7,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,8,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,9,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,0,2,"state");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,1,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,2,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,3,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,4,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,5,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,6,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,7,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,8,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,9,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,0,3,"retries");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,1,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,2,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,3,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,4,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,5,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,6,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,7,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,8,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableSlave,9,3,"");

    //Write style for scrECATnet_tableSlave, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableSlave, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableSlave, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableSlave, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableSlave, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableSlave, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableSlave, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableSlave, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableSlave, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableSlave, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableSlave, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableSlave, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableSlave, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableSlave, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableSlave, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableSlave, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contConfig
    ui->scrECATnet_contConfig = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contConfig, 0, 40);
    lv_obj_set_size(ui->scrECATnet_contConfig, 917, 40);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contConfig, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATnet_contConfig, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATnet_contConfig, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contConfig, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contConfig, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contConfig, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableConfig
    ui->scrECATnet_tableConfig = lv_table_create(ui->scrECATnet_contConfig);
    lv_obj_set_pos(ui->scrECATnet_tableConfig, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableConfig, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableConfig, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableConfig,8);
    lv_table_set_row_count(ui->scrECATnet_tableConfig,2);
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,0,"config");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,1,"active");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,2,"frame wrong");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,3,"noECAT");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,3,"");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,4,"lost");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,4,"");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,5,"cable");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,5,"");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,6,"sync");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,6,"");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,0,7,"ecat cycle");
    lv_table_set_cell_value(ui->scrECATnet_tableConfig,1,7,"");

    //Write style for scrECATnet_tableConfig, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableConfig, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableConfig, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableConfig, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableConfig, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableConfig, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableConfig, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableConfig, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableConfig, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableConfig, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableConfig, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableConfig, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableConfig, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableConfig, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableConfig, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableConfig, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableConfig, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableConfig, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableConfig, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableConfig, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableConfig, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contNetwork
    ui->scrECATnet_contNetwork = lv_obj_create(ui->scrECATnet_contWin);
    lv_obj_set_pos(ui->scrECATnet_contNetwork, 0, 0);
    lv_obj_set_size(ui->scrECATnet_contNetwork, 917, 40);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contNetwork, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->scrECATnet_contNetwork, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for scrECATnet_contNetwork, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contNetwork, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contNetwork, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contNetwork, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_tableNetwork
    ui->scrECATnet_tableNetwork = lv_table_create(ui->scrECATnet_contNetwork);
    lv_obj_set_pos(ui->scrECATnet_tableNetwork, 0, 0);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_tableNetwork, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->scrECATnet_tableNetwork, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_table_set_column_count(ui->scrECATnet_tableNetwork,4);
    lv_table_set_row_count(ui->scrECATnet_tableNetwork,2);
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,0,0,"network");
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,1,0,"");
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,0,1,"destination");
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,1,1,"");
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,0,2,"source");
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,1,2,"");
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,0,3,"type");
    lv_table_set_cell_value(ui->scrECATnet_tableNetwork,1,3,"");

    //Write style for scrECATnet_tableNetwork, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrECATnet_tableNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableNetwork, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableNetwork, lv_color_hex(0xb0b0b0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableNetwork, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_tableNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_tableNetwork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_tableNetwork, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_tableNetwork, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_tableNetwork, &lv_font_montserratMedium_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_tableNetwork, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_tableNetwork, LV_TEXT_ALIGN_LEFT, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_tableNetwork, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_tableNetwork, lv_color_hex(0xb0b0b0), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_tableNetwork, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_tableNetwork, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_tableNetwork, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_tableNetwork, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_tableNetwork, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_tableNetwork, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_tableNetwork, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_tableNetwork, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_tableNetwork, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scrECATnet_labelTitle
    ui->scrECATnet_labelTitle = lv_label_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_labelTitle, 0, 50);
    lv_obj_set_size(ui->scrECATnet_labelTitle, 937, 32);
    lv_label_set_text(ui->scrECATnet_labelTitle, "Ethercat Network");
    lv_label_set_long_mode(ui->scrECATnet_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrECATnet_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrECATnet_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_labelTitle, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_contAlarm
    ui->scrECATnet_contAlarm = lv_obj_create(ui->scrECATnet);
    lv_obj_set_pos(ui->scrECATnet_contAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATnet_contAlarm, 937, 32);
    lv_obj_set_scrollbar_mode(ui->scrECATnet_contAlarm, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrECATnet_contAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrECATnet_contAlarm, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrECATnet_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrECATnet_contAlarm, lv_color_hex(0x606060), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrECATnet_contAlarm, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_contAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_contAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_contAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrECATnet_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_contAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrECATnet_taAlarm
    ui->scrECATnet_taAlarm = lv_textarea_create(ui->scrECATnet_contAlarm);
    lv_obj_set_pos(ui->scrECATnet_taAlarm, 0, 0);
    lv_obj_set_size(ui->scrECATnet_taAlarm, 933, 24);
    lv_textarea_set_text(ui->scrECATnet_taAlarm, "");
    lv_textarea_set_placeholder_text(ui->scrECATnet_taAlarm, "");
    lv_textarea_set_password_bullet(ui->scrECATnet_taAlarm, "*");
    lv_textarea_set_password_mode(ui->scrECATnet_taAlarm, false);
    lv_textarea_set_one_line(ui->scrECATnet_taAlarm, true);
    lv_textarea_set_accepted_chars(ui->scrECATnet_taAlarm, "");
    lv_textarea_set_max_length(ui->scrECATnet_taAlarm, 90);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scrECATnet_taAlarm, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scrECATnet_taAlarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrECATnet_taAlarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrECATnet_taAlarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrECATnet_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrECATnet_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrECATnet_taAlarm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrECATnet_taAlarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_taAlarm, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_taAlarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrECATnet_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrECATnet_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrECATnet_taAlarm, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrECATnet_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrECATnet_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_taAlarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrECATnet_taAlarm, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrECATnet_taAlarm, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrECATnet_taAlarm, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrECATnet_taAlarm, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrECATnet_taAlarm, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scrECATnet.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrECATnet);

    //Init events for screen.
    events_init_scrECATnet(ui);
}
