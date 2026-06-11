/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif

#include "custom.h"

static void scrMain_contDiag_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrSelect, guider_ui.scrSelect_del, &guider_ui.scrMain_del, setup_scr_scrSelect, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrMain_labelManual_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

void events_init_scrMain (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrMain_contDiag, scrMain_contDiag_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrMain_labelManual, scrMain_labelManual_event_handler, LV_EVENT_ALL, ui);
}

static void scrSelect_contECATWin_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATnet, guider_ui.scrECATnet_del, &guider_ui.scrSelect_del, setup_scr_scrECATnet, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATnet_init();
        break;
    }
    default:
        break;
    }
}

static void scrSelect_contMain_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrMain, guider_ui.scrMain_del, &guider_ui.scrSelect_del, setup_scr_scrMain, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrSelect (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrSelect_contECATWin, scrSelect_contECATWin_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrSelect_contMain, scrSelect_contMain_event_handler, LV_EVENT_ALL, ui);
}

static void scrECATnet_contDown_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_imgDown_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contUp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_imgUp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contEnd_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_imgEnd_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contHome_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_imgHome_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contExport_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contBand_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATband, guider_ui.scrECATband_del, &guider_ui.scrECATnet_del, setup_scr_scrECATband, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contLost_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATlost, guider_ui.scrECATlost_del, &guider_ui.scrECATnet_del, setup_scr_scrECATlost, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contRegs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATregs, guider_ui.scrECATregs_del, &guider_ui.scrECATnet_del, setup_scr_scrECATregs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        // la finestra va inizializzata tutte le volte
        scrECATregs_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contMsgs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATmsgs, guider_ui.scrECATmsgs_del, &guider_ui.scrECATnet_del, setup_scr_scrECATmsgs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATmsgs_init();


        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contUndo_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrSelect, guider_ui.scrSelect_del, &guider_ui.scrECATnet_del, setup_scr_scrSelect, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrECATnet_contMain_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrMain, guider_ui.scrMain_del, &guider_ui.scrECATnet_del, setup_scr_scrMain, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrECATnet_tableSlave_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        apri_msgbox_selezione_slave(e);
        break;
    }
    default:
        break;
    }
}

void events_init_scrECATnet (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrECATnet_contDown, scrECATnet_contDown_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_imgDown, scrECATnet_imgDown_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contUp, scrECATnet_contUp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_imgUp, scrECATnet_imgUp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contEnd, scrECATnet_contEnd_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_imgEnd, scrECATnet_imgEnd_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contHome, scrECATnet_contHome_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_imgHome, scrECATnet_imgHome_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contExport, scrECATnet_contExport_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contBand, scrECATnet_contBand_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contLost, scrECATnet_contLost_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contRegs, scrECATnet_contRegs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contMsgs, scrECATnet_contMsgs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contUndo, scrECATnet_contUndo_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_contMain, scrECATnet_contMain_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATnet_tableSlave, scrECATnet_tableSlave_event_handler, LV_EVENT_ALL, ui);
}

static void scrECATmsgs_contDown_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contUp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contEnd_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contHome_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contExport_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contBand_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATband, guider_ui.scrECATband_del, &guider_ui.scrECATmsgs_del, setup_scr_scrECATband, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contLost_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATlost, guider_ui.scrECATlost_del, &guider_ui.scrECATmsgs_del, setup_scr_scrECATlost, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contRegs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATregs, guider_ui.scrECATregs_del, &guider_ui.scrECATmsgs_del, setup_scr_scrECATregs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATregs_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contNet_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATnet, guider_ui.scrECATnet_del, &guider_ui.scrECATmsgs_del, setup_scr_scrECATnet, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATnet_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contUndo_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrSelect, guider_ui.scrSelect_del, &guider_ui.scrECATmsgs_del, setup_scr_scrSelect, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrECATmsgs_contMain_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrMain, guider_ui.scrMain_del, &guider_ui.scrECATmsgs_del, setup_scr_scrMain, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrECATmsgs (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrECATmsgs_contDown, scrECATmsgs_contDown_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contUp, scrECATmsgs_contUp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contEnd, scrECATmsgs_contEnd_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contHome, scrECATmsgs_contHome_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contExport, scrECATmsgs_contExport_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contBand, scrECATmsgs_contBand_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contLost, scrECATmsgs_contLost_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contRegs, scrECATmsgs_contRegs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contNet, scrECATmsgs_contNet_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contUndo, scrECATmsgs_contUndo_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATmsgs_contMain, scrECATmsgs_contMain_event_handler, LV_EVENT_ALL, ui);
}

