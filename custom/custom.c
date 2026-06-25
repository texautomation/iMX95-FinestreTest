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
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <assert.h>
#include <signal.h>
#include "screen_ECATNetwork.h"
#include "screen_ECATMessages.h"
#include "screen_ECATRegisters.h"
#include "screen_ECATLost.h"
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
static void table_draw_event_cb(lv_event_t * e);
static void msgbox_slave_table_event_cb(lv_event_t * e);
static void drag_event_cb(lv_event_t * e);
static void title_table_draw_event_cb(lv_event_t * e); 

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_timer_t * ECATRefresh_timer;
static const lv_coord_t net_tableMsgbox_col_w[] = { 140,200,140,140 };
static const lv_coord_t regs_tableMsgbox_col_w[] = { 140,200,200 };

/**********************
 *  GLOBAL VARIABLES
 **********************/
uint32_t smHandler = 0;
smESCregisters *ESC_shm;
sem_t* ESC_sem;
smNetworkLogger *NETLOG_shm;
sem_t* NETLOG_sem;
smSlaveInformation * SLAVE_INFO_shm;
sem_t* SLAVE_INFO_sem;
smSlaveData* SLAVE_DATA_shm;
sem_t* SLAVE_DATA_sem;
// stili
lv_style_t style_checked;
lv_style_t style_btn;
lv_style_t style_header;

int slaveNum = 5;

/**
 * Create a demo application
 */
static void sem_cleanup(void)
{
    sem_post(ESC_sem);
    sem_post(NETLOG_sem);
    sem_post(SLAVE_INFO_sem);
    sem_post(SLAVE_DATA_sem);
    printf("Posted all semaphores\n");

}

static void signal_handler(int sig)
{
    sem_cleanup();
    exit(0);  // _exit per evitare di chiamare atexit due volte
}

// 1. Funzione di callback chiamata ogni 200ms
void update_Ethercat_screen_data_cb(lv_timer_t * timer) 
{
    // 1. Controlla se la schermata è effettivamente quella attiva
    lv_obj_t * active_screen = lv_scr_act();  	

    if ( active_screen == guider_ui.scrECATnet )
        update_scrECATnet();
    else if ( active_screen == guider_ui.scrECATmsgs )
        update_scrECATmsgs();
    else if ( active_screen == guider_ui.scrECATregs )
        update_scrECATregs();
    else if(active_screen == guider_ui.scrECATlost) 
		update_scrECATlost();   
    else if(active_screen == guider_ui.scrECATband) 
		update_scrECATband();    	
}

