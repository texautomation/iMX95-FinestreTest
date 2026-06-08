/**
 *  @file		ecat_usr.h
 *  @author		Pierluigi Allio
 *  @author		Trama s.r.l.
 *  @author		http://www.tramasrl.com
 *  @version    3.0
 *  @date       2013
 */

#ifndef ECAT_USR_H
#define ECAT_USR_H

#include <stdint.h>	

/* Da definire se il processore è Big Endian */
#ifndef iMX95
	#define ECAT_BIG_ENDIAN
#endif

/* Definire se si vogliono utilizzare le variabili come struttura */
#undef ECAT_USE_VAR_TABLE

/* Definire se si vuole avere il supporto alla VLAN */
#undef ECAT_802_1Q_VIRTUAL_LAN

/* Mailbox poll time di default (100 msec) */
#define ECAT_DEFAULT_MBX_POLL_TIME		10000000

/* Numero massimo di slave sulla rete */
#define ECAT_MAX_SLAVE_INDEX			128

/* Numero massimo di reti */
#define	ECAT_MAX_NETWORK_NUM			1

/* numero massimo di dispositivi slave gestiti */
#define	ECAT_MAX_SLAVE_NUM				127

/* numero massimo di pdo per slave */
#define ECAT_MAX_PDO_NUM				24

/* numero di retries sulla lettura mailbox in attesa risposta a comandi utente CoE */
#define ECAT_COE_RES_RETRIES_NUM		3

/* numero di retries sulla lettura mailbox in attesa risposta a comandi utente  SoE */
#define ECAT_SOE_RES_RETRIES_NUM		3

/* numero di retries sulla lettura mailbox in attesa risposta a comandi utente FoE */
#define ECAT_FOE_RES_RETRIES_NUM		50

/* numero di retries sulla lettura mailbox in attesa risposta a comandi utente EoE */
#define ECAT_EOE_RES_RETRIES_NUM		3

/* numero di retries sulla gestione dei registri di memoria */
#define ECAT_MEM_RES_RETRIES_NUM		2

/* numero massimo di frame ciclici gestiti */
#define ECAT_MAX_CYCLIC_FRAME_NUM		5

/* Numero di cicli per regolare il distributed clock */
#define ECAT_DRIFT_COMPENSATION_LOOP	500

/* Timeout attesa prima di provare a cercare nuovamente lo slave (in msec) */
#define ECAT_MISSING_SLAVE_TIMEOUT		1000

/*********** DEBUG ***********/
#define ECAT_DC_DEBUG (1==0)
#define ECAT_INFO_DEBUG (1==0)

/********* Enum **************************************************************/

/* stati possibili per uno slave */
typedef enum ecat_state
{
	ECAT_UNKNOWN_STATE,
	ECAT_INIT_STATE 	= 1,
	ECAT_PREOP_STATE	= 2,
	ECAT_BOOT_STATE		= 3,
	ECAT_SAFEOP_STATE	= 4,
	ECAT_OP_STATE		= 8,
	ECAT_FATAL_STATE	= 255

} ECAT_STATE;

/* tipi di frame */
typedef enum ecat_frame_type
{
	ECAT_MASTER_FRAME_TYPE = 0x01,
	ECAT_CYCLIC_FRAME_TYPE = 0x02,
	ECAT_ACYCLIC_FRAME_TYPE = 0x04,
	ECAT_TX_FRAME_TYPE = 0x40,
	ECAT_RX_FRAME_TYPE = 0x80

} ECAT_FRAME_TYPE;

/* livello di severità del messaggio di log */
typedef enum ecat_log_lvl
{
	ECAT_DEBUG_LOG,
	ECAT_INFO_LOG,
	ECAT_WARN_LOG,
	ECAT_ERROR_LOG,
	ECAT_FIELDBUS_LOG

} ECAT_LOG_LVL;


typedef enum ecat_od_list_type
{
	ECAT_OD_LIST_TYPE_GET_NUM,
	ECAT_OD_LIST_TYPE_ALL,
	ECAT_OD_LIST_TYPE_RXPDO,
	ECAT_OD_LIST_TYPE_TXPDO,
	ECAT_OD_LIST_TYPE_BACKUP,
	ECAT_OD_LIST_TYPE_SETTINGS

} ECAT_OD_LIST_TYPE;

