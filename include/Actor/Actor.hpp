#pragma once

#include "System/SysNew.hpp"
#include "nitro/math.h"
#include "global.h"
#include "types.h"

class Actor_5c {
public:
    /* 00 */ Vec3p mUnk_00;
    /* 0c */ s16 mUnk_0c;
    /* 0e */ unk16 mUnk_0e; // padding?
    /* 10 */

    void func_ov000_020975f8();
};

class UnkStruct_ov000_020b539c_30 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk8 mUnk_08[0x18 - 0x08];
    /* 1c */ unk8 mUnk_18;
    /* 1c */ unk8 mUnk_19;
    /* 1c */ unk16 mUnk_1a;
    /* 1c */ unk16 mUnk_1c;
    /* 1e */ u16 mUnk_1e;
    /* 20 */
};

class UnkStruct_ov000_020b539c {
public:
    /* 00 */ unk8 mUnk_00[0x30];
    /* 30 */ UnkStruct_ov000_020b539c_30 *mUnk_30;
    /* 34 */

    void func_02028cdc(Actor_5c *param1, unk32 param2);
};

class Actor : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ Vec3p mPos;
    /* 10 */ Vec3p mPrevPos;
    /* 1c */ Vec3p mVel;
    /* 28 */ u16 mAngle;
    /* 28 */ unk16 mUnk_2a;
    /* 2c */ unk32 mUnk_2c; // gravity?
    /* 30 */ unk32 *mUnk_30;
    /* 34 */ unk32 *mUnk_34;
    /* 38 */ unk32 *mUnk_38;
    /* 3c */ unk32 mUnk_3c;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ u16 mUnk_44;
    /* 46 */ unk16 mUnk_46;
    /* 48 */ unk16 mUnk_48;
    /* 4a */ unk8 mUnk_4a;
    /* 4a */ unk8 mUnk_4b;
    /* 4c */ unk16 mUnk_4c;
    /* 4e */ s16 mUnk_4e;
    /* 50 */ unk16 mUnk_50;
    /* 52 */ unk16 mUnk_52;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5c */ Actor_5c mUnk_5c;
    /* 6c */ unk32 mUnk_6c;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7c */ unk32 mUnk_7c;
    /* 80 */ unk16 mUnk_80;
    /* 80 */ unk16 mUnk_82;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8c */ unk32 mUnk_8c;
    /* 90 */ UnkStruct_ov000_020b539c_30 *mUnk_90;

    /* 00 */ virtual void vfunc_00(Vec3p *param1);
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0c */ virtual unk8 vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual unk32 vfunc_18();
    /* 1c */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2c */ virtual void vfunc_2c();
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual unk32 vfunc_34();
    /* 38 */ virtual unk32 vfunc_38(unk32 param1);
    /* 3c */ virtual bool vfunc_3c(unk32 param2, Vec3p* param3);
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4c */ virtual ~Actor();
    /* 54 */

    Actor();
    void func_ov000_0209848c(UnkStruct_ov000_020b539c_30 *param1);
    void func_ov000_020984b0();
    void func_ov000_020984b4();
    void func_ov000_020984b8();
    void func_ov000_020984bc();
    void func_ov000_020984c0();
    void func_ov000_020984c4();
    unk32 func_ov000_020984c8();
    void func_ov000_020984d0();
    void func_ov000_020984f0();

    s32 func_ov000_02098518(unk32 *param1);
    void func_ov000_0209853c();
    s32 func_ov000_02098554();
    s16 func_ov000_0209856c();
    s8 func_ov000_02098578();
    s32 func_ov000_02098584();
    s32 func_ov000_020985f0(void *param1);
    void func_ov000_0209862c(unk32 param1);
};

extern UnkStruct_ov000_020b539c data_ov000_020b539c;
