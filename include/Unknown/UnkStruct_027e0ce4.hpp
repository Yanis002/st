#pragma once

#include "nitro/math.h"
#include "types.h"

struct UnkStruct_func_01fff3b4_ret {
    /* 00 */ unk8 mUnk_00[0xE8];
    /* e8 */ Vec3p mPos;
};

class UnkStruct_027e0ce4 {
public:
    UnkStruct_func_01fff3b4_ret *func_01fff3b4(unk32 param1);
};

extern UnkStruct_027e0ce4 *data_027e0ce4;
