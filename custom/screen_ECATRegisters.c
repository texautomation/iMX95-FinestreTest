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
#include <string.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/
#define ESC_REG_300_COUNT           20

/**********************
 *      TYPEDEFS
 **********************/


/**********************
 *  STATIC PROTOTYPES
 **********************/
static void align_col_table_draw_event_cb(lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/
static const lv_coord_t regs_tableSlave_col_w[] = {
    50,120,145,31,31,
    30,30,30,30,30,
    30,30,30,30,30,
    30,30,30,30,30,
    30,30,30
};

/**********************
 *  GLOBAL VARIABLES
 **********************/
volatile int regs_row_sel = 1;

extern void select_row_table_draw_event_cb(lv_event_t * e);

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
	
	for ( i = 0; i < ECAT_MAX_SLAVE_INDEX; i++ )   
	{
		for ( j = 0; j < ESC_REGISTERS_0x0110; j++ )
			ESC_shm->sharedMemoryRegister_0x110_to_0x111[i][j] = 0;
		for ( j = 0; j < ESC_REGISTERS_0x0300; j++ )
			ESC_shm->sharedMemoryRegister_0x300_to_0x313[i][j] = 0;
	}
	
	sem_post(ESC_sem);
}

void update_scrECATregs(void)
{
	char buffer[128];
    int SlaveIndex,iReg, rowSel;
  
	sem_wait(ESC_sem); 
	sem_wait(SLAVE_INFO_sem); 
	// 2. Aggiorna i dati della screen
	for ( SlaveIndex = 0; SlaveIndex < ECAT_NUM_SLAVES; SlaveIndex++ )
	{    
		int cnt;
		snprintf ( buffer, sizeof(buffer), "%d", SLAVE_INFO_shm->sharedMemorySlaveInformation[SlaveIndex].indexAddress ); 
		lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,0,buffer); 
		lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,1,(char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[SlaveIndex].vendorName); 
		lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,2,(char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[SlaveIndex].productName);               
		snprintf(buffer, sizeof(buffer), "%02x", ESC_shm->sharedMemoryRegister_0x110_to_0x111[SlaveIndex][0]);
		lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,3,buffer); 
		snprintf(buffer, sizeof(buffer), "%02x", ESC_shm->sharedMemoryRegister_0x110_to_0x111[SlaveIndex][1]);
		lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,4,buffer);
		cnt = 5;
		for ( iReg = 0; iReg < ESC_REG_300_COUNT; iReg++ )
		{
			if ( iReg != 0x0E  && iReg != 0x0F )
            {
				snprintf(buffer, sizeof(buffer), "%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[SlaveIndex][iReg]);
				lv_table_set_cell_value(guider_ui.scrECATregs_tableSlave,SlaveIndex+1,cnt++,buffer);
			}
		}
	}
	// slave selezionato 
	rowSel = regs_row_sel;
    if ( ( rowSel <= 0 ) || ( rowSel > ECAT_NUM_SLAVES ) )
	{
		sem_post(ESC_sem);
		sem_post(SLAVE_INFO_sem);
        return;
	}
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][0]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 1, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][1]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 2, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][2]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 3, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][3]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 4, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][4]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 5, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][5]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 6, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][6]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 7, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][7]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableRxError, 8, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][8]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableFwRxError, 1, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][9]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableFwRxError, 2, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][10]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableFwRxError, 3, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][11]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableFwRxError, 4, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][12]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tablePU, 1, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][13]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tablePDI, 1, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][16]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableLL, 1, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][17]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableLL, 2, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][18]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableLL, 3, 1, buffer);
	snprintf(buffer, sizeof(buffer), "0x%02x", ESC_shm->sharedMemoryRegister_0x300_to_0x313[rowSel-1][19]);
	lv_table_set_cell_value(guider_ui.scrECATregs_tableLL, 4, 1, buffer);           
	sem_post(ESC_sem);
	sem_post(SLAVE_INFO_sem);
}

