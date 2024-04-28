#ifndef RES_DEMO46_H
#define RES_DEMO46_H

#include "global.h"

enum DEMO46_RES_FILE_ID {
    /* BCKS */
    DEMO46_BCK_46_P1A_ALL_WAIT02_L=0x0,
    DEMO46_BCK_46_AJ_CUT01__WAIT_L=0x1,
    DEMO46_BCK_46_AJ_CUT17__WAIT_L=0x2,
    DEMO46_BCK_46_BA_CUT01__WAIT_L=0x3,
    DEMO46_BCK_46_BA_CUT17__WAIT_L=0x4,
    DEMO46_BCK_46_JI_CUT01__WAIT_L=0x5,
    DEMO46_BCK_46_JI_CUT17__WAIT_L=0x6,
    DEMO46_BCK_46_KO_CUT01__WAIT_L=0x7,
    DEMO46_BCK_46_OB_CUT01_16_WAIT_L=0x8,
    DEMO46_BCK_46_P1B_CUT01_15_WAIT_L=0x9,
    DEMO46_BCK_46_P1B_CUT16__LOOK_L=0xA,
    DEMO46_BCK_46_P1C_CUT16_WAIT_L=0xB,
    DEMO46_BCK_46_P2_1_CUT01_15_WAIT_L=0xC,
    DEMO46_BCK_46_P2_1_CUT16_WAIT_L=0xD,
    DEMO46_BCK_46_P2_2_ALL_WAIT_L=0xE,
    DEMO46_BCK_46_P2_3_ALL_WAIT_L=0xF,
    DEMO46_BCK_46_YM01_CUT1_16_WAIT_L=0x10,
    DEMO46_BCK_46_YM02_CUT1_16_WAIT_L=0x11,
    DEMO46_BCK_46_YW_CUT01_16_WAIT_L=0x12,
    DEMO46_BCK_46_LS_CUT01_WAIT_L=0x23,
    DEMO46_BCK_46_LS_CUT17_HANDWAVE_L=0x24,
    DEMO46_BCK_46_LS_CUT20_RUN_L=0x25,
    DEMO46_BCK_46_LS_CUT21_STOP_O=0x26,
    DEMO46_BCK_46_LS_CUT21_STOPWAIT_L=0x27,
    DEMO46_BCK_46_LS_CUT22_HANDUP_O=0x28,
    DEMO46_BCK_46_LS_CUT22_HANDWAVE_L=0x29,
    DEMO46_BCK_46_ZL_CUT01_WAIT_L=0x2A,
    DEMO46_BCK_46_ZL_CUT04_LOOKUP_O=0x2B,
    DEMO46_BCK_46_ZL_CUT04_LOOKUPWAIT_L=0x2C,
    DEMO46_BCK_46_ZL_CUT05_RLOOK_O=0x2D,
    DEMO46_BCK_46_ZL_CUT05_RLOOKWAIT_L=0x2E,
    DEMO46_BCK_46_ZL_CUT13_WAIT_L=0x2F,
    DEMO46_BCK_46_ZL_CUT14_HANDUP_O=0x30,
    DEMO46_BCK_46_ZL_CUT14_HANDUPWAIT_L=0x31,
    DEMO46_BCK_46_ZL_CUT15_RETURN_O=0x32,
    DEMO46_BCK_46_ZL_CUT23_WAIT_L=0x33,
    DEMO46_BCK_46_ZL_WINK_O=0x34,
    DEMO46_BCK_46_ZL_WINKWAIT_L=0x35,
    DEMO46_BCK_KJ_TORI=0x5C,
    DEMO46_BCK_05_KO2_CUT4_KYORO=0x61,
    DEMO46_BCK_05_KO_CUT5_BYEBYE=0x62,
    DEMO46_BCK_05_OB_CUT4_BYEBYE=0x63,
    DEMO46_BCK_05_YM01_CUT4_BYEBYE=0x64,
    DEMO46_BCK_05_YM02_CUT4_BYEBYE=0x65,
    DEMO46_BCK_05_YW_CUT4_BYEBYE=0x66,
    DEMO46_BCK_46_P2A_ALL_WAIT_L=0x69,
    DEMO46_BCK_46_P2B_ALL_WAIT_L=0x6A,
    DEMO46_BCK_46_P2C_CUT01_15_WAIT_L=0x6B,
    DEMO46_BCK_46_P2C_CUT16__WAIT_L=0x6C,
    
