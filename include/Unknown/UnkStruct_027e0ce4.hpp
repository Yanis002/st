#pragma once

#include "nitro/math.h"
#include "types.h"

class UnkStruct_func_01fff3b4_ret {
public:
    /* 00 */ unk8 mUnk_00[0x48];
    /* 48 */ unk8 mUnk_48;
    /* 48 */ unk8 mUnk_49;
    /* 48 */ unk8 mUnk_4a;
    /* 48 */ unk8 mUnk_4b;
    /* 48 */ unk8 mUnk_4c[0x58 - 0x4C];
    /* 58 */ unk32 mUnk_58;
    /* 5c */ unk8 mUnk_5c[0xE8 - 0x5C];
    /* e8 */ Vec3p mPos;

    void func_ov062_02158ce8();
};

class UnkStruct_027e0ce4 {
public:
    UnkStruct_func_01fff3b4_ret *func_01fff3b4(unk32 param1);
};

extern UnkStruct_027e0ce4 *data_027e0ce4;
