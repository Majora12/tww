//
// Generated by dtk
// Translation Unit: JASSimpleWaveBank.cpp
//

#include "JSystem/JAudio/JASSimpleWaveBank.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "dolphin/types.h"

/* 802864C8-80286528       .text __ct__Q28JASystem15TSimpleWaveBankFv */
JASystem::TSimpleWaveBank::TSimpleWaveBank() {
    mWaveTable = NULL;
    mWaveCount = 0;
}

/* 80286528-802865F4       .text __dt__Q28JASystem15TSimpleWaveBankFv */
JASystem::TSimpleWaveBank::~TSimpleWaveBank() {
    delete[] mWaveTable;
}

/* 802865F4-80286650       .text __dt__Q38JASystem15TSimpleWaveBank11TWaveHandleFv */
JASystem::TSimpleWaveBank::TWaveHandle::~TWaveHandle() {}

/* 80286650-8028670C       .text setWaveTableSize__Q28JASystem15TSimpleWaveBankFUl */
void JASystem::TSimpleWaveBank::setWaveTableSize(u32 size) {
    delete[] mWaveTable;
    mWaveTable = new (getCurrentHeap(), 0) TWaveHandle[size];
    JUT_ASSERT(34, mWaveTable != NULL);
    mWaveCount = size;
}

/* 8028670C-80286730       .text getWaveHandle__Q28JASystem15TSimpleWaveBankCFUl */
JASystem::TSimpleWaveBank::TWaveHandle* JASystem::TSimpleWaveBank::getWaveHandle(u32 no) const {
    if (no >= mWaveCount) {
        return NULL;
    }
    return &mWaveTable[no];
}

/* 80286730-802867D4       .text setWaveInfo__Q28JASystem15TSimpleWaveBankFUlRCQ28JASystem9TWaveInfo */
void JASystem::TSimpleWaveBank::setWaveInfo(u32 no, const JASystem::TWaveInfo& waveInfo) {
    mWaveTable[no].mWaveInfo = waveInfo;
    mWaveTable[no].mWaveInfo.field_0x24 = &field_0x4c;
    mWaveTable[no].mHeap = &mHeap;
}

/* 802867D4-802867F4       .text getWaveArc__Q28JASystem15TSimpleWaveBankFi */
JASystem::TWaveArc* JASystem::TSimpleWaveBank::getWaveArc(int no) {
    if (no != 0) {
        return NULL;
    }
    return this;
}
