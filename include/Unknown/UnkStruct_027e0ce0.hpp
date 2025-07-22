#pragma once

#include "global.h"
#include "types.h"

#include "System/SysNew.hpp"

// PlayerManager?
class UnkStruct_027e0ce0 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ unk32 mUnk_1c;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2c */ unk32 mUnk_2c;
    /* 30 */

    void func_01fff148();

    void func_ov000_0208a318(unk32 param1, unk32 param2, unk32 param3);

    void func_ov024_020d3d98(unk32 param1, unk32 param2);
    void func_ov024_020d3ee8(unk32, u16, unk32);

    void func_ov110_02185d3c(unk32 param1);
};

extern UnkStruct_027e0ce0 *data_027e0ce0;
