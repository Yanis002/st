#pragma once

#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "types.h"

class UnkStruct_func_01fff520_ret {
public:
    void func_ov031_02103878();
};

class UnkStruct_027e0ce8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ UnkStruct_func_01fff520_ret **mUnk_08;

    UnkStruct_func_01fff520_ret **func_01fff520(UnkStruct_ov000_020b34c4 *param1, unk32);
    unk32 func_01fff498(UnkStruct_ov000_0208f820_04 param1);
};

extern UnkStruct_027e0ce8 *data_027e0ce8;
