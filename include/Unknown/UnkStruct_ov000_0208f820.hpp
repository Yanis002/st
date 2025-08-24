#pragma once

#include "global.h"
#include "types.h"

#include "Actor/Actor.hpp"
#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b1968.hpp"
#include "nitro/math.h"

class UnkStruct_ov000_0208f820_14 {
public:
    /* 00 */ unk8 mUnk_00[0x6C];
    /* 6c */ unk32 mUnk_6c;
    /* 70 */ u16 mUnk_70;
    /* 72 */ unk16 mUnk_72;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7c */ unk32 mUnk_7c;
    /* 80 */ unk32 mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8c */ unk32 mUnk_8c;
    /* 90 */
};

class UnkStruct_PlayerGet_64 {
public:
    UnkStruct_PlayerGet_64(ActorRef *param1, unk32 param2);
    ~UnkStruct_PlayerGet_64();

    void func_ov000_0208a100();
};

class UnkStruct_ov000_0208f820_28_98 {
public:
    /* 00 */ unk8 mUnk_00[0x38];
    /* 38 */ UnkStruct_PlayerGet_64 mUnk_38;
    /* 3c */ unk32 mUnk_3c;
    /* 40 */ u16 mUnk_40;
};

class UnkStruct_ov000_0208f820_28 {
public:
    /* 00 */ unk8 mUnk_00[0x50];
    /* 50 */ unk32 mUnk_50;
    /* 54 */ ItemManager *pItemManager;
    /* 58 */ unk8 mUnk_58[0x98 - 0x58];
    /* 98 */ UnkStruct_ov000_0208f820_28_98 *mUnk_98;

    void func_ov000_0208cda0();

    void func_ov058_02152a24();
};

class UnkStruct_ov000_0208f820_2c {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 14 */ unk16 mUnk_16;
    /* 14 */ unk8 mUnk_18[0x58 - 0x18];
    /* 58 */ unk16 mUnk_58;
};

class UnkStruct_ov000_0208f820_30_10 {
public:
    void func_ov031_020e076c();
};

class UnkStruct_ov000_0208f820_30 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ UnkStruct_ov000_0208f820_30_10 *mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ unk32 mUnk_1c;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk8 mUnk_28[0x70 - 0x28];
    /* 70 */ u32 mUnk_70;

    void func_ov000_020921e4(unk32 param1);
    void func_ov000_020936ec();
    void func_ov000_02093a04();
};

class UnkStruct_ov000_0208f820_38 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
};

class UnkStruct_ov000_0208f820_3c {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
};

class UnkStruct_ov000_0208f820_40 {
public:
    /* 00 */ u16 mUnk_00;
    /* 02 */ u16 mUnk_02;
};

class UnkStruct_PlayerGet_vfunc_0c_param1 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ ItemId mUnk_1c;
};

class UnkStruct_ov000_0208f820_24 {
public:
    /* 000 */ unk8 mUnk_000[0x20];
    /* 020 */ u8 mUnk_020;
    /* 021 */ unk8 mUnk_021;
    /* 022 */ unk8 mUnk_022;
    /* 023 */ unk8 mUnk_023;
    /* 024 */ unk8 mUnk_024;
    /* 025 */ unk8 mUnk_025;
    /* 026 */ unk8 mUnk_026[0x38 - 0x26];
    /* 038 */ unk32 mUnk_038;
    /* 03c */ unk32 mUnk_03c;
    /* 03c */ unk32 mUnk_040;
    /* 03c */ unk32 mUnk_044;
    /* 03c */ unk32 mUnk_048;
    /* 03c */ unk32 mUnk_04c;
    /* 03c */ unk32 mUnk_050;
    /* 03c */ unk32 mUnk_054;
    /* 03c */ unk32 mUnk_058;
    /* 03c */ unk32 mUnk_05c;
    /* 03c */ unk16 mUnk_060;
    /* 03c */ unk16 mUnk_062;
    /* 03c */ unk32 mUnk_064;
    /* 03c */ unk32 mUnk_068;
    /* 03c */ unk32 mUnk_06c;
    /* 03c */ unk32 mUnk_070;
    /* 03c */ unk32 mUnk_074;
    /* 03c */ unk32 mUnk_078;
    /* 03c */ unk32 mUnk_07c;
    /* 03c */ unk32 mUnk_080;
    /* 03c */ unk32 mUnk_084;
    /* 03c */ unk32 mUnk_088;
    /* 03c */ unk32 mUnk_08c;
    /* 03c */ unk32 mUnk_090;
    /* 094 */ unk32 mUnk_094;
    /* 098 */ unk8 mUnk_098[0x104 - 0x98];
    /* 104 */ u16 mUnk_104;

    void func_ov000_0208834c(Vec3p *param1);

