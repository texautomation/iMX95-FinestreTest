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
const lv_coord_t col_w[] = { 140,200,140,140 };

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
        uint32_t row;
        uint32_t col;
        lv_obj_t * table = lv_event_get_target(e);
        // Ottieni riga e colonna selezionate
        lv_table_get_selected_cell(table, &row, &col);

        // Controlla se una riga valida è stata cliccata
        if(row != LV_TABLE_CELL_NONE)
        {
            int len, i, j;
            uint32_t n_rows = lv_table_get_row_count(table);
            uint32_t n_cols = lv_table_get_column_count(table);
            // Crea il popup (Message Box)
            lv_obj_t * mbox = lv_msgbox_create(NULL);
            /* IMPORTANTISSIMO */
            lv_obj_clear_flag(mbox, LV_OBJ_FLAG_IGNORE_LAYOUT);
            /* centra popup */
            lv_obj_center(mbox);
            lv_obj_t * title = lv_msgbox_add_title(mbox, "slave list");
            lv_obj_add_flag(title, LV_OBJ_FLAG_CLICKABLE);
            lv_obj_add_event_cb(title, drag_event_cb, LV_EVENT_PRESSED, mbox);
            lv_obj_add_event_cb(title, drag_event_cb, LV_EVENT_PRESSING, mbox);
            lv_obj_set_size(mbox, 660, 450);
            lv_obj_t * content = lv_msgbox_get_content(mbox);
            if ( content == NULL )
                return;
#if 0
            // ✔ Crea lista dentro la msgbox
            lv_obj_t * list = lv_list_create(content);
            lv_obj_set_size(list, lv_pct(100), lv_pct(100));
            lv_obj_add_style(list, &style_scrMain_list_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
            for( i = 1; i < n_rows; i++ )
            {
                lv_obj_t * btn;
                char buf[1024];
                len = 0;
                buf[0] = '\0';
                const char *cell_0 = lv_table_get_cell_value(table, i, 0);
                if(cell_0 == NULL || cell_0[0] == '\0')
                    break;
                for( j = 0; j < n_cols; j++ )
                {
                    // Prendi il testo della cella e mostralo nel popup
                    const char *cell_text = lv_table_get_cell_value(table, i, j);
                    //if(cell_text == NULL)
                    //  continue;
                    int n = snprintf(buf + len, sizeof(buf) - len, (i != 0 && j == 0) ? "\n%s " : "%s ", cell_text);
                    if ( (n < 0) || (n >= (sizeof(buf) - len) ) )
                        break;
                    len += n;
                }
#if 0
                msg_label = lv_msgbox_add_text(mbox, buf);
                //lv_obj_add_flag(msg_label, LV_OBJ_FLAG_CLICKABLE);
                if ( i == row )
                    lv_obj_set_style_text_color(msg_label, lv_palette_main(LV_PALETTE_BLUE), 0);
                else
                    lv_obj_set_style_text_color(msg_label, lv_color_hex(0x000000), 0);
                //lv_obj_add_event_cb(msg_label, msgbox_event_cb, LV_EVENT_CLICKED, NULL);
#endif
                btn = lv_list_add_btn(list, NULL, buf);
                lv_obj_add_style(btn, &style_btn, LV_PART_MAIN);
                // prendi la label interna del bottone
                lv_obj_t * label = lv_obj_get_child(btn, 0);

                // disattiva scrolling circolare
                lv_label_set_long_mode(label, LV_LABEL_LONG_CLIP);
                lv_obj_add_event_cb(btn, msgbox_event_cb, LV_EVENT_CLICKED, NULL);
                if ( i == net_row_sel )
                {
                    // Applica al bottone
                    lv_obj_add_style(btn, &style_checked, LV_STATE_CHECKED);
                    lv_obj_add_state(btn, LV_STATE_CHECKED);
                }
            }
#else
            /* =========================
             * TABELLA dentro la msgbox
             * ========================= */
            lv_obj_t * tbl = lv_table_create(content);
            lv_obj_set_size(tbl, lv_pct(100), lv_pct(100));
            /* numero righe/colonne */
            lv_table_set_row_count(tbl, n_rows);
            lv_table_set_column_count(tbl, n_cols);
            /* larghezza colonne */
            for(j = 0; j < n_cols; j++)
            {
                lv_table_set_column_width(tbl, j, col_w[j]);
            }
            /* copia dati */
            for(i = 0; i < n_rows; i++)
            {
                for(j = 0; j < n_cols; j++)
                {
                    const char * txt = lv_table_get_cell_value(table, i, j);
                    lv_table_set_cell_value(tbl, i, j, txt);

                    /* header */
                    if(i == 0)
                    {
                        lv_table_set_cell_ctrl( tbl, i, j, LV_TABLE_CELL_CTRL_CUSTOM_1);
                    }
                    /* riga selezionata */
                    if(i == net_row_sel)
                    {
                        lv_table_set_cell_ctrl( tbl, i, j, LV_TABLE_CELL_CTRL_CUSTOM_2);
                    }
                }
            }
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
            lv_obj_clear_flag(tbl, LV_OBJ_FLAG_SCROLL_CHAIN);
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_GESTURE_BUBBLE);
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_EVENT_BUBBLE);
            lv_obj_add_event_cb(tbl, table_draw_event_cb, LV_EVENT_DRAW_TASK_ADDED, NULL);
            lv_obj_add_event_cb(tbl, msgbox_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
#endif
            // Aggiungi un pulsante di chiusura
            lv_msgbox_add_close_button(mbox);
            // 3. (Opzionale) Aggiungi l'evento anche all'area di contenuto (lo sfondo dietro il testo)
            //lv_obj_add_flag(content, LV_OBJ_FLAG_CLICKABLE);
            //lv_obj_add_event_cb(content, msgbox_event_cb, LV_EVENT_CLICKED, mbox);
        }
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
        uint32_t row;
        uint32_t col;
        lv_obj_t * table = lv_event_get_target(e);
        // Ottieni riga e colonna selezionate
        lv_table_get_selected_cell(table, &row, &col);

        // Controlla se una riga valida è stata cliccata
        if(row != LV_TABLE_CELL_NONE)
        {
            int i, j;
            //lv_obj_t * msg_label;
            //lv_obj_t * txt;
            uint32_t n_rows = lv_table_get_row_count(table);
            uint32_t n_cols = lv_table_get_column_count(table);
            // Crea il popup (Message Box)
            lv_obj_t * mbox = lv_msgbox_create(NULL);
            /* IMPORTANTISSIMO */
            lv_obj_clear_flag(mbox, LV_OBJ_FLAG_IGNORE_LAYOUT);
            /* posizione iniziale
            lv_obj_set_pos(mbox, 100, 50); */
            /* centra popup */
            lv_obj_center(mbox);
            lv_obj_t * title = lv_msgbox_add_title(mbox, "slave list");
            lv_obj_add_flag(title, LV_OBJ_FLAG_CLICKABLE);
            lv_obj_add_event_cb(title, drag_event_cb, LV_EVENT_PRESSED, mbox);
            lv_obj_add_event_cb(title, drag_event_cb, LV_EVENT_PRESSING, mbox);
            lv_obj_set_size(mbox, 820, 450);
            lv_obj_t * content = lv_msgbox_get_content(mbox);
            if ( content == NULL )
                return;
            /* =========================
             * TABELLA dentro la msgbox
             * ========================= */
            lv_obj_t * tbl = lv_table_create(content);
            lv_obj_set_size(tbl, lv_pct(100), lv_pct(100));
            /* numero righe/colonne */
            lv_table_set_row_count(tbl, n_rows);
            lv_table_set_column_count(tbl, n_cols);
            for(j = 3; j < n_cols; j++)
            {
                lv_table_set_column_width(tbl, j, 70);
            }
            /* copia dati */
            for(i = 0; i < n_rows; i++)
            {
                for(j = 0; j < n_cols; j++)
                {
                    //const char * txt = lv_table_get_cell_value(table, i, j);
                    lv_table_set_cell_value(tbl, i, j, lv_table_get_cell_value(table, i, j));

                    /* header */
                    if(i == 0)
                    {
                        lv_table_set_cell_ctrl( tbl, i, j, LV_TABLE_CELL_CTRL_CUSTOM_1);
                    }
                    /* riga selezionata */
                    if(i == regs_row_sel)
                    {
                        lv_table_set_cell_ctrl( tbl, i, j, LV_TABLE_CELL_CTRL_CUSTOM_2);
                    }
                }
            }
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
            lv_obj_clear_flag(tbl, LV_OBJ_FLAG_SCROLL_CHAIN);
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_GESTURE_BUBBLE);
            lv_obj_add_flag(tbl, LV_OBJ_FLAG_EVENT_BUBBLE);
            lv_obj_add_event_cb(tbl, table_draw_event_cb, LV_EVENT_DRAW_TASK_ADDED, NULL);
            lv_obj_add_event_cb(tbl, msgbox_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
            // Aggiungi un pulsante di chiusura
            lv_msgbox_add_close_button(mbox);
        }
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
