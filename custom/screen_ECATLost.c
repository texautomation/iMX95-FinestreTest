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
#include "screen_ECATLost.h"

/*********************
 *      DEFINES
 *********************/


/**********************
 *      TYPEDEFS
 **********************/


/**********************
 *  STATIC PROTOTYPES
 **********************/


/**********************
 *  STATIC VARIABLES
 **********************/
static const lv_coord_t lost_tableSlave_col_w[] = { 70,200,150,130,100,150,117};
static const lv_coord_t lost_tableLost_col_w[] = {  51,51,51,51,51,51,
                                                    51,51,51,51,51,51,
                                                    51,51,51,51,51,50};

/***************************************************/
static int slaveSTM[ECATSM_MAX_SLAVE_INDEX];
static int slaveState[ECATSM_MAX_SLAVE_INDEX];
static int slaveGoodWRC[ECATSM_MAX_SLAVE_INDEX];
static int slaveWRC[ECATSM_MAX_SLAVE_INDEX];
static int slaveStatusCode[ECATSM_MAX_SLAVE_INDEX];
static int slaveNodiPersi[100];
static int cntSlaveNodiPersi;
short slaveVerificaPerditaNodi = 0;
static short slaveNodeActive = 0;
/***************************************************/                                                    
/**********************
 *  GLOBAL VARIABLES
 **********************/


/**
 * Create a application
 */
void update_scrECATlost(void)
{
    char buffer[N_MAX_CHAR_TABLE];
    uint32_t row, col;
    // 2. Aggiorna i dati della screen
    //---------------------------------------------------------------------------------------------------
    // state capture        configured          active 
    //---------------------------------------------------------------------------------------------------
    sprintf( buffer, "%d", slaveVerificaPerditaNodi );
    lv_label_set_text ( guider_ui.scrECATlost_labelStateData1, buffer );
    sprintf( buffer, "%d", slaveNum );
    lv_label_set_text ( guider_ui.scrECATlost_labelStateData2, buffer );
    if ( slaveVerificaPerditaNodi == 3 || slaveVerificaPerditaNodi == 4 )
    {
        sprintf( buffer, "%d", slaveNodeActive );
        lv_label_set_text ( guider_ui.scrECATlost_labelStateData3, buffer );
    }
    else
	{
        buffer[0] = '\0';
        lv_label_set_text ( guider_ui.scrECATlost_labelStateData3, buffer );
    }
    //---------------------------------------------------------------------------------------------------
    // slave    product         WRC     active error WRC    STM     State       StatusCode
    //---------------------------------------------------------------------------------------------------
    uint32_t n_rows = lv_table_get_row_count(guider_ui.scrECATlost_tableSlave);
    uint32_t n_cols = lv_table_get_column_count(guider_ui.scrECATlost_tableSlave);
    sem_wait(SLAVE_INFO_sem);
    for	( row = 0; row < slaveNum; row++ )
    {
        snprintf ( buffer, sizeof(buffer), "%04d", SLAVE_INFO_shm->sharedMemorySlaveInformation[row].indexAddress ); 
        lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, 0, buffer );
        snprintf ( buffer, sizeof(buffer), "%s", (char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[row].productName);
        lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, 1, buffer );
        sprintf ( buffer, "%d", slaveWRC[row]);
        lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, 2, buffer );
        sprintf(buffer, "%d", slaveGoodWRC[row] );
        lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, 3, buffer );
        if ( slaveVerificaPerditaNodi == 3 || slaveVerificaPerditaNodi == 4 )
        {
            sprintf ( buffer, "%d", slaveSTM[row]); 
            lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, 4, buffer );
            sprintf ( buffer, "%d", slaveState[row]); 
            lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, 5, buffer );
            sprintf ( buffer, "%d", slaveStatusCode[row]);
            lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, 6, buffer );
        }
        else
        {
            for ( int j = 4; j < n_cols; j++ )
            {
                buffer[0] = '\0';
                lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, j, buffer );
            }
        }
    }
    sem_post(SLAVE_INFO_sem);
    //ripulisco le restanti righe 
    for ( ; row < n_rows; row++)
    {
        for ( int j = 0; j < n_cols; j++ )
        {
            buffer[0] = '\0';
            lv_table_set_cell_value ( guider_ui.scrECATlost_tableSlave, row, j, buffer );
        }
    }	
    //---------------------------------------------------------------------------------------------------
    // Lost
    //---------------------------------------------------------------------------------------------------
    n_rows = lv_table_get_row_count(guider_ui.scrECATlost_tableLost);
    n_cols = lv_table_get_column_count(guider_ui.scrECATlost_tableLost);
    if ( slaveVerificaPerditaNodi == 3 || slaveVerificaPerditaNodi == 4 )
	{
        uint32_t iNode;
        for ( row = 0; row < n_rows; row++ )
        { 
            if ( cntSlaveNodiPersi )
            {
                for ( col = 0; col < n_cols; col++ )
                {
                    iNode = row * n_cols + col;
                    if ( iNode < cntSlaveNodiPersi )
                    {
                        sprintf ( buffer, "%d", slaveNodiPersi[iNode] );
                        lv_table_set_cell_value ( guider_ui.scrECATlost_tableLost, row, col, buffer );
                    }
                    else
                    {
                        buffer[0] = '\0';
                        lv_table_set_cell_value ( guider_ui.scrECATlost_tableLost, row, col, buffer );
                    }
                }
            }
            else
            {
                // pulisco le restanti celle
                for ( col = 0; col < n_cols; col++ )
                {
                    buffer[0] = '\0'; 
                    lv_table_set_cell_value ( guider_ui.scrECATlost_tableLost, row, col, buffer );  
                }
            } 
        }
    }
    else
    {
        for ( row = 0; row < n_rows; row++ )
        {
            for ( col = 0; col < n_cols; col++ )
            {
                buffer[0] = '\0'; 
                lv_table_set_cell_value ( guider_ui.scrECATlost_tableLost, row, col, buffer );  

            }
        } 
    }
}