void custom_init(lv_ui *ui)
{
    /*Mi assicuro di liberare i semafori quando termino il processo*/
    signal(SIGTERM, signal_handler);
    signal(SIGINT,  signal_handler);
    atexit(sem_cleanup);
    
    /*ESCregisters*/
    smHandler = shm_open( SHM_ESC_NAME, O_CREAT | O_RDWR, 0666);    //Ottengo il file descriptor della memoria condivisa
    if(smHandler == -1)
    {
        printf("Unable to open %s\n", SHM_ESC_NAME);
        exit(1);
    }
    ftruncate(smHandler, sizeof(smESCregisters));                   //Imposto la dimensione del file
    ESC_shm = mmap(NULL, sizeof(smESCregisters), PROT_READ| PROT_WRITE, MAP_SHARED, smHandler, 0);  //Mappo il file nella memoria del processo
    if(ESC_shm == MAP_FAILED)
    {
        printf("Unable to map shared memory 'ESC_shm'\n");
        exit(1);
    }
    close(smHandler);                                               //Posso chiudere il file dopo aver mappato i dati in memoria (vedere 'man mmap')

    ESC_sem = sem_open(SEM_ESC_NAME, O_CREAT, 0666, 1);             //Apro il semaforo relativo alla shm
    if(ESC_sem == SEM_FAILED)
    {
        printf("Unable to create semaphore 'ESC_sem'\n");
        exit(1);
    }

    /*NetworkLogger*/
    smHandler = shm_open(SHM_NETLOG_NAME, O_CREAT | O_RDWR, 0666);
    if(smHandler == -1)
    {
        printf("Unable to open %s\n", SHM_NETLOG_NAME);
        exit(1);
    }
    ftruncate(smHandler, sizeof(smNetworkLogger));
    NETLOG_shm = mmap(NULL, sizeof(smNetworkLogger), PROT_READ| PROT_WRITE, MAP_SHARED, smHandler , 0);
    if(NETLOG_shm == MAP_FAILED)
    {
        printf("Unable to map shared memory 'NETLOG_shm'\n");
        exit(1);
    }
    close(smHandler);

    NETLOG_sem = sem_open(SEM_NETLOG_NAME, O_CREAT, 0666, 1);
    if(NETLOG_sem == SEM_FAILED)
    {
        printf("Unable to create semaphore 'NETLOG_sem'\n");
        exit(1);
    }

    /*Slave Information & Data*/
    smHandler = shm_open(SHM_SLVINF_NAME, O_CREAT | O_RDWR, 0666);
    if(smHandler == -1)
    {
        printf("Unable to open %s\n", SHM_SLVINF_NAME);
        exit(1);
    }
    ftruncate(smHandler, sizeof(smSlaveInformation));
    SLAVE_INFO_shm = mmap(NULL, sizeof(smSlaveInformation), PROT_READ| PROT_WRITE, MAP_SHARED, smHandler , 0);
    if(SLAVE_INFO_shm == MAP_FAILED)
    {
        printf("Unable to map shared memory 'SLAVE_INFO_shm'\n");
        exit(1);
    }
    close(smHandler);

    SLAVE_INFO_sem = sem_open(SEM_SLVINF_NAME, O_CREAT, 0666, 1);
    if(SLAVE_INFO_sem == SEM_FAILED)
    {
        printf("Unable to create semaphore 'SLAVE_INFO_sem'\n");
        exit(1);
    }

    smHandler = shm_open(SHM_SLVDATA_NAME, O_CREAT | O_RDWR, 0666);
    if(smHandler == -1)
    {
        printf("Unable to open %s\n", SHM_SLVDATA_NAME);
        exit(1);
    }
    ftruncate(smHandler, sizeof(smSlaveData));
    SLAVE_DATA_shm = mmap(NULL, sizeof(smSlaveData), PROT_READ| PROT_WRITE, MAP_SHARED, smHandler , 0);
    if(SLAVE_DATA_shm == MAP_FAILED)
    {
        printf("Unable to map shared memory 'SLAVE_DATA_shm'\n");
        exit(1);
    }
    close(smHandler);

    SLAVE_DATA_sem = sem_open(SEM_SLVDATA_NAME, O_CREAT, 0666, 1);
    if(SLAVE_DATA_sem == SEM_FAILED)
    {
        printf("Unable to create semaphore 'SLAVE_DATA_sem'\n");
        exit(1);
    }	
	
    /*Setup schermi*/
    setup_scr_scrECATband(ui);
    setup_scr_scrECATlost(ui);
    setup_scr_scrECATmsgs(ui);
    setup_scr_scrECATnet(ui);
    setup_scr_scrECATregs(ui);
    setup_scr_scrCNC(ui);

    // stili 
    lv_style_init(&style_checked);
    lv_style_set_bg_color(&style_checked, lv_color_hex(0xc2c2c2));
    lv_style_set_text_color(&style_checked, lv_palette_main(LV_PALETTE_BLUE));

    lv_style_init(&style_btn);
    lv_style_set_bg_color(&style_btn, lv_color_hex(0xe1e6ee));
      
    lv_style_init(&style_header);
    lv_style_set_bg_color(&style_header, lv_color_hex(0x606060));
    lv_style_set_bg_opa(&style_header, LV_OPA_COVER);
    lv_style_set_text_color(&style_header, lv_color_white());

    ECATRefresh_timer = lv_timer_create(update_Ethercat_screen_data_cb, 1000, NULL);
}

// Callback per gestire lo stile della riga selezionata
void select_row_table_draw_event_cb(lv_event_t * e) 
{
    lv_draw_task_t * draw_task = lv_event_get_draw_task(e);
    lv_draw_dsc_base_t * base_dsc = draw_task->draw_dsc;
    lv_obj_t * table = lv_event_get_target(e);

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

    if(active_screen == guider_ui.scrECATregs)
    {
        uint32_t col = base_dsc->id2;
        /* Recupera informazioni sulla cella attualmente disegnata */
        const char * txt = lv_table_get_cell_value(table, row, col);
        if ( txt[0] != '\0' )
        {
            int value = atoi(txt);

            /* Se è la colonna 1 e il task è di tipo testo (label) */
            if(col > 2 &&  row != 0 && draw_task->type == LV_DRAW_TASK_TYPE_LABEL) 
            {
                lv_draw_label_dsc_t * label_dsc = draw_task->draw_dsc;
                if(value != 0) 
                    label_dsc->color = lv_color_hex(0xFFFFFF);
                else
                    label_dsc->color = lv_color_hex(0x000000);
            }
            else if(col > 2 && row != 0 && draw_task->type == LV_DRAW_TASK_TYPE_FILL)
            { 
                lv_draw_fill_dsc_t * fill_dsc = draw_task->draw_dsc;
                if(value != 0) 
                    fill_dsc->color = lv_palette_main(LV_PALETTE_RED);
                else
                    fill_dsc->color = lv_color_hex(0xb0b0b0);
            }
        }
    }
}

