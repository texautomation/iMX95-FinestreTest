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
#include <time.h>
#include "lvgl.h"
#include "custom.h"


/*********************
 *      DEFINES
 *********************/
#ifndef ETHERCAT_MAX_ROW_SLAVE
    #define ETHERCAT_MAX_ROW_SLAVE          9
#endif


/**********************
 *      TYPEDEFS
 **********************/


/**********************
 *  STATIC PROTOTYPES
 **********************/
static void title_table_draw_event_cb(lv_event_t * e);


/**********************
 *  STATIC VARIABLES
 **********************/
static lv_point_t drag_start;
static lv_point_t obj_start;
 
static const lv_coord_t net_tableNetwork_col_w[] = {300, 200, 200, 217};
static const lv_coord_t net_tableConfig_col_w[] = {120,110,110,110,110,110,120,127};
static const lv_coord_t net_tableSlave_col_w[] = {70,135,160,115};
static const lv_coord_t net_tableInOut_col_w[] = {330,40,110};
static const lv_coord_t net_tableEmcy_col_w[] = {110,127,33,33,33,33,33,33};
static const lv_coord_t net_tableInfoDC_col_w[] = {130,305};

static const char* const NodeStatus[]   =  {"SEARCH",             "INIT",               "PRE-OP",             "BOOT",
									 "SAFE",               "",                   "",                   "",
									 "OP" };
static const char undefStatus[] 	    =    "undef";

static const char* const NodeSTM[]      =  {"force init",         "autoinc stat",       "ReqNodePrg",         "check state",
                                     "goto init",          "goto pre-op",        "goto boot",          "goto safe-op",
                                     "goto op",	           "check cmd",          "retry",              "ready",
                                     "read sdo",           "write sdo",          "read ssc",           "write ssc",
                                     "polling MBX",        "read memory",        "write memory",       "missing",
                                     "read st.code",       "error ack",          "EoE",                "write file",
                                     "read file",          "fatal" };

/**********************
 *  GLOBAL VARIABLES
 **********************/
volatile int net_row_sel = 1; 
int net_row_sel_prev = 1;

void select_row_table_draw_event_cb(lv_event_t * e);

/**
 * Create a application
 */
static const char *get_node_status(int state)
{
    if (state < 0 || state > ECAT_OP_STATE)
        return "";

    size_t count = sizeof(NodeStatus) / sizeof(NodeStatus[0]);
    return (state < count) ? NodeStatus[state] : undefStatus;
}
 