static void scrECATregs_contReset_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ECAT_reset_ESC_registers();
        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contDown_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contUp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contEnd_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contHome_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contBand_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATband, guider_ui.scrECATband_del, &guider_ui.scrECATregs_del, setup_scr_scrECATband, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contLost_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATlost, guider_ui.scrECATlost_del, &guider_ui.scrECATregs_del, setup_scr_scrECATlost, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contMsgs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATmsgs, guider_ui.scrECATmsgs_del, &guider_ui.scrECATregs_del, setup_scr_scrECATmsgs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATmsgs_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contNet_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATnet, guider_ui.scrECATnet_del, &guider_ui.scrECATregs_del, setup_scr_scrECATnet, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATnet_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contUndo_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrSelect, guider_ui.scrSelect_del, &guider_ui.scrECATregs_del, setup_scr_scrSelect, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrECATregs_contMain_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrMain, guider_ui.scrMain_del, &guider_ui.scrECATregs_del, setup_scr_scrMain, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrECATregs_tableSlave_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        apri_msgbox_selezione_slave(e);
        break;
    }
    default:
        break;
    }
}

void events_init_scrECATregs (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrECATregs_contReset, scrECATregs_contReset_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contDown, scrECATregs_contDown_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contUp, scrECATregs_contUp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contEnd, scrECATregs_contEnd_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contHome, scrECATregs_contHome_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contBand, scrECATregs_contBand_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contLost, scrECATregs_contLost_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contMsgs, scrECATregs_contMsgs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contNet, scrECATregs_contNet_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contUndo, scrECATregs_contUndo_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_contMain, scrECATregs_contMain_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATregs_tableSlave, scrECATregs_tableSlave_event_handler, LV_EVENT_ALL, ui);
}

static void scrECATlost_contRestart_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contDown_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contUp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contEnd_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contHome_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contBand_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATband, guider_ui.scrECATband_del, &guider_ui.scrECATlost_del, setup_scr_scrECATband, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contRegs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATregs, guider_ui.scrECATregs_del, &guider_ui.scrECATlost_del, setup_scr_scrECATregs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        // la finestra va inizializzata tutte le volte
        scrECATregs_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contMsgs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATmsgs, guider_ui.scrECATmsgs_del, &guider_ui.scrECATlost_del, setup_scr_scrECATmsgs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATmsgs_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contNet_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATnet, guider_ui.scrECATnet_del, &guider_ui.scrECATlost_del, setup_scr_scrECATnet, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATnet_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contUndo_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrSelect, guider_ui.scrSelect_del, &guider_ui.scrECATlost_del, setup_scr_scrSelect, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrECATlost_contMain_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrMain, guider_ui.scrMain_del, &guider_ui.scrECATlost_del, setup_scr_scrMain, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrECATlost (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrECATlost_contRestart, scrECATlost_contRestart_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contDown, scrECATlost_contDown_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contUp, scrECATlost_contUp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contEnd, scrECATlost_contEnd_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contHome, scrECATlost_contHome_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contBand, scrECATlost_contBand_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contRegs, scrECATlost_contRegs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contMsgs, scrECATlost_contMsgs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contNet, scrECATlost_contNet_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contUndo, scrECATlost_contUndo_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATlost_contMain, scrECATlost_contMain_event_handler, LV_EVENT_ALL, ui);
}

static void scrECATband_contLost_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATlost, guider_ui.scrECATlost_del, &guider_ui.scrECATband_del, setup_scr_scrECATlost, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void scrECATband_contRegs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATregs, guider_ui.scrECATregs_del, &guider_ui.scrECATband_del, setup_scr_scrECATregs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        // la finestra va inizializzata tutte le volte
        scrECATregs_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATband_contMsgs_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATmsgs, guider_ui.scrECATmsgs_del, &guider_ui.scrECATband_del, setup_scr_scrECATmsgs, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATmsgs_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATband_contNet_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrECATnet, guider_ui.scrECATnet_del, &guider_ui.scrECATband_del, setup_scr_scrECATnet, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        scrECATnet_init();
        break;
    }
    default:
        break;
    }
}

static void scrECATband_contUndo_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrSelect, guider_ui.scrSelect_del, &guider_ui.scrECATband_del, setup_scr_scrSelect, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrECATband_contMain_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrMain, guider_ui.scrMain_del, &guider_ui.scrECATband_del, setup_scr_scrMain, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrECATband (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrECATband_contLost, scrECATband_contLost_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATband_contRegs, scrECATband_contRegs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATband_contMsgs, scrECATband_contMsgs_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATband_contNet, scrECATband_contNet_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATband_contUndo, scrECATband_contUndo_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrECATband_contMain, scrECATband_contMain_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
