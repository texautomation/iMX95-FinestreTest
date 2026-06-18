/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lvgl.h"
#include "custom.h"
#include "screen_ECATRegisters.h"

/*********************
 *      DEFINES
 *********************/
#define ESC_REG_300_COUNT           20
#define N_COL_TABLE_SLAVE           23
#define N_ROW_TABLE_ESC_DL          3
#define N_ROW_TABLE_RX              9
#define N_ROW_TABLE_FW_RX           5
#define N_ROW_TABLE_LL              5

/**********************
 *      TYPEDEFS
 **********************/


/**********************
 *  STATIC PROTOTYPES
 **********************/
static void set_style_col_table_draw_event_cb(lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/
static const lv_coord_t regs_tableSlave_col_w[] = {
    50,120,144,32,31,
    30,30,30,30,30,
    30,30,30,30,30,
    30,30,30,30,30,
    30,30,30
};
static const char *regs_tableSlaveTitle[] = { "slave", "vendor", "product", "  10 ", "11  ", "00", "01",
                                                "02", "03", "04", "05", "06", "07", "08", "09", "0A", 
                                                "0B", "0C", "0D", "10", "11", "12", "13" };
/**********************
 *  GLOBAL VARIABLES
 **********************/
int regs_row_sel = 1;


/**
 * Create a application
 */
/* ============================================================
 *  RESET REGISTRI ESC
 * ============================================================ */
void ECAT_reset_ESC_registers ( void )
{
    int i, j;

    if (ESC_shm == NULL)
        return;
	
	sem_wait(ESC_sem);
	for ( i = 0; i < slaveNum; i++ )   
	{
		for ( j = 0; j < ESC_REGISTERS_0x0110; j++ )
			ESC_shm->sharedMemoryRegister_0x110_to_0x111[i][j] = 0;
		for ( j = 0; j < ESC_REGISTERS_0x0300; j++ )
			ESC_shm->sharedMemoryRegister_0x300_to_0x313[i][j] = 0;
	}
	
	sem_post(ESC_sem);
}
/* ============================================================
 *  AGGIORNA TUTTE LE TABELLE NELLA PAGINA
 * ============================================================ */
void update_scrECATregs(void)
{
	char buffer[N_MAX_CHAR_TABLE];
    int SlaveIndex,iReg, rowSel, r, cnt;
    uint32_t n_rows = lv_table_get_row_count(guider_ui.scrECATregs_tableSlave);
    uint32_t n_cols = lv_table_get_column_count(guider_ui.scrECATregs_tableSlave);

	sem_wait(ESC_sem); 
	sem_wait(SLAVE_INFO_sem); 
	// 2. Aggiorna i dati della screen 
    // slave selezionato di default: slave 1
    if (regs_row_sel < 1 ) 
        regs_row_sel = 1;
    else if ( regs_row_sel > slaveNum ) 
        regs_row_sel = slaveNum;  
	rowSel = regs_row_sel;           
    // tableSlave    
	for ( SlaveIndex = 0; SlaveIndex < slaveNum; SlaveIndex++ )
	{   
        int cnt = 0;
        snprintf ( buffer, sizeof(buffer), "%04d", SLAVE_INFO_shm->sharedMemorySlaveInformation[SlaveIndex].indexAddress ); 
        lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,cnt++,buffer); 
        lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,cnt++,(char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[SlaveIndex].vendorName); 
        lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,cnt++,(char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[SlaveIndex].productName);               
        snprintf(buffer, sizeof(buffer), "| %02x ", ESC_shm->sharedMemoryRegister_0x110_to_0x111[SlaveIndex][0]);
        lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,cnt++,buffer); 
        snprintf(buffer, sizeof(buffer), "%02x |", ESC_shm->sharedMemoryRegister_0x110_to_0x111[SlaveIndex][1]);
        lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,cnt++,buffer);
        for ( iReg = 0; iReg < ESC_REG_300_COUNT; iReg++ )
        {
            if ( iReg != 0x0E  && iReg != 0x0F )
            {
                snprintf(buffer, sizeof(buffer), "%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[SlaveIndex][iReg]);
                lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,cnt++,buffer);
            }
        }
	}	
    //ripulisco le restanti righe della tableslave, saltando l'intestazione
	for ( ; SlaveIndex < ( n_rows - 1 ); SlaveIndex++ )
	{
        for ( int j = 0; j < n_cols; j++ )
            lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave, SlaveIndex+1, j, "");
	}	
    cnt = 0;
    // ESC DL Status
    for(r = 1; r < N_ROW_TABLE_ESC_DL; r++) 
    {
        snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x110_to_0x111[rowSel-1][cnt++]);
        lv_table_set_cell_value(guider_ui.scrECATregs_tableEscDLStatus, r, 1, buffer);
    }
    cnt = 0;
    // Rx Error counter
    for(r = 1; r < N_ROW_TABLE_RX; r++) 
    {
        snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][cnt++]);
        lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, r, 1, buffer);
    }
    // Fw Rx Error counter
    for(r = 1; r < N_ROW_TABLE_FW_RX; r++) 
    {
        snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][cnt++]);
        lv_table_set_cell_value(guider_ui.scrECATregs_tableFwRxError, r, 1, buffer);
    }
    snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][cnt++]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tablePU, 1, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][cnt++]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tablePDI, 1, 1, buffer);
    cnt += 2;
    for(r = 1; r < N_ROW_TABLE_LL; r++) 
    {
        snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][cnt++]);
        lv_table_set_cell_value(guider_ui.scrECATregs_tableLL, r, 1, buffer);
    }   
	sem_post(ESC_sem);
	sem_post(SLAVE_INFO_sem);
}
/* ============================================================
 *  INIZIALIZZA LA PAGINA
 * ============================================================ */
