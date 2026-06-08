# EthercatTestWin

Questo progetto combina le interfacce per LVGL create mediante GUI-Guider di NxP con il driver EtherCAT per iMX95.

Il progetto fa uso del sistema delle memorie condivise di Linux per ricavare i dati necessari dal driver e popolare gli appositi widget nelle schermate.

## Installare le dipendenze su scheda iMX95



## Compilare il progetto

Per compilare il progetto è necessario inviarlo al target oppure cross-compilarlo in locale.
Il progetto fa uso di CMake.

Se presente, la cartella *build* conterrà già il Makefile pronto per la compilazione, e basterà lanciare il comando **make** all'interno della cartella *build*.

In alternativa, per compilare da zero il progetto, eliminare la cartella *build*.
Assicurarsi che i file *lv_conf.h* e *lv_conf_ext.h* siano nella directory corrente, ed assicurarsi che le **define**  contenute rispettino i requisiti del nostro sistema.
Se presente, cancellare il file *CMakeCache.txt*, e proseguire con une dei seguenti metodi:

### Cross-compilazione locale

Per compilare in locale è consigliato installare Windows Subsystem fo Linux (WSL) se non lo si dispone già.

``` bash
wsl --install
```

Per la cross-compilazione in locale sono necessari alcuni pacchetti, elencati nel file *Dependencies.txt*.
Per installarli eseguire il comando:

``` bash
su
dpkg --add-architecture arm64
apt-get update
apt install gcc-aarch64-linux-gnu
apt install g++-aarch64-linux-gnu
apt install pkg-config
apt install cmake
apt install wayland-protocols 
apt install libwayland-dev libwayland-bin libxkbcommon-dev
apt install libwayland-dev:arm64 libxkbcommon-dev:arm64
apt install libdrm-dev libdrm-dev:arm64
```

Poi compilare con:

``` bash
rm -rf build/
mkdir build && cd build
cmake .. \
  -DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc \
  -DCMAKE_CXX_COMPILER=aarch64-linux-gnu-g++ \
  -DCMAKE_SYSTEM_NAME=Linux \
  -DCMAKE_SYSTEM_PROCESSOR=aarch64 \
  -DCONFIG_LV_BUILD_EXAMPLES=OFF \
  -DCONFIG_LV_BUILD_DEMOS=OFF
make -j$(nproc)
```

A questo punto 

Il problema della cross-compilazione di questo progetto è che richiede diversi moduli compilati per arm64, ed è facile che qualcosa si rompa.
Per questo motivo io consiglio la soluzione seguente.

### Compilazione sul target

Per compilare direttamente sul target inviare l'intero progetto tramite comando:

``` bash
scp -r .\ root@<ip>:<percorso_in_cui_copiare>
```

È necessario installare le dipendenze come nel caso di cross-compilazione, ma in questo caso 
non dovendo gestire pacchetti per diverse architetture è meno probabile incappare in errori.

Spostarsi sulla directory appena copiata ed eseguire:

``` bash
cmake -B build
cd build
make
```

In questo modo verrà prodotto l'eseguibile *gui_guider* che lancerà la vostra finestra.

Qualora apportaste delle modifiche ai file in *custom/* o *generated/*, sarà sufficiente copiare questi file nelle rispettive cartelle sul target e lanciare nuovamente **make** all'interno della cartella *build* per compilare il nuovo progetto, senza dover ricompilare il tutto con CMake. 



### Meccanismo delle Shared Memory

Il progetto sfrutta il sistema delle shared memory di Linux per la comunicazione dei dati Intra-Processo.

Le shared memory, o *shm*, sono delle aree di memoria comune che il sistema operativo mette a disposizione dei processi.
Linux crea fisicamente dei file nella directory */dev/shm* che i programmi possono aprire in maniera analoga a come si apre un normale file:

``` C
int file_descriptor = shm_open("<nome_del_file_in_/dev/shm>", O_CREAT | O_RDWR, 0666);

/*
Le flag messe in OR, O_CREAT e O_RDWR indicano che il SO deve creare un file se non ne esiste uno
con il nome specificato e che deve aprirlo in modalità ReadWrite.

Il valore in base 8 0666 indica la bitmask per l'accesso al file (user-group-other, e per ciascuno read-write-execute)

Per ulteriori informazioni: https://man7.org/linux/man-pages/man3/shm_open.3.html
*/
```

Terminata la chiamata a *shm_open*, a meno di errori, potremmo trovare in */dev/shm* il nostro file appena creato.

È necessario ora comunicare al SO la dimensione della regione di memoria condivisa (e quindi del file).

``` C
ftruncate(file_descriptor, <size_in_bytes>);
/*
Per ulteriori informazioni: https://man7.org/linux/man-pages/man3/ftruncate.3p.html
*/
```

Ed infine mappare la memoria condivisa nella memoria del processo:

``` C
struct <struttura_dati_da_condividere>* shm; //!!Deve essere un puntatore!!

shm = mmap(NULL, sizeof(<struttura_dati_da_condividere>), PROT_READ| PROT_WRITE, MAP_SHARED, file_descriptor, 0);
/*
Per ulteriori informazioni: https://man7.org/linux/man-pages/man2/mmap.2.html
*/
```

A questo punto è buona norma chiudere il file aperto con *shm_open*. Questo **NON** invaliderà la regione
in memoria, che potrà continuare ad essere utilizzata per la condivisione dei dati:

``` C
close(file_descriptor);
```

