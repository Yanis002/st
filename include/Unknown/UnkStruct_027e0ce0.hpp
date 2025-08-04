#pragma once

#include "global.h"
#include "types.h"

#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"

// PlayerManager?
class UnkStruct_027e0ce0 {
public:
    /* 00 */ unk8 mHealth;
    /* 01 */ unk8 mHealthMax;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ unk32 *mUnk_08;
    /* 0c */ unk32 *mUnk_0c;
    /* 10 */ unk32 *mUnk_10;
    /* 14 */ unk32 *mUnk_14;
    /* 18 */ unk32 *mUnk_18;
    /* 1c */ unk32 *mUnk_1c;
    /* 20 */ unk32 *mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ ItemManager *mUnk_28;
    /* 2c */ ItemManager *mUnk_2c; // same as above
    /* 30 */ unk32 *mUnk_30; // ?
    /* 34 */ unk32 *mUnk_34;
    /* 38 */ unk32 *mUnk_38; // pointer to data_027e0478 when on the train
    /* 3c */ unk32 mUnk_3c;
    /* 40 */ unk32 *mUnk_40; // pointer to data_027e0478 when not on the train
    /* 44 */

    void func_01fff148();

    void func_ov000_0208a318(unk32 param1, unk32 param2, unk32 param3);

    void func_ov024_020d3d98(unk32 param1, unk32 param2);
    void func_ov024_020d3ee8(unk32, u16, unk32);

    void func_ov110_02185d3c(unk32 param1);
};

extern UnkStruct_027e0ce0 *data_027e0ce0;
