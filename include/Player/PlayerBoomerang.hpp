#pragma once

#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include "global.h"
#include "types.h"

class PlayerBoomerangItem_08 {
public:
    /* 00 */ unk32 mUnk_00;

    void func_ov031_020dc480();
    void func_ov031_020dc4b8(Vec3p *param1, unk32 param2);
};

class PlayerBoomerangItem {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ unk32 mUnk_004;
    /* 008 */ PlayerBoomerangItem_08 mUnk_008;
    /* 00c */ unk32 mUnk_00c;
    /* 010 */ unk32 mUnk_010;
    /* 014 */ unk8 mUnk_14[SCREEN_WIDTH * SCREEN_HEIGHT];
    /* 300 */ unk32 mUnk_300;
    /* 304 */ unk32 mUnk_304;
    /* 308 */ unk32 mUnk_308;
    /* 30c */ unk32 mUnk_30c;
    /* 310 */ unk32 mUnk_310;
    /* 314 */ unk32 mUnk_314;
    /* 318 */ unk32 mUnk_318;
    /* 31c */ unk32 mUnk_31c;
};

class PlayerBoomerang : public UnkStruct_ov000_0208f820 {
public:
    /* 00 (base) */
    /* 54 */ Vec3p mUnk_54;
    /* 60 */ Vec3p mUnk_60;
    /* 6c */ PlayerBoomerang_6c mUnk_6c;
    /* 80 */ unk8 mUnk_80[0x20];
    /* a0 */ unk32 mUnk_a0;
    /* a4 */ unk32 mUnk_a4;
    /* a8 */ unk32 mUnk_a8;
    /* ac */ u8 mUnk_ac;
    /* ad */ unk8 mUnk_ad;

    /* 04 */ virtual ~PlayerBoomerang();
    /* 0c */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3, u8 param4) override;
    /* 1c */ virtual unk32 vfunc_1c(Vec3p *param1) override;

    PlayerBoomerang();
};