void scrECATregs_init(void)
{
    int i, r, c;
    for(i = 0; i < sizeof(regs_tableSlave_col_w)/sizeof(regs_tableSlave_col_w[0]); i++) 
        lv_table_set_column_width(guider_ui.scrECATregs_tableSlave, i, regs_tableSlave_col_w[i]);
    lv_table_set_column_width(guider_ui.scrECATregs_tableRxError, 0, 350);
    lv_table_set_column_width(guider_ui.scrECATregs_tableRxError, 1, 100);

    lv_table_set_column_width(guider_ui.scrECATregs_tableFwRxError, 0, 365);
    lv_table_set_column_width(guider_ui.scrECATregs_tableFwRxError, 1, 100);

    lv_table_set_column_width(guider_ui.scrECATregs_tablePDI, 0, 365);
    lv_table_set_column_width(guider_ui.scrECATregs_tablePDI, 1, 100);

    lv_table_set_column_width(guider_ui.scrECATregs_tablePU, 0, 365);
    lv_table_set_column_width(guider_ui.scrECATregs_tablePU, 1, 100);

    lv_table_set_column_width(guider_ui.scrECATregs_tableLL, 0, 817);
    lv_table_set_column_width(guider_ui.scrECATregs_tableLL, 1, 100);
    //modifico lo stile dell' header delle tabelle
    set_style_row_0_table(guider_ui.scrECATregs_tableSlave);
    set_style_row_0_table(guider_ui.scrECATregs_tableRxError);
    set_style_row_0_table(guider_ui.scrECATregs_tableFwRxError);
    set_style_row_0_table(guider_ui.scrECATregs_tablePDI);
    set_style_row_0_table(guider_ui.scrECATregs_tablePU);
    set_style_row_0_table(guider_ui.scrECATregs_tableLL);
    // draw flags + callbacks (una sola volta!)
    // colore del testo nella riga selezionata
    lv_obj_add_flag(guider_ui.scrECATregs_tableSlave, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableSlave, select_row_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);
    // testo item allineato a destra nella colonna 1
    lv_obj_add_flag(guider_ui.scrECATregs_tableRxError, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableRxError, align_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tableFwRxError, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableFwRxError, align_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tablePU, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tablePU, align_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tablePDI, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tablePDI, align_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);

    lv_obj_add_flag(guider_ui.scrECATregs_tableLL, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATregs_tableLL, align_col_table_draw_event_cb,
                        LV_EVENT_DRAW_TASK_ADDED, NULL);
    // Applica il CLIP (crop) a tutte le celle
    for(r = 0; r < 14; r++) {
        for(c = 0; c < 23; c++) {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableSlave, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    for(r = 0; r < 9; r++) {
        for(c = 0; c < 2; c++) {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableRxError, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    for(r = 0; r < 5; r++) {
        for(c = 0; c < 2; c++) {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableFwRxError, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    for(r = 0; r < 2; r++) {
        for(c = 0; c < 2; c++) {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tablePDI, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tablePU, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
    for(r = 0; r < 5; r++) {
        for(c = 0; c < 2; c++) {
            lv_table_set_cell_ctrl(guider_ui.scrECATregs_tableLL, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
        }
    }
}

// Callback per gestire lo stile della cella dei registri ( testo
// allineato a sx e valore allineato a dx )
static void align_col_table_draw_event_cb(lv_event_t * e)
{
    lv_draw_task_t * draw_task = lv_event_get_draw_task(e);
    lv_draw_dsc_base_t * base_dsc = draw_task->draw_dsc;

    /* Verifica se stiamo disegnando le celle */
    if(base_dsc->part == LV_PART_ITEMS) {
        
        /* In v9: id1 = riga, id2 = colonna */
        uint32_t col = base_dsc->id2;

        /* Se è la riga 0 e il task è di tipo testo (label) */
        if(col == 1 && draw_task->type == LV_DRAW_TASK_TYPE_LABEL) {
            lv_draw_label_dsc_t * label_dsc = draw_task->draw_dsc;
            label_dsc->align = LV_TEXT_ALIGN_RIGHT;
        }
    }
}