static void table_draw_event_cb(lv_event_t * e)
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
        else if(task->type == LV_DRAW_TASK_TYPE_LABEL)
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
                fill->color = lv_color_hex(0x606060);
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
    else if(lv_table_has_cell_ctrl(table, row, col, LV_TABLE_CELL_CTRL_CUSTOM_2))
    {
        /* sfondo */
        if(task->type == LV_DRAW_TASK_TYPE_FILL)
        {
            lv_draw_fill_dsc_t * fill = (lv_draw_fill_dsc_t *)task->draw_dsc;
            fill->color = lv_color_hex(0xd0d0d0);//lv_color_hex(0xb0b0b0);
        }
        /* testo */
        else if(task->type == LV_DRAW_TASK_TYPE_LABEL)
        {
            lv_draw_label_dsc_t * label = (lv_draw_label_dsc_t *)task->draw_dsc;
            label->color = lv_palette_main(LV_PALETTE_BLUE);
        }
    }
    else
    {
        /* sfondo */
        if(task->type == LV_DRAW_TASK_TYPE_FILL)
        {
            lv_draw_fill_dsc_t * fill = (lv_draw_fill_dsc_t *)task->draw_dsc;
            fill->color = lv_color_hex(0xd0d0d0);//lv_color_hex(0xb0b0b0);
        }
        /* testo */
        else if(task->type == LV_DRAW_TASK_TYPE_LABEL)
        {
            lv_draw_label_dsc_t * label = (lv_draw_label_dsc_t *)task->draw_dsc;
            label->color = lv_color_hex(0x000000);
        }
    }
}

// get slave selected
static void msgbox_slave_table_event_cb(lv_event_t * e)
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
	
    lv_obj_t * active_screen = lv_scr_act();
    if(active_screen == guider_ui.scrECATnet)
        net_row_sel = row;
    else //if(active_screen == guider_ui.scrECATregs)
        regs_row_sel = row;

    lv_obj_t * content = lv_obj_get_parent(table);
    if(content == NULL)
        return;
	
    lv_obj_t * msgbox = lv_obj_get_parent(content);
    if(msgbox == NULL)
        return;

    lv_msgbox_close(msgbox);
}

static void drag_event_cb(lv_event_t * e)
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

void apri_msgbox_selezione_slave ( lv_event_t *e )
{
    uint32_t row, col;
    uint32_t rowSel;
    lv_obj_t * table = lv_event_get_target(e);
    // Ottieni riga e colonna selezionate
    lv_table_get_selected_cell(table, &row, &col);

    // Controlla se una riga valida è stata cliccata
    if(row != LV_TABLE_CELL_NONE)
    {
        int i, j;
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
        lv_obj_t * active_screen = lv_scr_act();
        if(active_screen == guider_ui.scrECATnet)
        {
            lv_obj_set_size(mbox, 660, 450);
            rowSel = net_row_sel;
        }
        else //if(active_screen == guider_ui.scrECATregs)
        {
            lv_obj_set_size(mbox, 580, 450);
            rowSel = regs_row_sel;
        }
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
        if(active_screen == guider_ui.scrECATnet)
        {
            n_cols = sizeof(net_tableMsgbox_col_w)/sizeof(net_tableMsgbox_col_w[0]);
            /* larghezza colonne */
            for(j = 0; j < n_cols; j++)
                lv_table_set_column_width(tbl, j, net_tableMsgbox_col_w[j]);     
        }
        else //if(active_screen == guider_ui.scrECATregs)
        {        
            n_cols = sizeof(regs_tableMsgbox_col_w)/sizeof(regs_tableMsgbox_col_w[0]);
            for(j = 0; j < n_cols; j++)
                lv_table_set_column_width(tbl, j, regs_tableMsgbox_col_w[j]);
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
                if(i == rowSel)
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
        lv_obj_add_event_cb(tbl, msgbox_slave_table_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

        // Aggiungi un pulsante di chiusura
        lv_obj_t *close_btn = lv_msgbox_add_close_button(mbox);
        lv_obj_set_style_bg_color(close_btn, lv_color_black(), LV_PART_MAIN);
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

// definisco lo stile per il titolo delle tabelle
void set_style_title_table(lv_obj_t *table)
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