    /* BTP */
    DEMO46_BTP_46_AJ_CUT17__WAIT_L=0x13,
    DEMO46_BTP_46_BA_CUT01__WAIT_L=0x14,
    DEMO46_BTP_46_BA_CUT17__WAIT_L=0x15,
    DEMO46_BTP_46_JI_CUT17__WAIT_L=0x16,
    DEMO46_BTP_46_P1B_CUT01_15_WAIT_L=0x17,
    DEMO46_BTP_46_P1B_CUT16__LOOK_L=0x18,
    DEMO46_BTP_46_P1C_CUT16_WAIT_L=0x19,
    DEMO46_BTP_46_P2_1_CUT01_15_WAIT_L=0x1A,
    DEMO46_BTP_46_P2_1_CUT16_WAIT_L=0x1B,
    DEMO46_BTP_46_P2_2_ALL_WAIT_L=0x1C,
    DEMO46_BTP_46_LS_CUT01_WAIT_L=0x36,
    DEMO46_BTP_46_LS_CUT17_HANDWAVE_L=0x37,
    DEMO46_BTP_46_LS_CUT20_RUN_L=0x38,
    DEMO46_BTP_46_LS_CUT21_STOP_O=0x39,
    DEMO46_BTP_46_LS_CUT21_STOPWAIT_L=0x3A,
    DEMO46_BTP_46_LS_CUT22_HANDUP_O=0x3B,
    DEMO46_BTP_46_LS_CUT22_HANDWAVE_L=0x3C,
    DEMO46_BTP_46_ZL_CUT01_WAIT_L=0x3D,
    DEMO46_BTP_46_ZL_CUT04_LOOKUP_O=0x3E,
    DEMO46_BTP_46_ZL_CUT04_LOOKUPWAIT_L=0x3F,
    DEMO46_BTP_46_ZL_CUT05_RLOOK_O=0x40,
    DEMO46_BTP_46_ZL_CUT05_RLOOKWAIT_L=0x41,
    DEMO46_BTP_46_ZL_CUT13_WAIT_L=0x42,
    DEMO46_BTP_46_ZL_CUT14_HANDUP_O=0x43,
    DEMO46_BTP_46_ZL_CUT14_HANDUPWAIT_L=0x44,
    DEMO46_BTP_46_ZL_CUT15_RETURN_O=0x45,
    DEMO46_BTP_46_ZL_CUT23_WAIT_L=0x46,
    DEMO46_BTP_46_ZL_WINK_O=0x47,
    DEMO46_BTP_46_ZL_WINKWAIT_L=0x48,
    DEMO46_BTP_05_OB_CUT4_BYEBYE_HEAD=0x67,
    
    /* BDLM */
    DEMO46_BDL_BA=0x1D,
    DEMO46_BDL_OB_COMP=0x1E,
    DEMO46_BDL_P2_1=0x1F,
    DEMO46_BDL_P2_2=0x20,
    DEMO46_BDL_P2_3=0x21,
    DEMO46_BDL_YW_COMP=0x22,
    DEMO46_BDL_KO1_COMP=0x5D,
    DEMO46_BDL_KO2_COMP=0x5E,
    DEMO46_BDL_AJ=0x5F,
    DEMO46_BDL_JI=0x60,
    
