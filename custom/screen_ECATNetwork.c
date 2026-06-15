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
#define ETHERCAT_MAX_ROW_SLAVE_TABLE      9


/**********************
 *      TYPEDEFS
 **********************/


/**********************
 *  STATIC PROTOTYPES
 **********************/


/**********************
 *  STATIC VARIABLES
 **********************/
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
int net_row_sel = 1; 
int net_row_sel_prev = 1;


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
	char buffer[N_MAX_CHAR_TABLE];
	int SlaveIndex, subIndex, row, rowSel;
    uint32_t n_rows, n_cols;
    int n_input, n_output;

    // Aggiorna i dati della screen
	sem_wait(SLAVE_INFO_sem);
    sem_wait(SLAVE_DATA_sem);
    //int link = os_cableConnected();
    sprintf ( buffer, "%3d", slaveNum ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 0, buffer );
    #if 0
    /------------------------------------------------------------------------------------------------
    // network name      destination       source           type   
    //------------------------------------------------------------------------------------------------
    sprintf ( buffer, "%-31s", mstCnfg->xml.master.name ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableNetwork, 1, 0, buffer );
    sprintf ( buffer, "%02x-%02x-%02x-%02x-%02x-%02x", mstCnfg->xml.master.destination[0], mstCnfg->xml.master.destination[1],
			 mstCnfg->xml.master.destination[2], mstCnfg->xml.master.destination[3], mstCnfg->xml.master.destination[4], mstCnfg->xml.master.destination[5] ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableNetwork, 1, 1, buffer );
    sprintf ( buffer, "%02x-%02x-%02x-%02x-%02x-%02x", mstCnfg->xml.master.source[0], mstCnfg->xml.master.source[1],
			 mstCnfg->xml.master.source[2], mstCnfg->xml.master.source[3], mstCnfg->xml.master.source[4], mstCnfg->xml.master.source[5] ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableNetwork, 1, 2, buffer );
    sprintf ( buffer, "0x%04x",  mstCnfg->xml.master.etherType ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableNetwork, 1, 3, buffer );
    /------------------------------------------------------------------------------------------------
	// config   active      frame wrong     noECAT      lost        cable       sync        ecat cycle
	//------------------------------------------------------------------------------------------------
    sprintf ( buffer, "%3d", mstCnfg->slaveNum ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 0, buffer );
    sprintf ( buffer, "%3d", *mstCnfg->activeSlaveNumPt ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 1, buffer );
    sprintf ( buffer, "%5d", mstCnfg->xml.frameWrongSource ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 2, buffer );
    sprintf ( buffer, "%5d", mstCnfg->xml.frameNotECAT ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 3, buffer );
    sprintf ( buffer, "%5d", mstCnfg->xml.cyclicFrameDontReceive ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 4, buffer );
    sprintf ( buffer, "%13s", link==1?"connected    ":(link==-1?"non init     ":link==-2?"not ready    ":"not connected" ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 5, buffer );
    sprintf ( buffer, "%4ld \265S", maxTempoSwapEtherCAT ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 6, buffer );
    sprintf ( buffer, "%3d \265S", maxTempoDurataEtherCAT ); 
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableConfig, 1, 7, buffer );
    #endif
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
	// non conto la riga 0 o intestazione
    for	( SlaveIndex = 0; SlaveIndex < (n_rows - 1); SlaveIndex++ )
	{
        if (  SlaveIndex < slaveNum )
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
                        (slave->stm < (sizeof(NodeSTM) / sizeof(NodeSTM[0])) ? NodeSTM[slave->stm] : undefStatus) : "");

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
        else //ripulisco le restanti righe della tableslave
        {
            for ( int j = 0; j < n_cols; j++ )
                lv_table_set_cell_value(guider_ui.scrECATnet_tableSlave, SlaveIndex+1, j, "");
		}	
	}
    //------------------------------------------------------------------------------------------------
	// input data
	//------------------------------------------------------------------------------------------------   
    n_rows = lv_table_get_row_count(guider_ui.scrECATnet_tableInput);
    n_cols = lv_table_get_column_count(guider_ui.scrECATnet_tableInput);
    n_input = SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].inputVarNum;
    if ( n_input > ECATFK_MAX_INPUT_VAR )
        n_input = ECATFK_MAX_INPUT_VAR;
	for ( row = 0; row < n_input; row++ )
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
    n_output = SLAVE_DATA_shm->sharedMemorySlaveData[rowSel-1].outputVarNum;
    if ( n_output > ECATFK_MAX_OUTPUT_VAR )
        n_output = ECATFK_MAX_OUTPUT_VAR;
	for ( row = 0; row < n_output; row++ )
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
    for ( row = 1; row <= ETHERCAT_MAX_ROW_SLAVE_TABLE; row++ )
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
    lv_table_set_cell_value( guider_ui.scrECATnet_tableInfo,1,0,(char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].productName);
    snprintf ( buffer, sizeof(buffer), "0x%04x", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].vendorId ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,2,1, buffer );
    snprintf ( buffer, sizeof(buffer), "0x%04x", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].serialNumber ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,3,1, buffer );
    snprintf ( buffer, sizeof(buffer), "0x%04x", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].productCode ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,4,1, buffer );
    snprintf ( buffer, sizeof(buffer), "0x%04x", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].revisionNumber ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,5,1, buffer );
    snprintf ( buffer, sizeof(buffer), "%s", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].dc ? "supported" : "free run" ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,6,1, buffer );
    snprintf ( buffer, sizeof(buffer), "%4d \265S", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].dcSync0?  SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].dcSync0/1000 : 0 ); 
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,7,1, buffer );
	lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,8,1, SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].EoE ? (char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].EoEaddrString : "not supported" );
    //lv_table_set_cell_value ( guider_ui.scrECATnet_tableInfo,9,1, SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].EoE ? (char*)SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].GatewayString : "");
    //------------------------------------------------------------------------------------------------
	// distribuited clock
	//------------------------------------------------------------------------------------------------
	#if 0
    if ( SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Active )
		snprintf ( buffer, sizeof(buffer), "sync0   %s", mstCnfg->syncMaster.sync0Synchronized?"hooked ":"      " );
	else
		strcpy ( buffer, "no sync         " );
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,1,1, buffer );    
	if ( SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Synchronized )
		snprintf ( buffer, sizeof(buffer), "%4d nS (0x%02x)", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].deriva, SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Allarm );
	else
		snprintf ( buffer, sizeof(buffer), "not hooked (0x%02x)", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0Allarm );
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,2,1, buffer );
	snprintf ( buffer, sizeof(buffer), "%3d  (lost:%4d)", SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].ticks,SLAVE_INFO_shm->sharedMemorySlaveInformation[rowSel-1].sync0LostNextSync );
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,3,1, buffer ); 
	snprintf ( buffer, sizeof(buffer), "0x%08x", (mstCnfg->systemTimeLen==4)?(EC_GET32(*mstCnfg->txSystemTime32bitPt)):
										 (mstCnfg->systemTimeLen==8)?(long)(EC_GET64(*mstCnfg->txSystemTime64bitPt)):0);
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,4,1, buffer ); 
	snprintf ( buffer, sizeof(buffer), "0x%08x", (mstCnfg->systemTimeLen==4)?(EC_GET32(*mstCnfg->rxSystemTime32bitPt)):
										 (mstCnfg->systemTimeLen==8)?(long)(EC_GET64(*mstCnfg->rxSystemTime64bitPt)):0);
    lv_table_set_cell_value ( guider_ui.scrECATnet_tableDC,5,1, buffer ); 
    #endif
	sem_post(SLAVE_INFO_sem);
    sem_post(SLAVE_DATA_sem);
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
    set_style_title_table(guider_ui.scrECATnet_tableNetwork);
    set_style_title_table(guider_ui.scrECATnet_tableConfig);
    set_style_title_table(guider_ui.scrECATnet_tableSlave);
    set_style_title_table(guider_ui.scrECATnet_tableAL);
    set_style_title_table(guider_ui.scrECATnet_tableEmcy);
    set_style_title_table(guider_ui.scrECATnet_tableInfo);
    set_style_title_table(guider_ui.scrECATnet_tableDC);
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