void scrECATregs_init(void)
{
    int i, r, c;
    uint32_t n_rows = lv_table_get_row_count(guider_ui.scrECATregs_tableSlave); //inclusa l'intestazione
    regs_row_sel = 1;
    /* se il numero di righe della tabella non è sufficiente, ne aggiungo altre.
     * ATTENZIONE!!! Occorre essere sicuri che nella memoria condivisa i dati siano quelli validi.  
    */
    if ( slaveNum > ECATSM_MAX_SLAVE_INDEX ) 
        slaveNum = ECATSM_MAX_SLAVE_INDEX;
    if ( slaveNum + 1 > n_rows )
    {
        n_rows = slaveNum + 1;
        lv_table_set_row_count ( guider_ui.scrECATregs_tableSlave, n_rows );
    }
    lv_table_set_column_count ( guider_ui.scrECATregs_tableSlave, N_COL_TABLE_SLAVE );
    for(i = 0; i < sizeof(regs_tableSlave_col_w)/sizeof(regs_tableSlave_col_w[0]); i++) 
    {
        lv_table_set_column_width(guider_ui.scrECATregs_tableSlave, i, regs_tableSlave_col_w[i]);
        lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave, 0, i, regs_tableSlaveTitle[i]);
    }
    lv_table_set_column_width(guider_ui.scrECATregs_tableEscDLStatus, 0, 867);
    lv_table_set_column_width(guider_ui.scrECATregs_tableEscDLStatus, 1, 50);
    lv_table_set_column_width(guider_ui.scrECATregs_tableRxError, 0, 400);
    lv_table_set_column_width(guider_ui.scrECATregs_tableRxError, 1, 50);

    lv_table_set_column_width(guider_ui.scrECATregs_tableFwRxError, 0, 415);
    lv_table_set_column_width(guider_ui.scrECATregs_tableFwRxError, 1, 50);

    lv_table_set_column_width(guider_ui.scrECATregs_tablePDI, 0, 415);
    lv_table_set_column_width(guider_ui.scrECATregs_tablePDI, 1, 50);

    lv_table_set_column_width(guider_ui.scrECATregs_tablePU, 0, 415);
    lv_table_set_column_width(guider_ui.scrECATregs_tablePU, 1, 50);

    lv_table_set_column_width(guider_ui.scrECATregs_tableLL, 0, 867);
    lv_table_set_column_width(guider_ui.scrECATregs_tableLL, 1, 50);
    //modifico lo stile dell' header delle tabelle
    set_style_title_table(guider_ui.scrECATregs_tableSlave);
    set_style_title_table(guider_ui.scrECATregs_tableEscDLStatus);
    set_style_title_table(guider_ui.scrECATregs_tableRxError);
    set_style_title_table(guider_ui.scrECATregs_tableFwRxError);
    set_style_title_table(guider_ui.scrECATregs_tablePDI);
    set_style_title_table(guider_ui.scrECATregs_tablePU);
    set_style_title_table(guider_ui.scrECATregs_tableLL);
    // draw flags + callbacks (una sola volta!)
    // colore del testo nella riga selezionata
    lv_obj_add_flag(guider_ui.scrECATregs_tableSlave, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableSlave, select_row_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);
    // testo item allineato a destra nella colonna 1
    lv_obj_add_flag(guider_ui.scrECATregs_tableEscDLStatus, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableEscDLStatus, set_style_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);
    lv_obj_add_flag(guider_ui.scrECATregs_tableRxError, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableRxError, set_style_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tableFwRxError, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableFwRxError, set_style_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tablePU, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tablePU, set_style_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tablePDI, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tablePDI, set_style_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tableLL, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableLL, set_style_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);
    // Applica il CLIP (crop) a tutte le celle
    uint32_t n_cols = lv_table_get_column_count(guider_ui.scrECATregs_tableSlave);
    for(r = 0; r < n_rows; r++) 
    {
        for(c = 0; c < n_cols; c++) 
        {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableSlave, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    n_rows = lv_table_get_row_count(guider_ui.scrECATregs_tableEscDLStatus);
    n_cols = lv_table_get_column_count(guider_ui.scrECATregs_tableEscDLStatus);
	for(r = 0; r < n_rows; r++) 
    {
        for(c = 0; c < n_cols; c++) 
        {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableEscDLStatus, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    n_rows = lv_table_get_row_count(guider_ui.scrECATregs_tableRxError);
    n_cols = lv_table_get_column_count(guider_ui.scrECATregs_tableRxError);
    for(r = 0; r < n_rows; r++) 
    {
        for(c = 0; c < n_cols; c++) 
        {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableRxError, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    n_rows = lv_table_get_row_count(guider_ui.scrECATregs_tableFwRxError);
    n_cols = lv_table_get_column_count(guider_ui.scrECATregs_tableFwRxError);
    for(r = 0; r < n_rows; r++) 
    {
        for(c = 0; c < n_cols; c++) 
        {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableFwRxError, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    n_rows = lv_table_get_row_count(guider_ui.scrECATregs_tablePDI);
    n_cols = lv_table_get_column_count(guider_ui.scrECATregs_tablePDI);
    for(r = 0; r < n_rows; r++) 
    {
        for(c = 0; c < n_cols; c++) 
        {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tablePDI, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tablePU, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    n_rows = lv_table_get_row_count(guider_ui.scrECATregs_tableLL);
    n_cols = lv_table_get_column_count(guider_ui.scrECATregs_tableLL);
    for(r = 0; r < n_rows; r++) 
    {
        for(c = 0; c < n_cols; c++) 
        {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableLL, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
}
/* ============================================================
 *  Callback per gestire lo stile della cella dei registri ( testo
 *  allineato a sx e valore allineato a dx )
 * ============================================================ */
static void set_style_col_table_draw_event_cb(lv_event_t * e)
{
    lv_draw_task_t * draw_task = lv_event_get_draw_task(e);
    lv_draw_dsc_base_t * base_dsc = draw_task->draw_dsc;
    lv_obj_t * table = lv_event_get_target(e);

    /* Verifica se stiamo disegnando le celle */
    if(base_dsc->part == LV_PART_ITEMS)
    {
        
        /* In v9: id1 = riga, id2 = colonna */
        uint32_t col = base_dsc->id2;
        uint32_t row = base_dsc->id1;

        /* Recupera informazioni sulla cella attualmente disegnata */
        const char * txt = lv_table_get_cell_value(table, row, col);
        int value = atoi(txt);

        /* Se è la colonna 1 e il task è di tipo testo (label) */
        if(col == 1 &&  row != 0 && draw_task->type == LV_DRAW_TASK_TYPE_LABEL) 
        {
            lv_draw_label_dsc_t * label_dsc = draw_task->draw_dsc;
            label_dsc->align = LV_TEXT_ALIGN_CENTER;
            if(value != 0) 
                label_dsc->color = lv_color_hex(0xFFFFFF);
            else
                label_dsc->color = lv_color_hex(0x000000);
        }
        else if(col == 1 && row != 0 && draw_task->type == LV_DRAW_TASK_TYPE_FILL)
        { 
            lv_draw_fill_dsc_t * fill_dsc = draw_task->draw_dsc;
            if(value != 0) 
                fill_dsc->color = lv_palette_main(LV_PALETTE_RED);
            else
                fill_dsc->color = lv_color_hex(0xb0b0b0);
        }
    }
}