void update_scrECATnet(void)
{
	char buffer[128];
	int SlaveIndex, subIndex, row, rowSel;
    uint32_t n_rows, n_cols;
    int n_input, n_output;

    // Aggiorna i dati della screen
	sem_wait(SLAVE_INFO_sem);
    sem_wait(SLAVE_DATA_sem);
    // slave selezionato di default: slave 1
    if ( net_row_sel < 1 ) 
        net_row_sel = 1;
    else if ( net_row_sel > slaveNum ) 
        net_row_sel = slaveNum;    
	rowSel = net_row_sel;    
    n_rows = lv_table_get_row_count(guider_ui.scrECATnet_tableSlave);
    n_cols = lv_table_get_column_count(guider_ui.scrECATnet_tableSlave);
	//--------------------------------------------------------------------------------------------------
	// slave data
	//--------------------------------------------------------------------------------------------------
	for	( SlaveIndex = 0; SlaveIndex < slaveNum; SlaveIndex++ )
	{
		ECATFRK_SLAVE_DATA *slave = &(SLAVE_DATA_shm->sharedMemorySlaveData[SlaveIndex]);
		ECATFRK_SLAVE_INFORMATION *info = &(SLAVE_INFO_shm->sharedMemorySlaveInformation[SlaveIndex]);
		int time = slave->timeout_uS / 1000;
		//----------------------------------------------------------------------------------------------
		// column 0 -> address
		//----------------------------------------------------------------------------------------------
		snprintf(buffer,
				 sizeof(buffer),
				 "%4d",
				 info->indexAddress);

		lv_table_set_cell_value ( guider_ui.scrECATnet_tableSlave,SlaveIndex+1,0, buffer );
		//----------------------------------------------------------------------------------------------
		// column 1 -> transition
		//----------------------------------------------------------------------------------------------
		snprintf(buffer,
				 sizeof(buffer),
				 "%6s-%-6s",
				 get_node_status(slave->state),
				 get_node_status(slave->targetState));

			lv_table_set_cell_value ( guider_ui.scrECATnet_tableSlave,SlaveIndex+1,1, buffer ); 		
		//----------------------------------------------------------------------------------------------
		// column 2 -> state
		//----------------------------------------------------------------------------------------------
		snprintf(buffer,
				 sizeof(buffer),
                 "%s",       //"%12s",
				 (slave->stm >= 0) ? 
					 (slave->stm < (sizeof(NodeSTM) / sizeof(NodeSTM[0])) ? NodeSTM[slave->stm] : undefStatus) :
					 "");

		lv_table_set_cell_value ( guider_ui.scrECATnet_tableSlave,SlaveIndex+1,2, buffer );	
		//----------------------------------------------------------------------------------------------
		// column 3 -> retries - timeout
		//----------------------------------------------------------------------------------------------
		if ( SLAVE_DATA_shm->sharedMemorySlaveData[SlaveIndex].state==ECAT_OP_STATE )
			lv_table_set_cell_value ( guider_ui.scrECATnet_tableSlave,SlaveIndex+1,3, "" );
		else
		{
			snprintf ( buffer, sizeof(buffer), "%1d-%5d", slave->retries, time ); 
			lv_table_set_cell_value ( guider_ui.scrECATnet_tableSlave,SlaveIndex+1,3, buffer );
		}	
	}
    //ripulisco le restanti righe della tableslave, saltando l'intestazione
	for ( ; SlaveIndex < (n_rows - 1); SlaveIndex++ )
	{
        for ( int j = 0; j < n_cols; j++ )
            lv_table_set_cell_value(guider_ui.scrECATnet_tableSlave, SlaveIndex+1, j, "");
	}	
    //------------------------------------------------------------------------------------------------
	// input data
	//------------------------------------------------------------------------------------------------   
    n_rows = lv_table_get_row_count(guider_ui.scrECATnet_tableInput);
    n_cols = lv_table_get_column_count(guider_ui.scrECATnet_tableInput);
	for ( row = 0; row < SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].inputVarNum; row++ )
	{
		ECATFRK_SLAVE_VARIABLE *varIn = &(SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].varInput[row]);
    	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInput,row,0,(char *)varIn->name );
		snprintf ( buffer, sizeof(buffer), "%2d", varIn->size ); 
		lv_table_set_cell_value ( guider_ui.scrECATnet_tableInput,row,1, buffer );
		lv_table_set_cell_value ( guider_ui.scrECATnet_tableInput,row,2,(char *)varIn->value );
    }	
    // pulisco quelle in eccesso
    for ( ; row < n_rows; row++ )
    {
        for ( int j = 0; j < n_cols; j++ )
            lv_table_set_cell_value(guider_ui.scrECATnet_tableInput, row, j, "");
    }	
    // Se è stato selezionato uno slave diverso, riporto lo scroll all'inizio della tabella
    if ( net_row_sel_prev != net_row_sel )
    {
        lv_obj_update_layout(guider_ui.scrECATnet_contInput);
        lv_obj_update_layout(guider_ui.scrECATnet_tableInput);
        lv_obj_scroll_to_y(guider_ui.scrECATnet_contInput, 0, LV_ANIM_OFF);
        lv_obj_scroll_to_y(guider_ui.scrECATnet_tableInput, 0, LV_ANIM_OFF); 
    }
    //------------------------------------------------------------------------------------------------
	// output data
	//------------------------------------------------------------------------------------------------
    n_rows = lv_table_get_row_count(guider_ui.scrECATnet_tableOutput);
    n_cols = lv_table_get_column_count(guider_ui.scrECATnet_tableOutput);
	for ( row = 0; row < SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].outputVarNum; row++ )
	{
		ECATFRK_SLAVE_VARIABLE *varOut = &(SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].varOutput[row]);
    	lv_table_set_cell_value(guider_ui.scrECATnet_tableOutput,row,0,(char*)varOut->name);
    	snprintf ( buffer, sizeof(buffer), "%2d", varOut->size ); 
		lv_table_set_cell_value ( guider_ui.scrECATnet_tableOutput,row,1, buffer );
		lv_table_set_cell_value ( guider_ui.scrECATnet_tableOutput,row,2,(char*)varOut->value ); 
    }	
    // pulisco quelle in eccesso
    for ( ; row < n_rows; row++ )
    {
        for ( int j = 0; j < n_cols; j++ )
            lv_table_set_cell_value(guider_ui.scrECATnet_tableOutput, row, j, "");
    }	
    // Se è stato selezionato uno slave diverso, riporto lo scroll all'inizio della tabella
    if ( net_row_sel_prev != net_row_sel )
    {
        net_row_sel_prev = net_row_sel;
        lv_obj_update_layout(guider_ui.scrECATnet_contOutput);
        lv_obj_update_layout(guider_ui.scrECATnet_tableOutput);
        lv_obj_scroll_to_y(guider_ui.scrECATnet_contOutput, 0, LV_ANIM_OFF);
        lv_obj_scroll_to_y(guider_ui.scrECATnet_tableOutput, 0, LV_ANIM_OFF); 
    }
    //------------------------------------------------------------------------------------------------
	// errors & emergency
	//------------------------------------------------------------------------------------------------
    for ( row = 1; row <= ETHERCAT_MAX_ROW_SLAVE; row++ )
	{
		switch ( row )
		{   
            #if 0
            //------------------------------------------------------------------------------------------
            // AL status code
            //------------------------------------------------------------------------------------------
			case 1:
				snprintf ( buffer, sizeof(buffer), "cd.err: 0x%04x   %8s", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].statusCode,
				        SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].statusCode?SLAVE_DATA_shm->sharedMemorySlave[rowSel-1].statusCodeTimeEvent:"        " );
				lv_table_set_cell_value( guider_ui.scrECATnet_tableAL,row,0, buffer );
                break;
            //------------------------------------------------------------------------------------------
            // AL description
            //------------------------------------------------------------------------------------------
			case 2:
				if ( SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].statusCode )
				{
					const char *pntStatusCode=ECATMNfindStatusCode(SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].statusCode);
					if ( pntStatusCode != NULL )
						strcpy ( buffer, pntStatusCode );
					else
						strcpy ( buffer, "error not found" );
				}
				else
					buffer[0] = '\0';
                lv_table_set_cell_value( guider_ui.scrECATnet_tableAL,row,0, buffer );
				break;
            #endif
            //------------------------------------------------------------------------------------------
            // EMCY queue
            //------------------------------------------------------------------------------------------
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				if ( SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].timeEvent )
				{
				    time_t t = (time_t)SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].timeEvent;
					struct tm *emcyTime = localtime(&t);
                    snprintf ( buffer, sizeof(buffer), "0x%04x", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].errorCode );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,0, buffer ); 
                    snprintf ( buffer, sizeof(buffer), "%02d:%02d:%02d", emcyTime->tm_hour,emcyTime->tm_min,emcyTime->tm_sec );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,1, buffer ); 
                    snprintf ( buffer, sizeof(buffer), "%02x", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].errorReg ); 
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,2, buffer ); 
                    snprintf ( buffer, sizeof(buffer), "%02x", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].data[0] );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,3, buffer ); 
                    snprintf ( buffer, sizeof(buffer), "%02x", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].data[1] );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,4, buffer ); 
                    snprintf ( buffer, sizeof(buffer), "%02x", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].data[2] );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,5, buffer ); 
                    snprintf ( buffer, sizeof(buffer), "%02x", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].data[3] );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,6, buffer ); 
                    snprintf ( buffer, sizeof(buffer), "%02x", SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].emcyQueue[row-4].data[4] );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,7, buffer );    
				}
				else if ( row == 4 )
                {
					strcpy ( buffer, "no emergency" );
                    lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,0, buffer );
                    for ( int j = 1; j < 8; j++ )
                        lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,j, "" );
                }
				else
                {
					buffer[0] = '\0';
                    for ( int j = 0; j < 8; j++ )
                        lv_table_set_cell_value( guider_ui.scrECATnet_tableEmcy,(row-4)+1,j, buffer );
                }
				break;
		}
    }
    //------------------------------------------------------------------------------------------------
	// information
	//------------------------------------------------------------------------------------------------
    //lv_table_set_cell_value( guider_ui.scrECATnet_tableInfo,1,0,(char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].name);
    snprintf ( buffer, sizeof(buffer), "%d", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].vendorId ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,2,1, buffer );
    snprintf ( buffer, sizeof(buffer), "%d", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].serialNumber ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,3,1, buffer );
    snprintf ( buffer, sizeof(buffer), "%d", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].productCode ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,4,1, buffer );
    snprintf ( buffer, sizeof(buffer), "%d", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].revisionNumber ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,5,1, buffer );
    snprintf ( buffer, sizeof(buffer), "%d", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].dc ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,6,1, buffer );
    snprintf ( buffer, sizeof(buffer), "%d", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].dcSync0 ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,7,1, buffer );
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,8,1, (char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].EoEaddrString );
    //lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,9,1, (char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].GatewayString );
    //------------------------------------------------------------------------------------------------
	// distribuited clock
	//------------------------------------------------------------------------------------------------
	#if 0
    if ( SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Active )
		snprintf ( buffer, sizeof(buffer), "manage: sync0   %s", mstCnfg->syncMaster.sync0Synchronized?"hooked ":"      " );
	else
		strcpy ( buffer, "manage: no sync         " );
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,1,1, buffer );    
	if ( SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Synchronized )
		snprintf ( buffer, sizeof(buffer), "jitter: %4d nS (0x%02x)", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].deriva, SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Allarm );
	else
		snprintf ( buffer, sizeof(buffer), "jitter:not hooked (0x%02x)", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Allarm );
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,2,1, buffer );
	snprintf ( buffer, sizeof(buffer), "ticks : %3d  (lost:%4d)", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].ticks,SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0LostNextSync );
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,3,1, buffer ); 
	snprintf ( buffer, sizeof(buffer), "Master: 0x%08x", (mstCnfg->systemTimeLen==4)?(EC_GET32(*mstCnfg->txSystemTime32bitPt)):
										 (mstCnfg->systemTimeLen==8)?(long)(EC_GET64(*mstCnfg->txSystemTime64bitPt)):0);
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,4,1, buffer ); 
	snprintf ( buffer, sizeof(buffer), "Netwrk: 0x%08x", (mstCnfg->systemTimeLen==4)?(EC_GET32(*mstCnfg->rxSystemTime32bitPt)):
										 (mstCnfg->systemTimeLen==8)?(long)(EC_GET64(*mstCnfg->rxSystemTime64bitPt)):0);
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,5,1, buffer ); 
    #endif
	sem_post(SLAVE_INFO_sem);
    sem_post(SLAVE_DATA_sem);
}

