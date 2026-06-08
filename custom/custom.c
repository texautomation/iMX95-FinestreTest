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
static lv_timer_t * my_timer;

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

    my_timer = lv_timer_create(update_Ethercat_screen_data_cb, 1000, NULL);
}