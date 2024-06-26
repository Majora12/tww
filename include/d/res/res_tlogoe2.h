#ifndef RES_TLOGOE2_H
#define RES_TLOGOE2_H

#include "global.h"

#if VERSION == VERSION_PAL
enum TLOGOE2_RES_FILE_ID { // IDs and indexes are synced
    /* BCK */
    TLOGOE2_BCK_TITLE_SHIP=0x8,
    
    /* BDLM */
    TLOGOE2_BDL_SUBTITLE_KIRARI_E=0xB,
    TLOGOE2_BDL_SUBTITLE_START_ANIM_E=0xC,
    TLOGOE2_BDL_TITLE_SHIP=0xD,
    
    /* BPK */
    TLOGOE2_BPK_TITLE_SHIP=0x10,
    
    /* BTK */
    TLOGOE2_BTK_SUBTITLE_KIRARI_E=0x13,
    TLOGOE2_BTK_SUBTITLE_START_ANIM_E=0x14,
    
    /* SCRN */
    TLOGOE2_BLO_TITLE_LOGO_E=0x17,
    
    /* TIMG */
    TLOGOE2_BTI_C_NINTENDO_E=0x1A,
    TLOGOE2_BTI_DUMMY=0x1B,
    TLOGOE2_BTI_LOGO_ZELDA_JPA=0x1C,
    TLOGOE2_BTI_LOGO_ZELDA_MAIN=0x1D,
    TLOGOE2_BTI_PRESS_START=0x1E,
};
#endif

#endif /* RES_TLOGOE2_H */
