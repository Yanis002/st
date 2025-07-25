#pragma once

#include "nitro/math.h"
#include "types.h"

class UnkStruct_func_01fff3b4_ret {
public:
    /* 00 */ unk8 mUnk_00[0xE8];
    /* e8 */ Vec3p mPos;

    void func_ov062_02158ce8();
};

class UnkStruct_027e0ce4 {
public:
    UnkStruct_func_01fff3b4_ret *func_01fff3b4(volatile unk32 param1);
};

extern UnkStruct_027e0ce4 *data_027e0ce4;
