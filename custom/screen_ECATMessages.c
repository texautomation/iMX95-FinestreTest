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
#define MAX_ERROR_TYPE				4

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
    if ( NETLOG_shm->logEventiEtherCAT[event].archivioEventi[numEvent].timeEvent > 0)
    {
        time_t t = (time_t)NETLOG_shm->logEventiEtherCAT[event].archivioEventi[numEvent].timeEvent;
        struct tm *tm_info = localtime(&t);
        sprintf(cBuffer, "%d) [%2d:%02d:%02d]-%s", numEvent+1,
    					tm_info->tm_hour,
    					tm_info->tm_min,
    					tm_info->tm_sec,
    					NETLOG_shm->logEventiEtherCAT[event].archivioEventi[numEvent].descEvent);
    }
    else
    	cBuffer[0] = '\0';
	sem_post(NETLOG_sem);
}

static void update_event_row(lv_obj_t * table, int errorType)
{
    char buffer[LEB_MAX_SIZE_EVENT];

    for ( int iLog = 0; iLog < LEB_MAX_EVENT; iLog++ )
    {
        LoggerGetEvent( iLog, buffer, errorType);
        if ( buffer[0] != '\0' )
        {
            lv_table_set_row_count(table, iLog);
            lv_table_set_cell_ctrl(table, iLog, 0, LV_TABLE_CELL_CTRL_TEXT_CROP);
            lv_table_set_cell_value( table,iLog,0, buffer ); 
		}
		else
			break;
	}
}

void update_scrECATmsgs(void)
{
	// 2. Aggiorna i dati della screen
	for ( int i = 0; i < MAX_ERROR_TYPE; i++ )
    {
        switch ( i )
        {
            case 0:
                update_event_row(guider_ui.scrECATmsgs_tableDebug, 0);
                break;
              
            case 1:
                update_event_row(guider_ui.scrECATmsgs_tableInfo, 1);
                break;
                            
            case 2:
                update_event_row(guider_ui.scrECATmsgs_tableWarning, 2);
                break;
               
            case 3:
                update_event_row(guider_ui.scrECATmsgs_tableError, 3);
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
}
