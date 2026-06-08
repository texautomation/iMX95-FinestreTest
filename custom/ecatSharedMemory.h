/* project ********* EtherCAT ***********************************************
 *                                                                          *
 *                                                                          *
 *              ecatSharedMemory                                            *
 *                                                                          *
 *                                                                          *
 ******** Copyright(C) 2026 Tex Computer srl ********************************
 *                                                                          *
 *      Ver 1.00    2026.04.21									            *
 *                                                                          *
 ***************************************************************************/

#ifndef ECAT_SHARED_H
#define ECAT_SHARED_H

/****************************************************************************/
/* include */
/***********/
#include <sys/mman.h>
#include <semaphore.h>
#include <pthread.h>
#include <stdint.h>
/***************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/****************************************************************************
 ****************************************************************************
 **********************         ecatAnalysis           **********************
 ****************************************************************************
 ****************************************************************************
 * file *
 *******/
#define SHM_ESC_NAME			"/ecat_ESCregisters_shm"
#define SEM_ESC_NAME			"/ecat_ESCregisters_sem"
/***************************************************************************/

/****************************************************************************
* definizioni *
**************/
#define ECATSM_MAX_SLAVE_INDEX	128
/***************************************************************************/

/****************************************************************************
 * struttura dati *
 *****************/
typedef struct smESCregisters
{
	#define ESC_REGISTERS_0x0110 2
	#define ESC_REGISTERS_0x0300 19
	uint8_t sharedMemoryRegister_0x110_to_0x111[ECATSM_MAX_SLAVE_INDEX][ESC_REGISTERS_0x0110];
	uint8_t sharedMemoryRegister_0x300_to_0x313[ECATSM_MAX_SLAVE_INDEX][ESC_REGISTERS_0x0300];
} smESCregisters;
/***************************************************************************/




/****************************************************************************
 ****************************************************************************
 ***********************         ecatLogger           ***********************
 ****************************************************************************
 ****************************************************************************
 * file *
 *******/
#define SHM_NETLOG_NAME			"/ecat_NetworkLogger_shm"
#define SEM_NETLOG_NAME			"/ecat_NetworkLogger_sem"
/***************************************************************************/

/****************************************************************************
 * definizioni *
 **************/
#define LOGEVENTIECAT		5
#define LEB_MAX_EVENT		60		// numero massimo di messaggi
#define LEB_MAX_SIZE_EVENT	140		// dimensione massima del messaggio di log

typedef struct
{
	long timeEvent;
	char descEvent[LEB_MAX_SIZE_EVENT];
} LEB_EVENT;

typedef struct
{
	int logEtherCATLastEvent;
	unsigned short logEtherCATWrPnt;
	unsigned char logEtherCATLibero;
	LEB_EVENT archivioEventi[LEB_MAX_EVENT];
} LOG_ETHERCAT_BUF;
/***************************************************************************/

/****************************************************************************
 * struttura dati *
 *****************/
typedef struct smNetworkLogger
{
	LOG_ETHERCAT_BUF logEventiEtherCAT[LOGEVENTIECAT];
} smNetworkLogger;
/***************************************************************************/





/****************************************************************************
 ****************************************************************************
 **********************         ecatFramework         ***********************
 ****************************************************************************
 ****************************************************************************
 * file *
 *******/
#define SHM_SLVINF_NAME			"/ecat_SlaveInformation_shm"
#define SEM_SLVINF_NAME			"/ecat_SlaveInformation_sem"
#define SHM_SLVDATA_NAME		"/ecat_SlaveData_shm"
#define SEM_SLVDATA_NAME		"/ecat_SlaveData_sem"
/***************************************************************************/

/****************************************************************************
 * definizioni *
 **************/
#define ECATSM_VENDOR_SIZE			30
#define ECATSM_PRODUCT_SIZE			30
#define ECATSM_MAX_EMCY_QUEUE		6
#define ECATSM_MAX_ERROR_CODE_QUEUE 6

typedef struct ECATFRK_SLAVE_INFORMATION
{
	uint32_t				indexAddress;
	uint32_t				vendorId;
	uint32_t				serialNumber;
	uint32_t				revisionNumber;
	uint8_t					vendorName[ECATSM_VENDOR_SIZE];
	uint32_t				productCode;
	uint8_t					productName[ECATSM_PRODUCT_SIZE];
	uint8_t					dc;
	uint32_t				dcSync0;
#define ECATFK_FREE_RUN			0
#define ECATFK_DC_SUPPORTED		1
	uint8_t					EoE;
#define ECATFK_EOE_NOTSUPPORTED 0
#define ECATFK_EOE_CONFIGURED	1
	uint32_t				EoEaddrLong;
	char					EoEaddrString[16];
} ECATFRK_SLAVE_INFORMATION;

typedef struct ECATFRK_SLAVE_VARIABLE
{
#define ECATFK_VARMAXNAME		50
#define ECATFK_VARMAXVALUE		50
	uint8_t					name[ECATFK_VARMAXNAME];
	uint8_t					size;
	uint8_t					value[ECATFK_VARMAXVALUE];
} ECATFRK_SLAVE_VARIABLE;

// ridefinisce la struttura ECAT_COE_EMCY decurtata dei puntatori (necessari per l'automatismo ma non per il passaggio dati)
typedef struct ECATFRM_COE_EMCY
{
	uint16_t				errorCode;
	uint8_t					errorReg;
	uint8_t					data[5];
	long					timeEvent;
} ECATFRM_COE_EMCY;

typedef struct ECATSM_ERROR_CODE
{
	uint16_t				errorCode;
	long					timeEvent;
} ECATSM_ERROR_CODE;

typedef struct ECATFRK_SLAVE_DATA
{
#define ECATFK_MAX_INPUT_VAR	30
#define ECATFK_MAX_OUTPUT_VAR	30
	uint8_t					state;
	uint8_t					targetState;
	uint8_t					transition;
	uint8_t					retries;
	uint32_t				timeout_uS;
	uint32_t				inputVarNum;
	uint32_t				outputVarNum;
	uint8_t					stm;
	uint8_t					configStm;
	ECATFRM_COE_EMCY		emcyQueue[ECATSM_MAX_EMCY_QUEUE];
	ECATSM_ERROR_CODE		errorCodeQueue[ECATSM_MAX_ERROR_CODE_QUEUE];
	ECATFRK_SLAVE_VARIABLE	varInput[ECATFK_MAX_INPUT_VAR];
	ECATFRK_SLAVE_VARIABLE	varOutput[ECATFK_MAX_OUTPUT_VAR];
} ECATFRK_SLAVE_DATA;
/***************************************************************************/

/****************************************************************************
 * struttura dati *
 *****************/
typedef struct smSlaveInformation
{
	ECATFRK_SLAVE_INFORMATION sharedMemorySlaveInformation[ECATSM_MAX_SLAVE_INDEX];
} smSlaveInformation;
typedef struct smSlaveData
{
	ECATFRK_SLAVE_DATA sharedMemorySlaveData[ECATSM_MAX_SLAVE_INDEX];
} smSlaveData;
/***************************************************************************/

/***************************************************************************/
#ifdef __cplusplus
}
#endif

#endif /* ECAT_SHARED_H */
