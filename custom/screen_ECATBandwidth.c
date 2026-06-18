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
#include "lvgl.h"
#include "custom.h"
#include "screen_ECATBandwidth.h"

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
static const lv_coord_t band_table_col_w[] = { 217, 300, 200, 200 };

/**********************
 *  GLOBAL VARIABLES
 **********************/


/**
 * Create a application
 */
static long get_cyclicFrame_timeLife( int frame )
{
    #if 0
	extern CYCLIC_FRAME cyclicFrame;
	int index_tx, index_rx;
	if ( cyclicFrame.cnttimeLifeTx[frame] == 0 )
		index_tx = ECAT_MAX_LOG_ELEMENTS - 1;
	else
		index_tx = cyclicFrame.cnttimeLifeTx[frame] - 1;
	if ( cyclicFrame.cnttimeLifeRx[frame] == 0 )
		index_rx = ECAT_MAX_LOG_ELEMENTS - 1;
	else
		index_rx = cyclicFrame.cnttimeLifeRx[frame] - 1;

	return ( ( cyclicFrame.timeLifeTx[frame][index_tx] + cyclicFrame.timeLifeRx[frame][index_rx] ) / N_TICK_IN_USEC );
    #endif
}

static long get_cyclicFrame_timeLifeTx( int frame )
{
    #if 0
	extern CYCLIC_FRAME cyclicFrame;
	int index_tx, index_rx;
	if ( cyclicFrame.cnttimeLifeTx[frame] == 0 )
		index_tx = ECAT_MAX_LOG_ELEMENTS - 1;
	else
		index_tx = cyclicFrame.cnttimeLifeTx[frame] - 1;

	return ( cyclicFrame.timeLifeTx[frame][index_tx] / N_TICK_IN_USEC );
    #endif
}

static long get_cyclicFrame_timeLifeRx( int frame )
{
    #if 0
	extern CYCLIC_FRAME cyclicFrame;
	int index_tx, index_rx;
	if ( cyclicFrame.cnttimeLifeRx[frame] == 0 )
		index_rx = ECAT_MAX_LOG_ELEMENTS - 1;
	else
		index_rx = cyclicFrame.cnttimeLifeRx[frame] - 1;
    
	return ( cyclicFrame.timeLifeRx[frame][index_rx] / N_TICK_IN_USEC );
    #endif
}

static long getTimeSlice ( void )
{
    #if 0
	return mcf.timeSlice;
    #endif
}

