/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __SCREEN_ECATREGISTERS_H_
#define __SCREEN_ECATREGISTERS_H_
#ifdef __cplusplus
extern "C" {
#endif

extern smSlaveInformation * SLAVE_INFO_shm;
extern sem_t* SLAVE_INFO_sem;
extern smESCregisters *ESC_shm;
extern sem_t* ESC_sem;
extern volatile int net_row_sel;

extern void ECAT_reset_ESC_registers ( void );
extern void set_style_row_0_table(lv_obj_t *table);
extern void scrECATregs_init(void);
extern void update_scrECATregs(void);

#ifdef __cplusplus
}
#endif
#endif /* __SCREEN_ECATREGISTERS_H_ */