typedef enum ecat_obj_code
{
	ECAT_VARIABLE_OBJ = 7,
	ECAT_ARRAY_OBJ,
	ECAT_RECORD_OBJ

} ECAT_OBJ_CODE;

typedef enum ecat_entry_valueinfo_bit
{
	ECAT_UNIT_TYPE_BIT		= 0x08,
	ECAT_DEFAULT_VALUE_BIT	= 0x10,
	ECAT_MIN_VALUE_BIT		= 0x20,
	ECAT_MAX_VALUE_BIT		= 0x40

} ECAT_ENTRY_VALUEINFO_BIT;

typedef enum ecat_obj_access_bit
{
	ECAT_READ_ACCESS_PREOP_BIT		= 0x01,
	ECAT_READ_ACCESS_SAFEOP_BIT		= 0x02,
	ECAT_READ_ACCESS_OP_BIT			= 0x04,
	ECAT_WRITE_ACCESS_PREOP_BIT		= 0x08,
	ECAT_WRITE_ACCESS_SAFEOP_BIT	= 0x10,
	ECAT_WRITE_ACCESS_OP_BIT		= 0x20,
	ECAT_RXPDO_MAPPABLE_BIT			= 0x40,
	ECAT_TXPDO_MAPPABLE_BIT			= 0x80,
	ECAT_BACKUP_USABLE_BIT			= 0x100,
	ECAT_SETTINGS_USABLE_BIT		= 0x200

} ECAT_OBJ_ACCESS_BIT;

typedef enum ecat_al_status_code
{
	ECAT_NO_ERROR,
	ECAT_UNSPECIFIED_ERROR						= 0x0001,
	ECAT_NO_MEMORY_ERROR						= 0x0002,
	ECAT_INVALID_REQUEST_CHANGE_ERROR			= 0x0011,
	ECAT_UNKNOWN_REQUESTED_STATE_ERROR			= 0x0012,
	ECAT_BOOTSTRAP_NOT_SUPPORTED				= 0x0013,
	ECAT_NO_VALID_FIRMWARE						= 0x0014,
	ECAT_INVALID_MBOX_IB_CONFIG_ERROR			= 0x0015,
	ECAT_INVALID_MBOX_IP_CONFIG_ERROR			= 0x0016,
	ECAT_INVALID_SYNCA_MANAGER_CONFIG_ERROR		= 0x0017,
	ECAT_NO_VALID_INPUTS_AVAILABLE_ERROR		= 0x0018,
	ECAT_NO_VALID_OUTPUTS_ERROR					= 0x0019,
	ECAT_SYNCHRONIZATION_ERROR					= 0x001A,
	ECAT_SYNC_MANAGER_WATCHDOG_ERROR			= 0x001B,
	ECAT_INVALID_SYNC_MANAGER_TYPES_ERROR		= 0x001C,
	ECAT_INVALID_OUTPUT_CONFIG_ERROR			= 0x001D,
	ECAT_INVALID_INPUT_CONFIG_ERROR				= 0x001E,
	ECAT_INVALID_WATCHDOG_CONFIG_ERROR			= 0x001F,
	ECAT_SLAVE_NEEDS_COLD_START_ERROR			= 0x0020,
	ECAT_SLAVE_NEEDS_INIT_ERROR					= 0x0021,
	ECAT_SLAVE_NEEDS_PREOP_ERROR				= 0x0022,
	ECAT_SLAVE_NEEDS_SAFEOP_ERROR				= 0x0023,
	ECAT_INVALID_INPUT_MAPPING_ERROR			= 0x0024,
	ECAT_INVALID_OUTPUT_MAPPING_ERROR			= 0x0025,
	ECAT_INCONSISTENT_SETTINGS_ERROR			= 0x0026,
	ECAT_FREE_RUN_NOT_SUPPORTED_ERROR			= 0x0027,
	ECAT_SYNCHRONIZATION_NOT_SUPPORTED_ERROR	= 0x0028,
	ECAT_FREE_RUN_NEEDS_3_BUFFER_MODE_ERROR		= 0x0029,
	ECAT_BACKGROUND_WATCHDOG_ERROR				= 0x002A,
	ECAT_NO_VALID_INPUTS_AND_OUTPUTS_ERROR		= 0x002B,
	ECAT_FATAL_SYNC_ERROR						= 0x002C,
	ECAT_NO_SYNC_ERROR							= 0x002D,
	ECAT_INVALID_DC_SYNCH_CONFIG_ERROR			= 0x0030,
	ECAT_INVALID_DC_LATCH_CONFIG_ERROR			= 0x0031,
	ECAT_PLL_ERROR								= 0x0032,
	ECAT_INVALID_DC_IO_ERROR					= 0x0033,
	ECAT_INVALID_DC_TIMEOUT_ERROR				= 0x0034,
	ECAT_DC_INVALID_SYNC_CYCLE_TIME_ERROR		= 0x0035,
	ECAT_DC_SYNC0_CYCLE_TIME_ERROR				= 0x0036,
	ECAT_DC_SYNC1_CYCLE_TIME_ERROR				= 0x0037,
	ECAT_MBX_AOE_ERROR							= 0x0041,
	ECAT_MBX_EOE_ERROR							= 0x0042,
	ECAT_MBX_COE_ERROR							= 0x0043,
	ECAT_MBX_FOE_ERROR							= 0x0044,
	ECAT_MBX_SOE_ERROR							= 0x0045,
	ECAT_MBX_VOE_ERROR							= 0x004F,
	ECAT_EEPROM_NO_ACCESS_ERROR					= 0x0050,
	ECAT_EEPROM_ERROR							= 0x0051,
	ECAT_SLAVE_RESTARTED_LOCALLY_ERROR			= 0x0060,

} ECAT_AL_STATUS_CODE;

