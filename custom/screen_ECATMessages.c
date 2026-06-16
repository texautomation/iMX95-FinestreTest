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
#include <time.h>

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
static void LoggerGetEvent ( int numEvent, char *cBuffer, int event )
{
	sem_wait(NETLOG_sem);
    sprintf(cBuffer, "%d) ", numEvent+1);
    if ( NETLOG_shm->logEventiEtherCAT[event].archivioEventi[numEvent].timeEvent > 0)
    {
        time_t t = (time_t)NETLOG_shm->logEventiEtherCAT[event].archivioEventi[numEvent].timeEvent;
        struct tm *tm_info = localtime(&t);
        sprintf(cBuffer+strlen(cBuffer), "[%2d:%02d:%02d]-%s",
    					tm_info->tm_hour,
    					tm_info->tm_min,
    					tm_info->tm_sec,
    					NETLOG_shm->logEventiEtherCAT[event].archivioEventi[numEvent].descEvent);
    }
    else
    	cBuffer[strlen(cBuffer)] = '\0';
	sem_post(NETLOG_sem);
}

static void update_event_row(lv_obj_t * table, int errorType)
{
    char buffer[LEB_MAX_SIZE_EVENT];

    for ( int iLog = 0; iLog < LEB_MAX_EVENT; iLog++ )
    {
        LoggerGetEvent( iLog, buffer, errorType);
        lv_table_set_cell_value( table,iLog,0, buffer ); 
	}
}

void update_scrECATmsgs(void)
{
    char buffer[N_MAX_CHAR_TABLE];
	// 2. Aggiorna i dati della screen
    //------------------------------------------------------------------------------------------------
    // network name      destination       source           type   
    //------------------------------------------------------------------------------------------------
    #if 0
    sprintf ( buffer, "%-31s", mstCnfg->xml.master.name ); 
    lv_label_set_text( ( guider_ui.scrECATmsgs_labelNetworkData1, buffer );
    sprintf ( buffer, "%02x-%02x-%02x-%02x-%02x-%02x", mstCnfg->xml.master.destination[0], mstCnfg->xml.master.destination[1],
			 mstCnfg->xml.master.destination[2], mstCnfg->xml.master.destination[3], mstCnfg->xml.master.destination[4], mstCnfg->xml.master.destination[5] ); 
    lv_label_set_text( ( guider_ui.scrECATmsgs_labelNetworkData2, buffer );
    sprintf ( buffer, "%02x-%02x-%02x-%02x-%02x-%02x", mstCnfg->xml.master.source[0], mstCnfg->xml.master.source[1],
			 mstCnfg->xml.master.source[2], mstCnfg->xml.master.source[3], mstCnfg->xml.master.source[4], mstCnfg->xml.master.source[5] ); 
    lv_label_set_text( ( guider_ui.scrECATmsgs_labelNetworkData3, buffer );
    sprintf ( buffer, "0x%04x",  mstCnfg->xml.master.etherType ); 
    lv_label_set_text( ( guider_ui.scrECATmsgs_labelNetworkData4, buffer );
    /------------------------------------------------------------------------------------------------
	// config   active      frame wrong     noECAT      lost        cable       sync        ecat cycle
	//------------------------------------------------------------------------------------------------
    sprintf ( buffer, "%3d/%3d", mstCnfg->slaveNum, *mstCnfg->activeSlaveNumPt ); 
    lv_label_set_text( guider_ui.scrECATmsgs_labelConfigData1, buffer );
    sprintf ( buffer, "%5d/%5d/%5d", mstCnfg->xml.frameWrongSource, mstCnfg->xml.frameNotECAT, mstCnfg->xml.cyclicFrameDontReceive ); 
    lv_label_set_text( guider_ui.scrECATmsgs_labelConfigData2, buffer );
    sprintf ( buffer, "%13s", link==1?"connected":(link==-1?"non init":link==-2?"not ready":"not connected" ); 
    lv_label_set_text( guider_ui.scrECATmsgs_labelConfigData3, buffer );
    sprintf ( buffer, "%4ld \265S", maxTempoSwapEtherCAT ); 
    lv_label_set_text( guider_ui.scrECATmsgs_labelConfigData4, buffer );
    sprintf ( buffer, "%4ld \265S", maxTempoDurataEtherCAT ); 
    lv_label_set_text( guider_ui.scrECATmsgs_labelConfigData5, buffer );
    #endif
    //------------------------------------------------------------------------------------------------
    //
    //------------------------------------------------------------------------------------------------
	for ( int logType = 0; logType < LOGEVENTIECAT; logType++ )
    {
        switch ( logType )
        {
            case 0:
                update_event_row(guider_ui.scrECATmsgs_tableDebug, logType);
                break;
              
            case 1:
                update_event_row(guider_ui.scrECATmsgs_tableInfo, logType);
                break;
                            
            case 2:
                update_event_row(guider_ui.scrECATmsgs_tableWarning, logType);
                break;
               
            case 3:
                update_event_row(guider_ui.scrECATmsgs_tableError, logType);
                break;

            case 4:

                break;

			default:
				break;
           
        }
    }
}

void scrECATmsgs_init(void)
{
    lv_table_set_column_width(guider_ui.scrECATmsgs_tableDebug, 0, 917);
    lv_table_set_column_width(guider_ui.scrECATmsgs_tableInfo, 0, 917);
    lv_table_set_column_width(guider_ui.scrECATmsgs_tableWarning, 0, 917);
    lv_table_set_column_width(guider_ui.scrECATmsgs_tableError, 0, 917);
    lv_table_set_row_count(guider_ui.scrECATmsgs_tableDebug, LEB_MAX_EVENT);
    lv_table_set_row_count(guider_ui.scrECATmsgs_tableInfo, LEB_MAX_EVENT);
    lv_table_set_row_count(guider_ui.scrECATmsgs_tableWarning, LEB_MAX_EVENT);
    lv_table_set_row_count(guider_ui.scrECATmsgs_tableError, LEB_MAX_EVENT);
    for ( int r = 0; r < LEB_MAX_EVENT; r++ )
    {      
        lv_table_set_cell_ctrl(guider_ui.scrECATmsgs_tableDebug, r, 0, LV_TABLE_CELL_CTRL_TEXT_CROP);
        lv_table_set_cell_ctrl(guider_ui.scrECATmsgs_tableInfo, r, 0, LV_TABLE_CELL_CTRL_TEXT_CROP);
        lv_table_set_cell_ctrl(guider_ui.scrECATmsgs_tableWarning, r, 0, LV_TABLE_CELL_CTRL_TEXT_CROP);
        lv_table_set_cell_ctrl(guider_ui.scrECATmsgs_tableError, r, 0, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
}