    /* BTK */
    DEMO46_BTK_46_ZL_CUT01_WAIT_L=0x49,
    DEMO46_BTK_46_ZL_CUT04_LOOKUP_O=0x4A,
    DEMO46_BTK_46_ZL_CUT04_LOOKUPWAIT_L=0x4B,
    DEMO46_BTK_46_ZL_CUT05_RLOOK_O=0x4C,
    DEMO46_BTK_46_ZL_CUT05_RLOOKWAIT_L=0x4D,
    DEMO46_BTK_46_ZL_CUT13_WAIT_L=0x4E,
    DEMO46_BTK_46_ZL_CUT14_HANDUP_O=0x4F,
    DEMO46_BTK_46_ZL_CUT14_HANDUPWAIT_L=0x50,
    DEMO46_BTK_46_ZL_CUT15_RETURN_O=0x51,
    DEMO46_BTK_46_ZL_WINK_O=0x52,
    DEMO46_BTK_46_ZL_WINKWAIT_L=0x53,
    DEMO46_BTK_46_LS_CUT01_WAIT_L=0x54,
    DEMO46_BTK_46_LS_CUT17_HANDWAVE_L=0x55,
    DEMO46_BTK_46_LS_CUT20_RUN_L=0x56,
    DEMO46_BTK_46_LS_CUT21_STOP_O=0x57,
    DEMO46_BTK_46_LS_CUT21_STOPWAIT_L=0x58,
    DEMO46_BTK_46_LS_CUT22_HANDUP_O=0x59,
    DEMO46_BTK_46_LS_CUT22_HANDWAVE_L=0x5A,
    
    /* BDL */
    DEMO46_BDL_ASODA=0x5B,
    
    /* STB */
    DEMO46_STB_EPILOGUE=0x68,
};

enum DEMO46_RES_FILE_INDEX {
    /* BCKS */
    DEMO46_INDEX_BCK_46_P1A_ALL_WAIT02_L=0x8,
    DEMO46_INDEX_BCK_46_AJ_CUT01__WAIT_L=0x9,
    DEMO46_INDEX_BCK_46_AJ_CUT17__WAIT_L=0xA,
    DEMO46_INDEX_BCK_46_BA_CUT01__WAIT_L=0xB,
    DEMO46_INDEX_BCK_46_BA_CUT17__WAIT_L=0xC,
    DEMO46_INDEX_BCK_46_JI_CUT01__WAIT_L=0xD,
    DEMO46_INDEX_BCK_46_JI_CUT17__WAIT_L=0xE,
    DEMO46_INDEX_BCK_46_KO_CUT01__WAIT_L=0xF,
    DEMO46_INDEX_BCK_46_OB_CUT01_16_WAIT_L=0x10,
    DEMO46_INDEX_BCK_46_P1B_CUT01_15_WAIT_L=0x11,
    DEMO46_INDEX_BCK_46_P1B_CUT16__LOOK_L=0x12,
    DEMO46_INDEX_BCK_46_P1C_CUT16_WAIT_L=0x13,
    DEMO46_INDEX_BCK_46_P2_1_CUT01_15_WAIT_L=0x14,
    DEMO46_INDEX_BCK_46_P2_1_CUT16_WAIT_L=0x15,
    DEMO46_INDEX_BCK_46_P2_2_ALL_WAIT_L=0x16,
    DEMO46_INDEX_BCK_46_P2_3_ALL_WAIT_L=0x17,
    DEMO46_INDEX_BCK_46_YM01_CUT1_16_WAIT_L=0x18,
    DEMO46_INDEX_BCK_46_YM02_CUT1_16_WAIT_L=0x19,
    DEMO46_INDEX_BCK_46_YW_CUT01_16_WAIT_L=0x1A,
    DEMO46_INDEX_BCK_46_LS_CUT01_WAIT_L=0x1B,
    DEMO46_INDEX_BCK_46_LS_CUT17_HANDWAVE_L=0x1C,
    DEMO46_INDEX_BCK_46_LS_CUT20_RUN_L=0x1D,
    DEMO46_INDEX_BCK_46_LS_CUT21_STOP_O=0x1E,
    DEMO46_INDEX_BCK_46_LS_CUT21_STOPWAIT_L=0x1F,
    DEMO46_INDEX_BCK_46_LS_CUT22_HANDUP_O=0x20,
    DEMO46_INDEX_BCK_46_LS_CUT22_HANDWAVE_L=0x21,
    DEMO46_INDEX_BCK_46_ZL_CUT01_WAIT_L=0x22,
    DEMO46_INDEX_BCK_46_ZL_CUT04_LOOKUP_O=0x23,
    DEMO46_INDEX_BCK_46_ZL_CUT04_LOOKUPWAIT_L=0x24,
    DEMO46_INDEX_BCK_46_ZL_CUT05_RLOOK_O=0x25,
    DEMO46_INDEX_BCK_46_ZL_CUT05_RLOOKWAIT_L=0x26,
    DEMO46_INDEX_BCK_46_ZL_CUT13_WAIT_L=0x27,
    DEMO46_INDEX_BCK_46_ZL_CUT14_HANDUP_O=0x28,
    DEMO46_INDEX_BCK_46_ZL_CUT14_HANDUPWAIT_L=0x29,
    DEMO46_INDEX_BCK_46_ZL_CUT15_RETURN_O=0x2A,
    DEMO46_INDEX_BCK_46_ZL_CUT23_WAIT_L=0x2B,
    DEMO46_INDEX_BCK_46_ZL_WINK_O=0x2C,
    DEMO46_INDEX_BCK_46_ZL_WINKWAIT_L=0x2D,
    DEMO46_INDEX_BCK_KJ_TORI=0x2E,
    DEMO46_INDEX_BCK_05_KO2_CUT4_KYORO=0x2F,
    DEMO46_INDEX_BCK_05_KO_CUT5_BYEBYE=0x30,
    DEMO46_INDEX_BCK_05_OB_CUT4_BYEBYE=0x31,
    DEMO46_INDEX_BCK_05_YM01_CUT4_BYEBYE=0x32,
    DEMO46_INDEX_BCK_05_YM02_CUT4_BYEBYE=0x33,
    DEMO46_INDEX_BCK_05_YW_CUT4_BYEBYE=0x34,
    DEMO46_INDEX_BCK_46_P2A_ALL_WAIT_L=0x35,
    DEMO46_INDEX_BCK_46_P2B_ALL_WAIT_L=0x36,
    DEMO46_INDEX_BCK_46_P2C_CUT01_15_WAIT_L=0x37,
    DEMO46_INDEX_BCK_46_P2C_CUT16__WAIT_L=0x38,
    
