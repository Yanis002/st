#pragma once

#include "Item/Item.hpp"
#include "types.h"

class UnkStruct_ov000_02067bc4 {
public:
    /* 00 */ virtual unk32 vfunc_00();
    /* 04 */ virtual unk32 vfunc_04();
    /* 08 */ virtual unk32 vfunc_08();

    UnkStruct_ov000_02067bc4 *func_ov000_02067bc4(unk32);
    void func_ov000_02067cf8(ItemId itemId, unk32 param2, unk32 *param3);
};

extern UnkStruct_ov000_02067bc4 data_ov000_020b504c;