struct ecat_coe_obj;
struct ecat_coe_emcy;
struct ecat_error_code;
struct ecat_mem_obj;
struct ecat_eoe_obj;
struct ecat_soe_obj;
struct ecat_foe_obj;
struct ecat_od_list;
struct ecat_obj_desc;
struct ecat_entry_desc;

/*********** Callback utilizzate nelle API ************************************/
typedef void (*ECAT_SDO_CALLBACK)(int slave, struct ecat_coe_obj* obj);
typedef void (*ECAT_MEM_CALLBACK)(int slave, struct ecat_mem_obj* obj);
typedef void (*ECAT_SSC_CALLBACK)(int slave, struct ecat_soe_obj* obj);
typedef void (*ECAT_FOE_CALLBACK)(int slave, struct ecat_foe_obj* obj);
typedef void (*ECAT_NMT_CALLBACK)(int slave, ECAT_STATE state, void* arg);
typedef void (*ECAT_EMCY_CALLBACK)(int slave, struct ecat_coe_emcy* obj);
typedef void (*ECAT_EOE_CALLBACK)(int slave, struct ecat_eoe_obj* obj);
typedef void (*ECAT_RX_CALLBACK)(ECAT_FRAME_TYPE type, int frameIndex, void* arg);
typedef void (*ECAT_PRM_CALLBACK)(int slave, void* obj);
typedef int (*ECAT_LOG_CALLBACK)(ECAT_LOG_LVL sev, const char* fmt, ...);
typedef void (*ECAT_FATAL_CALLBACK)(int slave, int errorCode, void* arg);

typedef void (*ECAT_OD_LIST_CALLBACK)(int slave, struct ecat_od_list* list);
typedef void (*ECAT_OBJ_DESC_CALLBACK)(int slave, struct ecat_obj_desc* list);
typedef void (*ECAT_ENTRY_DESC_CALLBACK)(int slave, struct ecat_entry_desc* list);

typedef void* ECAT_SLAVE_HANDLE;
typedef void* ECAT_VAR_HANDLE;
typedef void* ECAT_PRM_HANDLE;
typedef uint64_t ECAT_TIME;

/*********** Strutture dati ***************************************************/
typedef struct ecat_coe_obj
{
	int 		index;
	int			subindex;
	int 		dataLen;
	int			access;
	uint8_t*	data;
	int			error;
	ECAT_SDO_CALLBACK	callback;
	void*		arg;
	// PC: per l'aggiornamento dei parametri macchina in automatico
	int     	netID;
	int			physAddr;
	char    	needUpdate;	 
	char		filterAccess;
	int 		axe;
} ECAT_COE_OBJ;