    /* BTP */
    DEMO46_INDEX_BTP_46_AJ_CUT17__WAIT_L=0x3B,
    DEMO46_INDEX_BTP_46_BA_CUT01__WAIT_L=0x3C,
    DEMO46_INDEX_BTP_46_BA_CUT17__WAIT_L=0x3D,
    DEMO46_INDEX_BTP_46_JI_CUT17__WAIT_L=0x3E,
    DEMO46_INDEX_BTP_46_P1B_CUT01_15_WAIT_L=0x3F,
    DEMO46_INDEX_BTP_46_P1B_CUT16__LOOK_L=0x40,
    DEMO46_INDEX_BTP_46_P1C_CUT16_WAIT_L=0x41,
    DEMO46_INDEX_BTP_46_P2_1_CUT01_15_WAIT_L=0x42,
    DEMO46_INDEX_BTP_46_P2_1_CUT16_WAIT_L=0x43,
    DEMO46_INDEX_BTP_46_P2_2_ALL_WAIT_L=0x44,
    DEMO46_INDEX_BTP_46_LS_CUT01_WAIT_L=0x45,
    DEMO46_INDEX_BTP_46_LS_CUT17_HANDWAVE_L=0x46,
    DEMO46_INDEX_BTP_46_LS_CUT20_RUN_L=0x47,
    DEMO46_INDEX_BTP_46_LS_CUT21_STOP_O=0x48,
    DEMO46_INDEX_BTP_46_LS_CUT21_STOPWAIT_L=0x49,
    DEMO46_INDEX_BTP_46_LS_CUT22_HANDUP_O=0x4A,
    DEMO46_INDEX_BTP_46_LS_CUT22_HANDWAVE_L=0x4B,
    DEMO46_INDEX_BTP_46_ZL_CUT01_WAIT_L=0x4C,
    DEMO46_INDEX_BTP_46_ZL_CUT04_LOOKUP_O=0x4D,
    DEMO46_INDEX_BTP_46_ZL_CUT04_LOOKUPWAIT_L=0x4E,
    DEMO46_INDEX_BTP_46_ZL_CUT05_RLOOK_O=0x4F,
    DEMO46_INDEX_BTP_46_ZL_CUT05_RLOOKWAIT_L=0x50,
    DEMO46_INDEX_BTP_46_ZL_CUT13_WAIT_L=0x51,
    DEMO46_INDEX_BTP_46_ZL_CUT14_HANDUP_O=0x52,
    DEMO46_INDEX_BTP_46_ZL_CUT14_HANDUPWAIT_L=0x53,
    DEMO46_INDEX_BTP_46_ZL_CUT15_RETURN_O=0x54,
    DEMO46_INDEX_BTP_46_ZL_CUT23_WAIT_L=0x55,
    DEMO46_INDEX_BTP_46_ZL_WINK_O=0x56,
    DEMO46_INDEX_BTP_46_ZL_WINKWAIT_L=0x57,
    DEMO46_INDEX_BTP_05_OB_CUT4_BYEBYE_HEAD=0x58,
    