void scrECATlost_init(void)
{
    int r, c; 
    for(c = 0; c < sizeof(lost_tableSlave_col_w)/sizeof(lost_tableSlave_col_w[0]); c++)
        lv_table_set_column_width(guider_ui.scrECATlost_tableSlave, c, lost_tableSlave_col_w[c]);
    for(c = 0; c < sizeof(lost_tableLost_col_w)/sizeof(lost_tableLost_col_w[0]); c++)
        lv_table_set_column_width(guider_ui.scrECATlost_tableLost, c, lost_tableLost_col_w[c]);
    lv_table_set_column_count ( guider_ui.scrECATlost_tableLost, 18 );
    uint32_t n_rows = lv_table_get_row_count(guider_ui.scrECATlost_tableSlave);
    uint32_t n_cols = lv_table_get_column_count(guider_ui.scrECATlost_tableSlave);
    /* se il numero di righe della tabella non è sufficiente, ne aggiungo altre.
     * ATTENZIONE!!! Occorre essere sicuri che nella memoria condivisa i dati siano quelli validi.  
    */
    if ( slaveNum > ECATSM_MAX_SLAVE_INDEX ) 
        slaveNum = ECATSM_MAX_SLAVE_INDEX;
    if ( slaveNum > n_rows )
    {
        n_rows = slaveNum;
        lv_table_set_row_count ( guider_ui.scrECATlost_tableSlave, n_rows );
    }
    for ( r = 0; r < n_rows; r++ )
    {      
        for ( c = 0; c < n_cols; c++ )
            lv_table_set_cell_ctrl(guider_ui.scrECATlost_tableSlave, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
    n_rows = lv_table_get_row_count(guider_ui.scrECATlost_tableLost);
    n_cols = lv_table_get_column_count(guider_ui.scrECATlost_tableLost);
    for ( r = 0; r < n_rows; r++ )
    {      
        for ( c = 0; c < n_cols; c++ )
            lv_table_set_cell_ctrl(guider_ui.scrECATlost_tableLost, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
}

