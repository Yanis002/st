#pragma once

#include "global.h"
#include "types.h"

#include "System/SysNew.hpp"

class UnkStruct_ov110_021861ec {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 08 */ unk32 mUnk_0c;
    /* 08 */ unk32 mUnk_10;
    /* 14 */

    ARM UnkStruct_ov110_021861ec(unk32 param1, unk32 param2, unk32 param3) {
        this->mUnk_00 = param1;
        this->mUnk_04 = param2;
        this->mUnk_08 = param3;
    }
};

class PlayerGet {
public:
    void func_ov110_02184a40();
    void func_ov110_02184dac();
    void func_ov110_02184ddc();
    void func_ov110_02184e7c();
    void func_ov110_02184f40();
    void func_ov110_0218500c();
    void func_ov110_021855e4();
    void func_ov110_02185cb4();
    void func_ov110_02185d30();
    void func_ov110_02185d3c();
    void func_ov110_02185da4();
    void func_ov110_02185db4();

    // Japanese version only
    void func_ov110_02186b8c();
};

extern UnkStruct_ov110_021861ec data_ov110_021861ec;