// definisco lo stile per il titolo delle tabelle
void set_style_row_0_table(lv_obj_t *table)
{
    uint16_t col_cnt = lv_table_get_col_cnt(table);
    /* segno la riga 0 come header (custom flag) */
    for(uint16_t col = 0; col < col_cnt; col++) 
    {
        lv_table_set_cell_ctrl(table, 0, col, LV_TABLE_CELL_CTRL_CUSTOM_1);
    }
    lv_obj_add_flag(table, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(table, title_table_draw_event_cb, LV_EVENT_DRAW_TASK_ADDED, NULL);
  
}

void scrECATnet_init(void)
{
    int i, r, c, slaveIndex;
    uint32_t n_rows = lv_table_get_row_count(guider_ui.scrECATnet_tableSlave);
    net_row_sel = 1;
    net_row_sel_prev = 1;
    /* se il numero di righe della tabella non è sufficiente, ne aggiungo altre.
     * ATTENZIONE!!! Occorre essere sicuri che nella memoria condivisa i dati siano quelli validi.  
    */
    if ( slaveNum > ECATSM_MAX_SLAVE_INDEX ) 
        slaveNum = ECATSM_MAX_SLAVE_INDEX;
    if ( slaveNum + 1 > n_rows )
    {
        n_rows = slaveNum + 1;
        lv_table_set_row_count ( guider_ui.scrECATnet_tableSlave, n_rows );
    }
    lv_table_set_row_count ( guider_ui.scrECATnet_tableInput, ECATFK_MAX_INPUT_VAR );
    lv_table_set_row_count ( guider_ui.scrECATnet_tableOutput, ECATFK_MAX_OUTPUT_VAR );
    // set column width
    for(i = 0; i < sizeof(net_tableNetwork_col_w)/sizeof(net_tableNetwork_col_w[0]); i++) 
        lv_table_set_column_width(guider_ui.scrECATnet_tableNetwork, i, net_tableNetwork_col_w[i]);
    for(i = 0; i < sizeof(net_tableConfig_col_w)/sizeof(net_tableConfig_col_w[0]); i++) 
        lv_table_set_column_width(guider_ui.scrECATnet_tableConfig, i, net_tableConfig_col_w[i]);
    for(i = 0; i < sizeof(net_tableSlave_col_w)/sizeof(net_tableSlave_col_w[0]); i++) 
        lv_table_set_column_width(guider_ui.scrECATnet_tableSlave, i, net_tableSlave_col_w[i]);
    for(i = 0; i < sizeof(net_tableInOut_col_w)/sizeof(net_tableInOut_col_w[0]); i++)
    {
        lv_table_set_column_width(guider_ui.scrECATnet_tableInput, i, net_tableInOut_col_w[i]);
        lv_table_set_column_width(guider_ui.scrECATnet_tableOutput, i, net_tableInOut_col_w[i]);
    }
    for(i = 0; i < sizeof(net_tableEmcy_col_w)/sizeof(net_tableEmcy_col_w[0]); i++) 
        lv_table_set_column_width(guider_ui.scrECATnet_tableEmcy, i, net_tableEmcy_col_w[i]);
    for(i = 0; i < sizeof(net_tableInfoDC_col_w)/sizeof(net_tableInfoDC_col_w[0]); i++) 
    {
        lv_table_set_column_width(guider_ui.scrECATnet_tableInfo, i, net_tableInfoDC_col_w[i]);
        lv_table_set_column_width(guider_ui.scrECATnet_tableDC, i, net_tableInfoDC_col_w[i]);
    }
    lv_table_set_column_width(guider_ui.scrECATnet_tableAL, 0, 435);
    //modifico lo stile dell' header delle tabelle
    set_style_row_0_table(guider_ui.scrECATnet_tableNetwork);
    set_style_row_0_table(guider_ui.scrECATnet_tableConfig);
    set_style_row_0_table(guider_ui.scrECATnet_tableSlave);
    set_style_row_0_table(guider_ui.scrECATnet_tableAL);
    set_style_row_0_table(guider_ui.scrECATnet_tableEmcy);
    set_style_row_0_table(guider_ui.scrECATnet_tableInfo);
    set_style_row_0_table(guider_ui.scrECATnet_tableDC);
    lv_obj_add_flag(guider_ui.scrECATnet_tableSlave, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS);
    lv_obj_add_event_cb(guider_ui.scrECATnet_tableSlave, select_row_table_draw_event_cb, LV_EVENT_DRAW_TASK_ADDED, NULL); 
    // Applica il CLIP (crop) a tutte le celle
    for(r = 0; r < n_rows; r++) 
    {
        for(c = 0; c < 4; c++) 
            lv_table_set_cell_ctrl(guider_ui.scrECATnet_tableSlave, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
    for(r = 0; r < ECATFK_MAX_INPUT_VAR; r++) 
    {
        for(c = 0; c < 3; c++) 
            lv_table_set_cell_ctrl(guider_ui.scrECATnet_tableInput, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
    for(r = 0; r < ECATFK_MAX_OUTPUT_VAR; r++) 
    {
        for(c = 0; c < 3; c++) 
            lv_table_set_cell_ctrl(guider_ui.scrECATnet_tableOutput, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
    for(r = 0; r < 3; r++) 
        lv_table_set_cell_ctrl(guider_ui.scrECATnet_tableAL, r, 0, LV_TABLE_CELL_CTRL_TEXT_CROP);
    for(r = 0; r < 7; r++) 
    {
        for(c = 0; c < 8; c++)
            lv_table_set_cell_ctrl(guider_ui.scrECATnet_tableEmcy, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);

    }
    for(r = 0; r < 10; r++) 
    {
        for(c = 0; c < 2; c++) 
            lv_table_set_cell_ctrl(guider_ui.scrECATnet_tableInfo, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
    for(r = 0; r < 6; r++) 
    {
        for(c = 0; c < 2; c++) 
            lv_table_set_cell_ctrl(guider_ui.scrECATnet_tableDC, r, c, LV_TABLE_CELL_CTRL_TEXT_CROP);
    }
}

// Callback per gestire lo stile della riga 0 ( header ) nelle tabelle
static void title_table_draw_event_cb(lv_event_t * e) 
{
    lv_obj_t * table = lv_event_get_target(e);  
    lv_draw_task_t * task = lv_event_get_draw_task(e);
    if(!task)
		return;

    lv_draw_dsc_base_t * base = task->draw_dsc;
    if(!base)
		return;

    if(base->part != LV_PART_ITEMS)
		return;

    uint32_t row = base->id1;
    uint32_t col = base->id2;
	
	if (!lv_table_has_cell_ctrl(table, row, col, LV_TABLE_CELL_CTRL_CUSTOM_1))
        return;

    switch (task->type)
    {
        case LV_DRAW_TASK_TYPE_FILL:
			/* sfondo celle */
            ((lv_draw_fill_dsc_t *)task->draw_dsc)->color = lv_color_hex(0x606060);
            break;

        case LV_DRAW_TASK_TYPE_LABEL:
			/* testo celle */
            ((lv_draw_label_dsc_t *)task->draw_dsc)->color = lv_color_hex(0xFFFFFF);
            break;

        case LV_DRAW_TASK_TYPE_BORDER:
			/* bordo celle */
            ((lv_draw_border_dsc_t *)task->draw_dsc)->opa = LV_OPA_TRANSP;		// oppure ((lv_draw_border_dsc_t *)task->draw_dsc)->width = 0;
            break;

        default:
            break;
    }
}

// Callback per gestire lo stile della riga selezionata
void select_row_table_draw_event_cb(lv_event_t * e) 
{
    lv_draw_task_t * draw_task = lv_event_get_draw_task(e);
    lv_draw_dsc_base_t * base_dsc = draw_task->draw_dsc;

	if (!draw_task || !draw_task->draw_dsc)
		return;
	
    /* Verifica se stiamo disegnando le celle */
    if (base_dsc->part != LV_PART_ITEMS)
		return;
	
	/* In v9: id1 = riga, id2 = colonna */
	uint32_t row = base_dsc->id1; 
	uint32_t row_sel = -1;
	
	lv_obj_t * active_screen = lv_scr_act();
	if(active_screen == guider_ui.scrECATnet) 
		row_sel = net_row_sel;
	else if(active_screen == guider_ui.scrECATregs) 
		row_sel = regs_row_sel;
	
	if ( row_sel < 0 )
		return;
	
	/* Se è la riga selezionata e il task è di tipo testo (label) */
	if(row == row_sel && draw_task->type == LV_DRAW_TASK_TYPE_LABEL) 
	{
		((lv_draw_label_dsc_t *)draw_task->draw_dsc)->color = lv_palette_main(LV_PALETTE_BLUE);
	}
}

void table_draw_event_cb(lv_event_t * e)
{
    lv_obj_t * table = lv_event_get_target(e);
    lv_draw_task_t * task = lv_event_get_draw_task(e);
    if(task == NULL) return;
    lv_draw_dsc_base_t * base = task->draw_dsc;
    if(base == NULL) return;
    if(base->part != LV_PART_ITEMS) return;
    uint32_t row = base->id1;
    uint32_t col = base->id2;
    /* =========================
     * HEADER
     * ========================= */
    if(lv_table_has_cell_ctrl(table, row, col, LV_TABLE_CELL_CTRL_CUSTOM_1))
    {
        #if 0
        /* sfondo */
        if(task->type == LV_DRAW_TASK_TYPE_FILL)
        {
            lv_draw_fill_dsc_t * fill = (lv_draw_fill_dsc_t *)task->draw_dsc;
            fill->color = lv_palette_main(LV_PALETTE_BLUE);
        }
        /* testo */
        if(task->type == LV_DRAW_TASK_TYPE_LABEL)
        {
            lv_draw_label_dsc_t * label = (lv_draw_label_dsc_t *)task->draw_dsc;
            label->color = lv_color_white();
        }
        #else
        lv_draw_fill_dsc_t * fill;
        lv_draw_label_dsc_t * label;
        switch(task->type)
        {
            case LV_DRAW_TASK_TYPE_FILL:
                fill = (lv_draw_fill_dsc_t *)task->draw_dsc;
                fill->color = lv_palette_main(LV_PALETTE_BLUE);
                break;

            case LV_DRAW_TASK_TYPE_LABEL:
                label = (lv_draw_label_dsc_t *)task->draw_dsc;
                label->color = lv_color_white();
                break;

            default:
                break;
        }
        #endif
    }
    /* =========================
     * RIGA SELEZIONATA
     * ========================= */
    if(lv_table_has_cell_ctrl(table, row, col, LV_TABLE_CELL_CTRL_CUSTOM_2))
    {
        /* sfondo */
        //if(task->type == LV_DRAW_TASK_TYPE_FILL)
        //{
        //    lv_draw_fill_dsc_t * fill = (lv_draw_fill_dsc_t *)task->draw_dsc;
        //    fill->color = lv_palette_main(LV_PALETTE_BLUE);
        //}
        /* testo */
        if(task->type == LV_DRAW_TASK_TYPE_LABEL)
        {
            lv_draw_label_dsc_t * label = (lv_draw_label_dsc_t *)task->draw_dsc;
            label->color = lv_palette_main(LV_PALETTE_BLUE);
        }
    }
}

void drag_event_cb(lv_event_t * e)
{
     static lv_point_t last;

    lv_event_code_t code = lv_event_get_code(e);

    lv_obj_t * obj = lv_event_get_user_data(e);

    lv_indev_t * indev = lv_indev_get_act();
    if(!indev) return;

    lv_point_t p;
    lv_indev_get_point(indev, &p);

    if(code == LV_EVENT_PRESSED)
    {
        last = p;
    }
    else if(code == LV_EVENT_PRESSING)
    {
        int dx = p.x - last.x;
        int dy = p.y - last.y;

        lv_obj_move_to(obj,
                       lv_obj_get_x(obj) + dx,
                       lv_obj_get_y(obj) + dy);

        last = p;
    }
}

// get row selected
void msgbox_event_cb(lv_event_t * e)
{
    lv_obj_t * table = lv_event_get_target(e);
	
    // se non è una table, esco
    if(lv_obj_get_class(table) != &lv_table_class)
        return;
	
    uint32_t row, col;
    lv_table_get_selected_cell(table, &row, &col);
	
    /* ignora header */
    if((row == 0) || (row > slaveNum ))
        return;
	
    lv_obj_t * content = lv_obj_get_parent(table);
    if(content == NULL)
        return;
	
    lv_obj_t * msgbox = lv_obj_get_parent(content);
    if(msgbox == NULL)
        return;
	
    lv_obj_t * active_screen = lv_scr_act();
    if(active_screen == guider_ui.scrECATnet)
        net_row_sel = row;
    else if(active_screen == guider_ui.scrECATregs)
        regs_row_sel = row;

    lv_msgbox_close(msgbox);

}
