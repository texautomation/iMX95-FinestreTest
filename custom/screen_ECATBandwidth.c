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


/**********************
 *  GLOBAL VARIABLES
 **********************/


/**
 * Create a application
 */
static long get_cyclicFrame_timeLife( int frame )
{
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
}

static long get_cyclicFrame_timeLifeTx( int frame )
{
	extern CYCLIC_FRAME cyclicFrame;
	int index_tx, index_rx;
	if ( cyclicFrame.cnttimeLifeTx[frame] == 0 )
		index_tx = ECAT_MAX_LOG_ELEMENTS - 1;
	else
		index_tx = cyclicFrame.cnttimeLifeTx[frame] - 1;

	return ( cyclicFrame.timeLifeTx[frame][index_tx] / N_TICK_IN_USEC );
}

static long get_cyclicFrame_timeLifeRx( int frame )
{
	extern CYCLIC_FRAME cyclicFrame;
	int index_tx, index_rx;
	if ( cyclicFrame.cnttimeLifeRx[frame] == 0 )
		index_rx = ECAT_MAX_LOG_ELEMENTS - 1;
	else
		index_rx = cyclicFrame.cnttimeLifeRx[frame] - 1;

	return ( cyclicFrame.timeLifeRx[frame][index_rx] / N_TICK_IN_USEC );
}

void update_scrECATband(void)
{
    // 2. Aggiorna i dati della screen
    #if 0
    // Aggiorno le bars
    if ( SLAVE_DATA_shm->sharedMemorySlaveData[SlaveIndex].state == ECAT_OP_STATE )
    {
        int32_t min, max, valore;
        min = lv_bar_get_min_value(guider_ui->scrECATband_bar1);
        max = lv_bar_get_max_value(guider_ui->scrECATband_bar1);
        valore = ( maxTempoDurataEtherCAT * ( max - min ) ) / pars.iCampionamento;
        lv_bar_set_value(guider_ui->scrECATband_bar1, valore, LV_ANIM_OFF);
        // frame 1
        min = lv_bar_get_min_value(guider_ui->scrECATband_bar2);
        max = lv_bar_get_max_value(guider_ui->scrECATband_bar2);
        valore = ( get_cyclicFrame_timeLife(0) * ( max - min ) ) / pars.iCampionamento;
        lv_bar_set_value(guider_ui->scrECATband_bar2, valore, LV_ANIM_OFF);
        // frame 2
        min = lv_bar_get_min_value(guider_ui->scrECATband_bar3);
        max = lv_bar_get_max_value(guider_ui->scrECATband_bar3);
        valore = ( get_cyclicFrame_timeLife(1) * ( max - min ) ) / pars.iCampionamento;
        lv_bar_set_value(guider_ui->scrECATband_bar3, valore, LV_ANIM_OFF);
        // frame 3
        min = lv_bar_get_min_value(guider_ui->scrECATband_bar4);
        max = lv_bar_get_max_value(guider_ui->scrECATband_bar4);
        valore = ( get_cyclicFrame_timeLife(2) * ( max - min ) ) / pars.iCampionamento;
        lv_bar_set_value(guider_ui->scrECATband_bar4, valore, LV_ANIM_OFF);
        // frame 4
        min = lv_bar_get_min_value(guider_ui->scrECATband_bar5);
        max = lv_bar_get_max_value(guider_ui->scrECATband_bar5);
        valore = ( get_cyclicFrame_timeLife(3) * ( max - min ) ) / pars.iCampionamento;
        lv_bar_set_value(guider_ui->scrECATband_bar5, valore, LV_ANIM_OFF);
        // frame 5
        min = lv_bar_get_min_value(guider_ui->scrECATband_bar6);
        max = lv_bar_get_max_value(guider_ui->scrECATband_bar6);
        valore = ( get_cyclicFrame_timeLife(4) * ( max - min ) ) / pars.iCampionamento;
        lv_bar_set_value(guider_ui->scrECATband_bar6, valore, LV_ANIM_OFF);    
    // Aggiorno la tabella
    
}
    #endif
}