#define ECAT_COE_OBJ_SIZE	sizeof(ECAT_COE_OBJ)

typedef struct ecat_od_list
{
	ECAT_OD_LIST_TYPE	type;
	int			len;
	uint8_t		data[1024];
	int			error;
	ECAT_OD_LIST_CALLBACK	callback;
	void*		arg;

} ECAT_OD_LIST;

typedef struct ecat_obj_desc
{
	uint16_t	index;
	uint16_t	type;
	uint8_t		maxSubindex;
	ECAT_OBJ_CODE	code;
	char		name[32];
	int			error;
	ECAT_OBJ_DESC_CALLBACK	callback;
	void*		arg;

} ECAT_OBJ_DESC;

typedef struct ecat_entry_desc
{
	uint16_t	index;
	uint8_t		subindex;
	uint8_t		valueInfo;
	uint16_t	dataType;
	uint16_t	bitLength;
	uint16_t	objAccess;
	uint8_t		data[32];
	uint8_t		dataLen;
	int			error;
	ECAT_ENTRY_DESC_CALLBACK	callback;
	void*		arg;

} ECAT_ENTRY_DESC;

#pragma pack(1)
typedef struct ecat_coe_emcy
{
	uint16_t	errorCode;
	uint8_t		errorReg;
	uint8_t		data[5];
    long        timeEvent;
	void*		arg;

} ECAT_COE_EMCY;
#pragma pack()

#pragma pack(1)
typedef struct ecat_error_code
{
	uint16_t	errorCode;
    long		timeEvent;
} ECAT_ERROR_CODE;
#pragma pack()

#define ECAT_MEMORY_DUMP_SIZE			100
#define ECAT_MEMORY_DUMP_NO_DATA		0
#define ECAT_MEMORY_DUMP_IN_CORSO		1
#define ECAT_MEMORY_DUMP_DATA_OK		2

typedef struct ecat_mem_obj
{
	int			access;
	int 		netID;
	int 		physAddr;
	int 		startOffset;
	int 		length;
	int     	readOK;
	uint8_t*	data;
	long    	timeOut;
	int			error;
	ECAT_MEM_CALLBACK	callback;
	void*		arg;

} ECAT_MEM_OBJ;

#define ECAT_MEM_OBJ_SIZE	sizeof(ECAT_MEM_OBJ)

typedef struct ecat_eoe_obj
{
	int			frameNumber;
	int			length;
	int   		offset;
	int    		fragNumber;
	int			lastFrag;
	uint8_t*	data;
	int			error;
	int         mailBoxRetry;
} ECAT_EOE_OBJ;

#define ECAT_EOE_OBJ_LEN	sizeof(ECAT_EOE_OBJ)

typedef struct ecat_soe_obj
{
	int 		idn;
	int 		dataLen;
	int			access;
	int			elementFlags;
	uint8_t*	data;
	int			error;
	ECAT_SSC_CALLBACK	callback;
	void*		arg;

} ECAT_SOE_OBJ;

#define ECAT_SOE_OBJ_SIZE	sizeof(ECAT_SOE_OBJ)

typedef struct ecat_foe_obj
{
	int			access;
	#ifndef iMX95
		int 	file;
	#else
		void*	file;
	#endif
	char		filenameSorgente[50];	// nome del file 'fisico' comprensivo del path
	char		filenameFoE[40];		// nome da utilizzare per la transizione FoE
	uint32_t	dataSize;
	uint32_t	password;
	uint32_t	errorCode;
	uint32_t	packetNo;
	uint8_t		*data;
	int			dataLen;
	int			busy;
	int			error;
	ECAT_FOE_CALLBACK	callback;
	void*		arg;
	uint16_t	*varState;				// per la funzione di callback, gli indirizzi ove
	uint16_t	*varError;				// scrivere rispettivamente lo stato della
	uint32_t	*varErrCode;			// transizione e gli eventuali errori
	uint32_t	*varSizeLeft;			// dimensione rimasta del file in scrittura/lettura
	int         ownerFoE;				// indice dell'asse assegnatario del file FoE
} ECAT_FOE_OBJ;

#define ECAT_FOE_OBJ_LEN	sizeof(ECAT_FOE_OBJ)

#endif

