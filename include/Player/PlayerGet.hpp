#pragma once

#include "global.h"
#include "types.h"

#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include "nitro/math.h"

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
    // /* 00 */ unk32 *mUnk_00;

    virtual ~UnkStruct_PlayerGet_8c();
    virtual void vfunc_08(unk32 param1); //! TODO: name symbol func_ov000_02057bf4
    virtual void vfunc_0c(); //! TODO: name symbol func_01ffc57c
    virtual void vfunc_10(); //! TODO: name symbol func_ov000_02057dc8
    virtual void vfunc_14(); //! TODO: name symbol func_ov000_02057e44
    virtual void vfunc_18(); //! TODO: name symbol func_ov000_02057ea8
    virtual void vfunc_1c(); //! TODO: name symbol func_ov000_02057c34
    virtual void vfunc_20(); //! TODO: name symbol func_ov000_02057d84

    UnkStruct_PlayerGet_8c(unk32 param1);
};

class UnkStruct_PlayerGet_ec {
public:
    /* 00 */ unk32 *mUnk_00;
    /* 04 */

    UnkStruct_PlayerGet_ec(unk32 *param1) {
        this->mUnk_00 = param1;
    }

    UnkStruct_PlayerGet_ec();
    ~UnkStruct_PlayerGet_ec();
};

class UnkStruct_PlayerGet_50 {
public:
    unk32 func_01ff8fa8();
    unk32 func_02015080(unk32 param1);
};

class UnkStruct_PlayerGet_54 {
public:
    union { // fake???
        /* 00 */ u16 mUnk_00_16;
        /* 00 */ u32 mUnk_00_32;
    };
    // /* 02 */ u16 mUnk_02;
    // /* 04 */ u8 mUnk_04;
    // /* 05 */ u8 mUnk_05;
    // /* 06 */ u8 mUnk_06;
    // /* 07 */ u8 mUnk_07;
    // /* 08 */ unk32 mUnk_08;
    // /* 0c */ unk32 mUnk_0c;
    // /* 10 */ unk32 mUnk_10;
    /* 14 */

    UnkStruct_PlayerGet_54(unk32 param1) {
        this->mUnk_00_32 = param1;
    }
};

class UnkStruct_PlayerGet_fc {
public:
    /* 00 */ UnkStruct_PlayerGet_ec *mUnk_00;
};

class UnkStruct_PlayerGet_48 {
public:
    /* 00 */ unk8 mUnk_00[0x40];
    /* 40 */ unk16 mUnk_40;
    /* 42 */ unk16 mUnk_42;
    /* 43 */ unk8 mUnk_43;
    /* 44 */ unk8 mUnk_44;
    /* 45 */ unk8 mUnk_45;
    /* 46 */ unk8 mUnk_46;
    /* 47 */ unk8 mUnk_47;
    /* 48 */ unk8 mUnk_48[0x5E - 0x48];
    /* 5e */ unk16 mUnk_5e;
    /* 60 */ unk8 mUnk_60;
    /* 61 */ unk8 mUnk_61;
    /* 62 */ unk8 mUnk_62;
    /* 63 */ unk8 mUnk_63;
};

class PlayerGet : public UnkStruct_ov000_0208f820 {
public:
    /* 000 (base) */
    /* 048 */ UnkStruct_PlayerGet_48 *mUnk_48;
    /* 04c */ unk32 *mUnk_4c;
    /* 050 */ UnkStruct_PlayerGet_50 *mUnk_50;
    /* 054 */ UnkStruct_PlayerGet_54 mUnk_54;
    // /* 056 */ unk16 mUnk_56;
    union { // fake??
        /* 058 */ u16 mUnk_58_16;
        /* 058 */ u32 mUnk_58_32;
    };
    // /* 058 */ unk16 mUnk_5a;
    /* 05c */ unk32 mUnk_5c;
    /* 060 */ ItemId mItemId;
    /* 064 */ UnkStruct_PlayerGet_64 mUnk_64;
    /* 068 */ unk32 mUnk_68;
    /* 06c */ unk32 mUnk_6c; // scale
    /* 070 */ unk16 mUnk_70; // angle/rotation
    /* 070 */ u8 mUnk_72; // probably bools
    /* 070 */ u8 mUnk_73; // probably bools
    /* 074 */ UnkStruct_PlayerGet_74 mUnk_74;
    /* 078 */ unk32 mUnk_78;
    /* 07c */ unk32 mUnk_7c;
    /* 080 */ unk32 mUnk_80;
    /* 084 */ unk32 mUnk_84;
    /* 088 */ UnkStruct_ov000_0208f820 *mUnk_88;
    /* 08c */ UnkStruct_PlayerGet_8c mUnk_8c;
    /* 090 */ unk32 *mUnk_90;
    /* 094 */ unk32 mUnk_94;
    /* 098 */ unk32 *mUnk_98;
    /* 09c */ unk32 mUnk_9c;
    /* 0a0 */ unk32 *mUnk_a0;
    /* 0a4 */ unk32 mUnk_a4;
    /* 0a8 */ unk32 *mUnk_a8;
    /* 0ac */ unk32 mUnk_ac;
    /* 0b0 */ unk32 *mUnk_b0;
    /* 0b4 */ unk32 mUnk_b4;
    /* 0b8 */ unk32 mUnk_b8;
    /* 0bc */ unk32 mUnk_bc;
    /* 0c0 */ unk32 mUnk_c0;
    /* 0c4 */ unk32 mUnk_c4;
    /* 0c8 */ unk32 mUnk_c8;
    /* 0cc */ unk32 mUnk_cc;
    /* 0d0 */ unk32 mUnk_d0;
    /* 0d4 */ unk32 mUnk_d4;
    /* 0d8 */ unk32 mUnk_d8;
    /* 0dc */ unk32 mUnk_dc;
    /* 0e0 */ unk32 mUnk_e0;
    /* 0e4 */ unk32 mUnk_e4;
    /* 0e8 */ unk32 mUnk_e8;
    /* 0ec */ UnkStruct_PlayerGet_ec mUnk_ec[4];
    /* 0fc */ void *mUnk_fc;
    /* 100 */

    /* 04 */ virtual ~PlayerGet() override;
    /* 0c */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3) override;

    void func_ov110_02184dac(unk32 param1, unk32 param2, unk32 param3);
    PlayerGet();

    // Japanese version only
    bool func_ov110_02186b8c();
};

extern const UnkStruct_ov110_021861ec data_ov110_021861ec;