void update_scrECATband(void)
{
    // 2. Aggiorna i dati della screen
    char buffer[N_MAX_CHAR_TABLE];
    // Aggiorno le bars
    #if 0
    if ( ECATMNGnetworkRun() )
    {
        int32_t min, max, valore;
        min = lv_bar_get_min_value(guider_ui.scrECATband_bar1);
        max = lv_bar_get_max_value(guider_ui.scrECATband_bar1);
        valore = ( maxTempoDurataEtherCAT * ( max - min ) ) / iCampionamento;
        lv_bar_set_value(guider_ui.scrECATband_bar1, valore, LV_ANIM_OFF);
        // frame 1
        min = lv_bar_get_min_value(guider_ui.scrECATband_bar2);
        max = lv_bar_get_max_value(guider_ui.scrECATband_bar2);
        valore = ( get_cyclicFrame_timeLife(0) * ( max - min ) ) / iCampionamento;
        lv_bar_set_value(guider_ui.scrECATband_bar2, valore, LV_ANIM_OFF);
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLife(0));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,1,1, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeTx(0));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,1,2, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeRx(0));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,1,3, buffer );
        sprintf ( buffer, "%10ld", cyclicFrame.counter[0] ); 
        lv_table_set_cell_value ( guider_ui.scrECATband_table,2,1, buffer );
        // frame 2
        min = lv_bar_get_min_value(guider_ui.scrECATband_bar3);
        max = lv_bar_get_max_value(guider_ui.scrECATband_bar3);
        valore = ( get_cyclicFrame_timeLife(1) * ( max - min ) ) / iCampionamento;
        lv_bar_set_value(guider_ui.scrECATband_bar3, valore, LV_ANIM_OFF);
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLife(1));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,3,1, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeTx(1));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,3,2, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeRx(1));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,3,3, buffer );
        sprintf ( buffer, "%10ld", cyclicFrame.counter[1] ); 
        lv_table_set_cell_value ( guider_ui.scrECATband_table,4,1, buffer );
        // frame 3
        min = lv_bar_get_min_value(guider_ui.scrECATband_bar4);
        max = lv_bar_get_max_value(guider_ui.scrECATband_bar4);
        valore = ( get_cyclicFrame_timeLife(2) * ( max - min ) ) / iCampionamento;
        lv_bar_set_value(guider_ui.scrECATband_bar4, valore, LV_ANIM_OFF);
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLife(2));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,5,1, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeTx(2));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,5,2, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeRx(2));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,5,3, buffer );
        sprintf ( buffer, "%10ld", cyclicFrame.counter[2] ); 
        lv_table_set_cell_value ( guider_ui.scrECATband_table,6,1, buffer );
        // frame 4
        min = lv_bar_get_min_value(guider_ui.scrECATband_bar5);
        max = lv_bar_get_max_value(guider_ui.scrECATband_bar5);
        valore = ( get_cyclicFrame_timeLife(3) * ( max - min ) ) / iCampionamento;
        lv_bar_set_value(guider_ui.scrECATband_bar5, valore, LV_ANIM_OFF);
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLife(3));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,7,1, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeTx(3));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,7,2, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeRx(3));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,7,3, buffer );
        sprintf ( buffer, "%10ld", cyclicFrame.counter[3] ); 
        lv_table_set_cell_value ( guider_ui.scrECATband_table,8,1, buffer );
        // frame 5
        min = lv_bar_get_min_value(guider_ui.scrECATband_bar6);
        max = lv_bar_get_max_value(guider_ui.scrECATband_bar6);
        valore = ( get_cyclicFrame_timeLife(4) * ( max - min ) ) / iCampionamento;
        lv_bar_set_value(guider_ui.scrECATband_bar6, valore, LV_ANIM_OFF);    
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLife(4));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,9,1, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeTx(4));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,9,2, buffer );
        sprintf ( buffer, "%4ld us", get_cyclicFrame_timeLifeRx(4));
        lv_table_set_cell_value ( guider_ui.scrECATband_table,9,3, buffer );
        sprintf ( buffer, "%10ld", cyclicFrame.counter[4] ); 
        lv_table_set_cell_value ( guider_ui.scrECATband_table,10,1, buffer );
        //time slice
        sprintf ( buffer, "%5ld us", getTimeSlice() ); 
        lv_table_set_cell_value ( guider_ui.scrECATband_table,11,1, buffer );
        //sync
        sprintf ( buffer, "%4d us", maxTempoSwapEtherCAT );
        lv_table_set_cell_value ( guider_ui.scrECATband_table,12,1, buffer );
        //ecat cycle
		sprintf ( buffer, "%4d us", maxTempoDurataEtherCAT );
        lv_table_set_cell_value ( guider_ui.scrECATband_table,13,1, buffer );
    }
    #endif
}

void scrECATband_init( void )
{
    // set column width
    for(int i = 0; i < sizeof(band_table_col_w)/sizeof(band_table_col_w[0]); i++) 
        lv_table_set_column_width(guider_ui.scrECATband_table, i, band_table_col_w[i]);
    //modifico lo stile dell' header delle tabelle
    set_style_title_table(guider_ui.scrECATband_table);
    // Applica il CLIP (crop) a tutte le celle
    uint32_t n_rows = lv_table_get_row_count(guider_ui.scrECATband_table);
    uint32_t n_cols = lv_table_get_column_count(guider_ui.scrECATband_table);
    for(int r = 0; r < n_rows; r++) 
    {
        for(int c = 0; c < n_cols; c++) 
            lv_table_set_cell_ctrl(guider_ui.scrECATband_table, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
}