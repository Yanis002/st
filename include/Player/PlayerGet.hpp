#pragma once

#include "global.h"
#include "types.h"

#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"

class UnkStruct_ov110_021861ec {
public:
    /* 00 */ Vec3p mUnk_00;
    /* 08 */ unk32 mUnk_0c;
    /* 08 */ unk32 mUnk_10;
    /* 14 */

    ARM UnkStruct_ov110_021861ec(q20 x, q20 y, q20 z) {
        this->mUnk_00.x = x;
        this->mUnk_00.y = y;
        this->mUnk_00.z = z;
    }
};

struct UnkStruct_PlayerGet_64 {
    UnkStruct_PlayerGet_64(unk32 param1, unk32 param2);
};

class UnkStruct_PlayerGet_74_base : public SysObject {
public:
    /* 00 (vtable) */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04() /* = 0 */;
    /* 08 */ virtual void vfunc_08() /* = 0 */;
    /* 0c */ virtual void vfunc_0c() /* = 0 */;
    /* 10 */ virtual void vfunc_10() /* = 0 */;
    /* 14 */ virtual void vfunc_14() /* = 0 */;
    /* 18 */ virtual void vfunc_18() /* = 0 */;
    /* 1c */ virtual void vfunc_1c() /* = 0 */;
    /* 20 */ virtual void vfunc_20() /* = 0 */;
    /* 24 */

    UnkStruct_PlayerGet_74_base();
};

class UnkStruct_PlayerGet_74 : public UnkStruct_PlayerGet_74_base {
public:
    /* 00 (base) */

    /* 00 */ virtual void vfunc_00() override;

    UnkStruct_PlayerGet_74() {}
};

class UnkStruct_PlayerGet_8c {
public:
    UnkStruct_PlayerGet_8c(unk32 param1);
};

class UnkStruct_PlayerGet_ec {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */

    UnkStruct_PlayerGet_ec(unk32 param1) {
        this->mUnk_00 = param1;
    }

    ~UnkStruct_PlayerGet_ec();
};

class PlayerGet : public UnkStruct_ov000_0208f820 {
public:
    /* 00 (base) */
    /* 48 */ unk32 mUnk_48;
    /* 4c */ unk32 mUnk_4c;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5c */ unk32 mUnk_5c;
    /* 60 */ unk32 mUnk_60;
    /* 64 */ UnkStruct_PlayerGet_64 mUnk_64;
    /* 68 */ unk32 mUnk_68;
    /* 6c */ unk32 mUnk_6c;
    /* 70 */ unk16 mUnk_70;
    /* 70 */ unk8 mUnk_72;
    /* 70 */ unk8 mUnk_73;
    /* 74 */ UnkStruct_PlayerGet_74 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7c */ unk32 mUnk_7c;
    /* 80 */ unk32 mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ UnkStruct_ov000_0208f820 *mUnk_88;
    /* 8c */ UnkStruct_PlayerGet_8c mUnk_8c;
    /* 90 */ unk32 mUnk_90;
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9c */ unk32 mUnk_9c;
    /* a0 */ unk32 mUnk_a0;
    /* a4 */ unk32 mUnk_a4;
    /* a8 */ unk32 mUnk_a8;
    /* ac */ unk32 mUnk_ac;
    /* b0 */ unk32 mUnk_b0;
    /* b4 */ unk32 mUnk_b4;
    /* b8 */ unk32 mUnk_b8;
    /* bc */ unk32 mUnk_bc;
    /* c0 */ unk32 mUnk_c0;
    /* c4 */ unk32 mUnk_c4;
    /* c8 */ unk32 mUnk_c8;
    /* cc */ unk32 mUnk_cc;
    /* d0 */ unk32 mUnk_d0;
    /* d4 */ unk32 mUnk_d4;
    /* d8 */ unk32 mUnk_d8;
    /* dc */ unk32 mUnk_dc;
    /* e0 */ unk32 mUnk_e0;
    /* e4 */ unk32 mUnk_e4;
    /* e8 */ unk32 mUnk_e8;
    /* ec */ UnkStruct_PlayerGet_ec mUnk_ec[4];
    /* f0 */

    /* 04 */ virtual ~PlayerGet() override;
    /* 0c */ virtual void vfunc_0c() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3) override;

    void func_ov110_02184dac(unk32 param1, unk32 param2, unk32 param3);
    PlayerGet();

    static unk32 func_ov110_02185da4(unk32 param1);

    // Japanese version only
    bool func_ov110_02186b8c();
};

extern const UnkStruct_ov110_021861ec data_ov110_021861ec;
