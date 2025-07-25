#pragma once

#include "types.h"

class UnkStruct_func_01fff520_ret {
public:
    void func_ov031_02103878();
};

class UnkStruct_027e0ce8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ UnkStruct_func_01fff520_ret* mUnk_08;

    UnkStruct_func_01fff520_ret* func_01fff520(unk32* param1, unk32);
    unk32 func_01fff498(unk32 param1);
};

extern UnkStruct_027e0ce8* data_027e0ce8;
