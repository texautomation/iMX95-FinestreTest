# File Sorgenti

## custom.c/custom.h

Sono i principali file da modificare per implementare codice custom.
Il main() (contenuto in ports/linux/main.c) esegue una chiamata a custom_init(). In questo modo possiamo far eseguire il nostro codice.

Il codice deve aprire i file di memoria condivisa, così come dei semafori che ne regolano scrittura e lettura. Per fare ciò è stato inserito codice nel seguente formato per ciascuna delle quattro strutture dati di nostro interesse (*smESCregisters*, *smNetworkLogger*, *smSlaveInformation* e *smSlaveData*):

``` C
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
```

**IMPORTANTISSIMO**: Ricordarsi di liberare i semafori quando si termina il processo.
Per questo motivo è stata introdotta la funzione *sem_cleanup*:
``` C
static void sem_cleanup(void)
{
    sem_post(ESC_sem);
    sem_post(NETLOG_sem);
    sem_post(SLAVE_INFO_sem);
    sem_post(SLAVE_DATA_sem);
}
```

## ecatSharedMemory.h

Questo header contiene tutte le definizioni di strutture e macro che permettono di accedere alle aree di memoria condivisa con il driver EtherCAT.
È **fondamentale** che questo file sia condiviso con il progetto del driver EtherCAT, altrimenti i dati in memoria potrebbero non corrispondere.


## Regole Generali

Sarebbe buona norma tenere tutte le **#define** e **typedef** nei file header, e nei sorgenti solo le inclusioni di queste ultime.
Questo serve ad assicurarsi che tutti i sorgenti vedano le stesse definizioni, e si riduce il rischio di incorrere in bug