    bool func_ov104_02184a40(unk32 param1, Vec3p *param2, Vec3p *param3);
    void func_ov000_02088da8(unk32 param1);
};

class UnkStruct_ov000_0208f820_04 {
public:
    /* 00 */ u8 mUnk_00[4];
    /* 04 */ u8 mUnk_04[4];
    /* 08 */ unk32 mUnk_08;
    /* 0c */ ItemId mItemId;
    /* 10 */

    UnkStruct_ov000_0208f820_04(unk32 param1, unk32 param2, unk32 param3, ItemId itemId) {
        *(u32 *) this->mUnk_00 = param1;
        *(u32 *) this->mUnk_04 = param2;
        this->mUnk_08          = param3;
        this->mItemId          = itemId;
    }

    UnkStruct_ov000_0208f820_04() {};
};

class ActorUnk {
public:
    unk32 mUnk_00;

    void func_ov000_020973f4(UnkStruct_ov000_020b539c *param1, ActorId param2, Actor_5c *param3);
    void func_ov031_020e8d2c(Vec3p *param1, unk32 param2, unk32 param3, unk32 param4);

    ActorUnk() {};
};

class PlayerBoomerang_6c_base_1 : public SysObject {
public:
    /* 00 (base) */

    /* 00 */ virtual ~PlayerBoomerang_6c_base_1();
    /* 08 */ virtual void vfunc_08();
};

class PlayerBoomerang_6c_base_2 : public PlayerBoomerang_6c_base_1 {
public:
    /* 00 (vtable) */
    /* 04 */ UnkStruct_ov000_020b1968 mUnk_04;

    /* 00 */ virtual ~PlayerBoomerang_6c_base_2();
    /* 08 */ virtual void vfunc_08() override;

    PlayerBoomerang_6c_base_2();
};

class PlayerBoomerang_6c : public PlayerBoomerang_6c_base_1 {
public:
    /* 00 (base) */
    /* 04 */ UnkStruct_ov000_020b1968 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk8 mUnk_0c;
    /* 0d */ unk8 mUnk_0d;
    /* 0e */ unk8 mUnk_0e;
    /* 0f */ unk8 mUnk_0f;
    /* 10 */ unk32 mUnk_10;
    /* 14 */

    /* 00 */ virtual ~PlayerBoomerang_6c();
    /* 08 */ virtual void vfunc_08() override;

    PlayerBoomerang_6c();
    void func_ov000_0208c724(UnkStruct_ov000_020b1968 *param1, unk32 param2, unk32 *param3);
};

class UnkStruct_PlayerGet_48 {
public:
    /* 00 */ unk8 mUnk_00[0x40];
    /* 40 */ unk16 mUnk_40;
    /* 42 */ unk16 mUnk_42;
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

    void func_ov017_020bbf6c(PlayerBoomerang_6c *param1);
};

class UnkStruct_PlayerGet_50 {
public:
    unk32 func_01ff8fa8();
    unk32 func_02015080(unk32 param1);
};

class UnkStruct_ov000_0208f820 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ UnkStruct_ov000_0208f820_04 mUnk_04;
    /* 14 */ UnkStruct_ov000_0208f820_14 *mUnk_14;
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19;
    /* 1a */ unk8 mUnk_1a;
    /* 1b */ unk8 mUnk_1b;
    /* 1c */ unk32 mUnk_1c;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ UnkStruct_ov000_0208f820_24 *mUnk_24;
    /* 28 */ UnkStruct_ov000_0208f820_28 *mUnk_28;
    /* 2c */ UnkStruct_ov000_0208f820_2c *mUnk_2c;
    /* 30 */ UnkStruct_ov000_0208f820_30 *mUnk_30;
    /* 34 */ Vec3p *mUnk_34;
    /* 38 */ UnkStruct_ov000_0208f820_38 *mUnk_38;
    /* 3c */ UnkStruct_ov000_0208f820_3c *mUnk_3c;
    /* 40 */ UnkStruct_ov000_0208f820_40 *mUnk_40;
    /* 44 */ ActorRef *mUnk_44;
    /* 48 */ UnkStruct_PlayerGet_48 *mUnk_48;
    /* 4c */ unk32 *mUnk_4c;
    /* 50 */ UnkStruct_PlayerGet_50 *mUnk_50;
    /* 54 */

    /* 00 */ virtual ActorUnk *vfunc_00(unk32 param1);
    /* 04 */ virtual ~UnkStruct_ov000_0208f820();
    /* 0c */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1);
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3, u8 param4);
    /* 1c */ virtual unk32 vfunc_1c(Vec3p *param1);
    /* 20 */

    UnkStruct_ov000_0208f820();
    unk32 func_ov000_0209008c(unk32 *param1);
    unk32 func_ov000_02090750(unk32 param1);
    unk32 func_ov000_0209078c(unk32 param1);
};
