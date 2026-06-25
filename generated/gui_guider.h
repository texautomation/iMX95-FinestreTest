/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"


typedef struct
{
  
	lv_obj_t *scrMain;
	bool scrMain_del;
	lv_obj_t *scrMain_contLogo;
	lv_obj_t *scrMain_imgLogo;
	lv_obj_t *scrMain_contAdmin;
	lv_obj_t *scrMain_labelAdmin;
	lv_obj_t *scrMain_contParam;
	lv_obj_t *scrMain_labelParam;
	lv_obj_t *scrMain_cont_6;
	lv_obj_t *scrMain_label_6;
	lv_obj_t *scrMain_cont_5;
	lv_obj_t *scrMain_label_5;
	lv_obj_t *scrMain_contDiag;
	lv_obj_t *scrMain_labelDiag;
	lv_obj_t *scrMain_contDisco;
	lv_obj_t *scrMain_labelDisco;
	lv_obj_t *scrMain_contEditor;
	lv_obj_t *scrMain_labelEditor;
	lv_obj_t *scrMain_contManual;
	lv_obj_t *scrMain_labelManual;
	lv_obj_t *scrMain_contAlarm;
	lv_obj_t *scrMain_taAlarm;
	lv_obj_t *scrSelect;
	bool scrSelect_del;
	lv_obj_t *scrSelect_cont_8;
	lv_obj_t *scrSelect_label_8;
	lv_obj_t *scrSelect_cont_7;
	lv_obj_t *scrSelect_label_7;
	lv_obj_t *scrSelect_cont_6;
	lv_obj_t *scrSelect_label_6;
	lv_obj_t *scrSelect_cont_5;
	lv_obj_t *scrSelect_label_5;
	lv_obj_t *scrSelect_cont_4;
	lv_obj_t *scrSelect_label_4;
	lv_obj_t *scrSelect_contCNC;
	lv_obj_t *scrSelect_labelCNC;
	lv_obj_t *scrSelect_contECATWin;
	lv_obj_t *scrSelect_labelECATWin;
	lv_obj_t *scrSelect_contMain;
	lv_obj_t *scrSelect_labelMain;
	lv_obj_t *scrSelect_contAlarm;
	lv_obj_t *scrSelect_taAlarm;
	lv_obj_t *scrECATnet;
	bool scrECATnet_del;
	lv_obj_t *scrECATnet_contToolbar;
	lv_obj_t *scrECATnet_contRestart;
	lv_obj_t *scrECATnet_labelRestart;
	lv_obj_t *scrECATnet_contReset;
	lv_obj_t *scrECATnet_labelReset;
	lv_obj_t *scrECATnet_contDown;
	lv_obj_t *scrECATnet_imgDown;
	lv_obj_t *scrECATnet_contUp;
	lv_obj_t *scrECATnet_imgUp;
	lv_obj_t *scrECATnet_contEnd;
	lv_obj_t *scrECATnet_imgEnd;
	lv_obj_t *scrECATnet_contHome;
	lv_obj_t *scrECATnet_imgHome;
	lv_obj_t *scrECATnet_contExport;
	lv_obj_t *scrECATnet_labelExport;
	lv_obj_t *scrECATnet_contBand;
	lv_obj_t *scrECATnet_imgBand;
	lv_obj_t *scrECATnet_contLost;
	lv_obj_t *scrECATnet_imgLost;
	lv_obj_t *scrECATnet_contRegs;
	lv_obj_t *scrECATnet_imgRegs;
	lv_obj_t *scrECATnet_contMsgs;
	lv_obj_t *scrECATnet_imgMsgs;
	lv_obj_t *scrECATnet_contNet;
	lv_obj_t *scrECATnet_labelNet;
	lv_obj_t *scrECATnet_contUndo;
	lv_obj_t *scrECATnet_labelUndo;
	lv_obj_t *scrECATnet_contMain;
	lv_obj_t *scrECATnet_labelMain;
	lv_obj_t *scrECATnet_contWin;
	lv_obj_t *scrECATnet_contInfo;
	lv_obj_t *scrECATnet_tableDC;
	lv_obj_t *scrECATnet_tableInfo;
	lv_obj_t *scrECATnet_contAL;
	lv_obj_t *scrECATnet_tableEmcy;
	lv_obj_t *scrECATnet_tableAL;
	lv_obj_t *scrECATnet_contOutput;
	lv_obj_t *scrECATnet_tableOutput;
	lv_obj_t *scrECATnet_contTitleOutput;
	lv_obj_t *scrECATnet_labelTitleOutput3;
	lv_obj_t *scrECATnet_labelTitleOutput2;
	lv_obj_t *scrECATnet_labelTitleOutput1;
	lv_obj_t *scrECATnet_contInput;
	lv_obj_t *scrECATnet_tableInput;
	lv_obj_t *scrECATnet_contTitleInput;
	lv_obj_t *scrECATnet_labelTitleInput3;
	lv_obj_t *scrECATnet_labelTitleInput2;
	lv_obj_t *scrECATnet_labelTitleInput1;
	lv_obj_t *scrECATnet_contSlave;
	lv_obj_t *scrECATnet_tableSlave;
	lv_obj_t *scrECATnet_contConfig;
	lv_obj_t *scrECATnet_tableConfig;
	lv_obj_t *scrECATnet_contNetwork;
	lv_obj_t *scrECATnet_tableNetwork;
	lv_obj_t *scrECATnet_labelTitle;
	lv_obj_t *scrECATnet_contAlarm;
	lv_obj_t *scrECATnet_taAlarm;
	lv_obj_t *scrECATmsgs;
	bool scrECATmsgs_del;
	lv_obj_t *scrECATmsgs_contToolbar;
	lv_obj_t *scrECATmsgs_contRestart;
	lv_obj_t *scrECATmsgs_labelRestart;
	lv_obj_t *scrECATmsgs_contReset;
	lv_obj_t *scrECATmsgs_labelReset;
	lv_obj_t *scrECATmsgs_contDown;
	lv_obj_t *scrECATmsgs_imgDown;
	lv_obj_t *scrECATmsgs_contUp;
	lv_obj_t *scrECATmsgs_imgUp;
	lv_obj_t *scrECATmsgs_contEnd;
	lv_obj_t *scrECATmsgs_imgEnd;
	lv_obj_t *scrECATmsgs_contHome;
	lv_obj_t *scrECATmsgs_imgHome;
	lv_obj_t *scrECATmsgs_contExport;
	lv_obj_t *scrECATmsgs_labelExport;
	lv_obj_t *scrECATmsgs_contBand;
	lv_obj_t *scrECATmsgs_imgBand;
	lv_obj_t *scrECATmsgs_contLost;
	lv_obj_t *scrECATmsgs_imgLost;
	lv_obj_t *scrECATmsgs_contRegs;
	lv_obj_t *scrECATmsgs_imgRegs;
	lv_obj_t *scrECATmsgs_contMsgs;
	lv_obj_t *scrECATmsgs_labelMsgs;
	lv_obj_t *scrECATmsgs_contNet;
	lv_obj_t *scrECATmsgs_imgNet;
	lv_obj_t *scrECATmsgs_contUndo;
	lv_obj_t *scrECATmsgs_labelUndo;
	lv_obj_t *scrECATmsgs_contMain;
	lv_obj_t *scrECATmsgs_labelMain;
	lv_obj_t *scrECATmsgs_contWin;
	lv_obj_t *scrECATmsgs_contError;
	lv_obj_t *scrECATmsgs_tableError;
	lv_obj_t *scrECATmsgs_contTitleError;
	lv_obj_t *scrECATmsgs_labelError;
	lv_obj_t *scrECATmsgs_contWarning;
	lv_obj_t *scrECATmsgs_tableWarning;
	lv_obj_t *scrECATmsgs_contTitleWarning;
	lv_obj_t *scrECATmsgs_labelWarning;
	lv_obj_t *scrECATmsgs_contInfo;
	lv_obj_t *scrECATmsgs_tableInfo;
	lv_obj_t *scrECATmsgs_contTitleInfo;
	lv_obj_t *scrECATmsgs_labelInfo;
	lv_obj_t *scrECATmsgs_contDebug;
	lv_obj_t *scrECATmsgs_tableDebug;
	lv_obj_t *scrECATmsgs_contTitleDebug;
	lv_obj_t *scrECATmsgs_labelDebug;
	lv_obj_t *scrECATmsgs_contConfig;
	lv_obj_t *scrECATmsgs_contConfigData5;
	lv_obj_t *scrECATmsgs_labelConfigData5;
	lv_obj_t *scrECATmsgs_contConfigData4;
	lv_obj_t *scrECATmsgs_labelConfigData4;
	lv_obj_t *scrECATmsgs_contConfigData3;
	lv_obj_t *scrECATmsgs_labelConfigData3;
	lv_obj_t *scrECATmsgs_contConfigData2;
	lv_obj_t *scrECATmsgs_labelConfigData2;
	lv_obj_t *scrECATmsgs_contConfigData1;
	lv_obj_t *scrECATmsgs_labelConfigData1;
	lv_obj_t *scrECATmsgs_contConfigTitle5;
	lv_obj_t *scrECATmsgs_labelConfigTitle5;
	lv_obj_t *scrECATmsgs_contConfigTitle4;
	lv_obj_t *scrECATmsgs_labelConfigTitle4;
	lv_obj_t *scrECATmsgs_contConfigTitle3;
	lv_obj_t *scrECATmsgs_labelConfigTitle3;
	lv_obj_t *scrECATmsgs_contConfigTitle2;
	lv_obj_t *scrECATmsgs_labelConfigTitle2;
	lv_obj_t *scrECATmsgs_contConfigTitle1;
	lv_obj_t *scrECATmsgs_labelConfigTitle1;
	lv_obj_t *scrECATmsgs_contNetwork;
	lv_obj_t *scrECATmsgs_contNetworkData4;
	lv_obj_t *scrECATmsgs_labelNetworkData4;
	lv_obj_t *scrECATmsgs_contNetworkData3;
	lv_obj_t *scrECATmsgs_labelNetworkData3;
	lv_obj_t *scrECATmsgs_contNetworkData2;
	lv_obj_t *scrECATmsgs_labelNetworkData2;
	lv_obj_t *scrECATmsgs_contNetworkData1;
	lv_obj_t *scrECATmsgs_labelNetworkData1;
	lv_obj_t *scrECATmsgs_contNetworkTitle4;
	lv_obj_t *scrECATmsgs_labelNetworkTitle4;
	lv_obj_t *scrECATmsgs_contNetworkTitle3;
	lv_obj_t *scrECATmsgs_labelNetworkTitle3;
	lv_obj_t *scrECATmsgs_contNetworkTitle2;
	lv_obj_t *scrECATmsgs_labelNetworkTitle2;
	lv_obj_t *scrECATmsgs_contNetworkTitle1;
	lv_obj_t *scrECATmsgs_labelNetworkTitle1;
	lv_obj_t *scrECATmsgs_labelTitle;
	lv_obj_t *scrECATmsgs_contAlarm;
	lv_obj_t *scrECATmsgs_taAlarm;
	lv_obj_t *scrECATregs;
	bool scrECATregs_del;
	lv_obj_t *scrECATregs_contToolbar;
	lv_obj_t *scrECATregs_contRestart;
	lv_obj_t *scrECATregs_labelRestart;
	lv_obj_t *scrECATregs_contReset;
	lv_obj_t *scrECATregs_labelReset;
	lv_obj_t *scrECATregs_contDown;
	lv_obj_t *scrECATregs_imgDown;
	lv_obj_t *scrECATregs_contUp;
	lv_obj_t *scrECATregs_imgUp;
	lv_obj_t *scrECATregs_contEnd;
	lv_obj_t *scrECATregs_imgEnd;
	lv_obj_t *scrECATregs_contHome;
	lv_obj_t *scrECATregs_imgHome;
	lv_obj_t *scrECATregs_contExport;
	lv_obj_t *scrECATregs_labelExport;
	lv_obj_t *scrECATregs_contBand;
	lv_obj_t *scrECATregs_imgBand;
	lv_obj_t *scrECATregs_contLost;
	lv_obj_t *scrECATregs_imgLost;
	lv_obj_t *scrECATregs_contRegs;
	lv_obj_t *scrECATregs_labelRegs;
	lv_obj_t *scrECATregs_contMsgs;
	lv_obj_t *scrECATregs_imgMsgs;
	lv_obj_t *scrECATregs_contNet;
	lv_obj_t *scrECATregs_imgNet;
	lv_obj_t *scrECATregs_contUndo;
	lv_obj_t *scrECATregs_labelUndo;
	lv_obj_t *scrECATregs_contMain;
	lv_obj_t *scrECATregs_labelMain;
	lv_obj_t *scrECATregs_contWin;
	lv_obj_t *scrECATregs_contLL;
	lv_obj_t *scrECATregs_tableLL;
	lv_obj_t *scrECATregs_contPDI;
	lv_obj_t *scrECATregs_tablePDI;
	lv_obj_t *scrECATregs_contPU;
	lv_obj_t *scrECATregs_tablePU;
	lv_obj_t *scrECATregs_contFwRxError;
	lv_obj_t *scrECATregs_tableFwRxError;
	lv_obj_t *scrECATregs_contRxError;
	lv_obj_t *scrECATregs_tableRxError;
	lv_obj_t *scrECATregs_contEscDLStatus;
	lv_obj_t *scrECATregs_tableEscDLStatus;
	lv_obj_t *scrECATregs_contSlave;
	lv_obj_t *scrECATregs_tableSlave;
	lv_obj_t *scrECATregs_contSlaveTitle;
	lv_obj_t *scrECATregs_labelSlaveTitle2;
	lv_obj_t *scrECATregs_labelSlaveTitle1;
	lv_obj_t *scrECATregs_labelTitle;
	lv_obj_t *scrECATregs_contAlarm;
	lv_obj_t *scrECATregs_taAlarm;
	lv_obj_t *scrECATlost;
	bool scrECATlost_del;
	lv_obj_t *scrECATlost_contToolbar;
	lv_obj_t *scrECATlost_contRestart;
	lv_obj_t *scrECATlost_labelRestart;
	lv_obj_t *scrECATlost_contReset;
	lv_obj_t *scrECATlost_labelReset;
	lv_obj_t *scrECATlost_contDown;
	lv_obj_t *scrECATlost_imgDown;
	lv_obj_t *scrECATlost_contUp;
	lv_obj_t *scrECATlost_imgUp;
	lv_obj_t *scrECATlost_contEnd;
	lv_obj_t *scrECATlost_imgEnd;
	lv_obj_t *scrECATlost_contHome;
	lv_obj_t *scrECATlost_imgHome;
	lv_obj_t *scrECATlost_contExport;
	lv_obj_t *scrECATlost_labelExport;
	lv_obj_t *scrECATlost_contBand;
	lv_obj_t *scrECATlost_imgBand;
	lv_obj_t *scrECATlost_contLost;
	lv_obj_t *scrECATlost_labelLost;
	lv_obj_t *scrECATlost_contRegs;
	lv_obj_t *scrECATlost_imgRegs;
	lv_obj_t *scrECATlost_contMsgs;
	lv_obj_t *scrECATlost_imgMsgs;
	lv_obj_t *scrECATlost_contNet;
	lv_obj_t *scrECATlost_imgNet;
	lv_obj_t *scrECATlost_contUndo;
	lv_obj_t *scrECATlost_labelUndo;
	lv_obj_t *scrECATlost_contMain;
	lv_obj_t *scrECATlost_labelMain;
	lv_obj_t *scrECATlost_contWin;
	lv_obj_t *scrECATlost_contLostData;
	lv_obj_t *scrECATlost_tableLost;
	lv_obj_t *scrECATlost_contLostTitle;
	lv_obj_t *scrECATlost_labelLostTitle;
	lv_obj_t *scrECATlost_contSlaveData;
	lv_obj_t *scrECATlost_tableSlave;
	lv_obj_t *scrECATlost_contSlaveTitle;
	lv_obj_t *scrECATlost_labelSlaveTitle7;
	lv_obj_t *scrECATlost_labelSlaveTitle6;
	lv_obj_t *scrECATlost_labelSlaveTitle5;
	lv_obj_t *scrECATlost_labelSlaveTitle4;
	lv_obj_t *scrECATlost_labelSlaveTitle3;
	lv_obj_t *scrECATlost_labelSlaveTitle2;
	lv_obj_t *scrECATlost_labelSlaveTitle1;
	lv_obj_t *scrECATlost_contState;
	lv_obj_t *scrECATlost_contStateData;
	lv_obj_t *scrECATlost_labelStateData3;
	lv_obj_t *scrECATlost_labelStateData2;
	lv_obj_t *scrECATlost_labelStateData1;
	lv_obj_t *scrECATlost_contStateTitle;
	lv_obj_t *scrECATlost_labelStateTitle3;
	lv_obj_t *scrECATlost_labelStateTitle2;
	lv_obj_t *scrECATlost_labelStateTitle1;
	lv_obj_t *scrECATlost_labelTitle;
	lv_obj_t *scrECATlost_contAlarm;
	lv_obj_t *scrECATlost_taAlarm;
	lv_obj_t *scrECATband;
	bool scrECATband_del;
	lv_obj_t *scrECATband_contToolbar;
	lv_obj_t *scrECATband_contRestart;
	lv_obj_t *scrECATband_labelRestart;
	lv_obj_t *scrECATband_contReset;
	lv_obj_t *scrECATband_labelReset;
	lv_obj_t *scrECATband_contDown;
	lv_obj_t *scrECATband_imgDown;
	lv_obj_t *scrECATband_contUp;
	lv_obj_t *scrECATband_imgUp;
	lv_obj_t *scrECATband_contEnd;
	lv_obj_t *scrECATband_imgEnd;
	lv_obj_t *scrECATband_contHome;
	lv_obj_t *scrECATband_imgHome;
	lv_obj_t *scrECATband_cont_8;
	lv_obj_t *scrECATband_label_8;
	lv_obj_t *scrECATband_cont_7;
	lv_obj_t *scrECATband_label_7;
	lv_obj_t *scrECATband_contLost;
	lv_obj_t *scrECATband_imgLost;
	lv_obj_t *scrECATband_contRegs;
	lv_obj_t *scrECATband_imgRegs;
	lv_obj_t *scrECATband_contMsgs;
	lv_obj_t *scrECATband_imgMsgs;
	lv_obj_t *scrECATband_contNet;
	lv_obj_t *scrECATband_imgNet;
	lv_obj_t *scrECATband_contUndo;
	lv_obj_t *scrECATband_labelUndo;
	lv_obj_t *scrECATband_contMain;
	lv_obj_t *scrECATband_labelMain;
	lv_obj_t *scrECATband_contTable;
	lv_obj_t *scrECATband_table;
	lv_obj_t *scrECATband_lineSeparation;
	lv_obj_t *scrECATband_contBar6;
	lv_obj_t *scrECATband_bar6;
	lv_obj_t *scrECATband_labelBar6;
	lv_obj_t *scrECATband_contBar5;
	lv_obj_t *scrECATband_bar5;
	lv_obj_t *scrECATband_labelBar5;
	lv_obj_t *scrECATband_contBar4;
	lv_obj_t *scrECATband_bar4;
	lv_obj_t *scrECATband_labelBar4;
	lv_obj_t *scrECATband_contBar3;
	lv_obj_t *scrECATband_bar3;
	lv_obj_t *scrECATband_labelBar3;
	lv_obj_t *scrECATband_contBar2;
	lv_obj_t *scrECATband_bar2;
	lv_obj_t *scrECATband_labelBar2;
	lv_obj_t *scrECATband_contBar1;
	lv_obj_t *scrECATband_bar1;
	lv_obj_t *scrECATband_labelBar1;
	lv_obj_t *scrECATband_labelTitle;
	lv_obj_t *scrECATband_contAlarm;
	lv_obj_t *scrECATband_taAlarm;
	lv_obj_t *scrCNC;
	bool scrCNC_del;
	lv_obj_t *scrCNC_contAllarmi;
	lv_obj_t *scrCNC_contStato;
	lv_obj_t *scrCNC_contSpeed;
	lv_obj_t *scrCNC_contMenu;
	lv_obj_t *scrCNC_contAxes;
	lv_obj_t *scrCNC_contHeader;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_screen_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, uint32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                  uint32_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                  lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_completed_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_bottom_layer(void);

void setup_ui(lv_ui *ui);

void video_play(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_scrMain(lv_ui *ui);
void setup_scr_scrSelect(lv_ui *ui);
void setup_scr_scrECATnet(lv_ui *ui);
void setup_scr_scrECATmsgs(lv_ui *ui);
void setup_scr_scrECATregs(lv_ui *ui);
void setup_scr_scrECATlost(lv_ui *ui);
void setup_scr_scrECATband(lv_ui *ui);
void setup_scr_scrCNC(lv_ui *ui);
LV_IMAGE_DECLARE(_Logo1_Nero_RGB565A8_330x110);

LV_IMAGE_DECLARE(_Vuota_RGB565A8_160x160);
LV_IMAGE_DECLARE(_Down_RGB565A8_40x40);
LV_IMAGE_DECLARE(_Up_RGB565A8_40x40);
LV_IMAGE_DECLARE(_End_RGB565A8_40x40);
LV_IMAGE_DECLARE(_Home_RGB565A8_40x40);
LV_IMAGE_DECLARE(_banda_RGB565A8_100x100);
LV_IMAGE_DECLARE(_nodi_RGB565A8_100x100);
LV_IMAGE_DECLARE(_registri_RGB565A8_100x100);
LV_IMAGE_DECLARE(_log_RGB565A8_100x100);
LV_IMAGE_DECLARE(_main_RGB565A8_100x100);

LV_FONT_DECLARE(lv_font_montserratMedium_18)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_13)
LV_FONT_DECLARE(lv_font_montserratMedium_14)
LV_FONT_DECLARE(lv_font_montserratMedium_28)


#ifdef __cplusplus
}
#endif
#endif