    /* BDLM */
    DEMO46_INDEX_BDL_BA=0x5B,
    DEMO46_INDEX_BDL_OB_COMP=0x5C,
    DEMO46_INDEX_BDL_P2_1=0x5D,
    DEMO46_INDEX_BDL_P2_2=0x5E,
    DEMO46_INDEX_BDL_P2_3=0x5F,
    DEMO46_INDEX_BDL_YW_COMP=0x60,
    DEMO46_INDEX_BDL_KO1_COMP=0x61,
    DEMO46_INDEX_BDL_KO2_COMP=0x62,
    DEMO46_INDEX_BDL_AJ=0x63,
    DEMO46_INDEX_BDL_JI=0x64,
    
    /* BTK */
    DEMO46_INDEX_BTK_46_ZL_CUT01_WAIT_L=0x67,
    DEMO46_INDEX_BTK_46_ZL_CUT04_LOOKUP_O=0x68,
    DEMO46_INDEX_BTK_46_ZL_CUT04_LOOKUPWAIT_L=0x69,
    DEMO46_INDEX_BTK_46_ZL_CUT05_RLOOK_O=0x6A,
    DEMO46_INDEX_BTK_46_ZL_CUT05_RLOOKWAIT_L=0x6B,
    DEMO46_INDEX_BTK_46_ZL_CUT13_WAIT_L=0x6C,
    DEMO46_INDEX_BTK_46_ZL_CUT14_HANDUP_O=0x6D,
    DEMO46_INDEX_BTK_46_ZL_CUT14_HANDUPWAIT_L=0x6E,
    DEMO46_INDEX_BTK_46_ZL_CUT15_RETURN_O=0x6F,
    DEMO46_INDEX_BTK_46_ZL_WINK_O=0x70,
    DEMO46_INDEX_BTK_46_ZL_WINKWAIT_L=0x71,
    DEMO46_INDEX_BTK_46_LS_CUT01_WAIT_L=0x72,
    DEMO46_INDEX_BTK_46_LS_CUT17_HANDWAVE_L=0x73,
    DEMO46_INDEX_BTK_46_LS_CUT20_RUN_L=0x74,
    DEMO46_INDEX_BTK_46_LS_CUT21_STOP_O=0x75,
    DEMO46_INDEX_BTK_46_LS_CUT21_STOPWAIT_L=0x76,
    DEMO46_INDEX_BTK_46_LS_CUT22_HANDUP_O=0x77,
    DEMO46_INDEX_BTK_46_LS_CUT22_HANDWAVE_L=0x78,
    
    /* BDL */
    DEMO46_INDEX_BDL_ASODA=0x7B,
    
    /* STB */
    DEMO46_INDEX_STB_EPILOGUE=0x7E,
};

#endif /* RES_DEMO46_H */