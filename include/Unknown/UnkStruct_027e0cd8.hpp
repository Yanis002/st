#pragma once

#include "nitro/math.h"
#include "types.h"

class UnkStruct_027e0cd8_0c {
public:
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0c */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1c */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual q20 vfunc_28(Vec3p *param1, unk32 param2, unk32 param3);
    /* 2c */ virtual void vfunc_2c();
};

class UnkStruct_027e0cd8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ UnkStruct_027e0cd8_0c *mUnk_0c;
    /* 10 */

    void func_ov000_02081ecc(unk16 param1, unk32 param2);
};

extern UnkStruct_027e0cd8 *data_027e0cd8;
