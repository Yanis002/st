#pragma once

#include "files.h"
#include "math.hpp"
#include "types.h"

#include "MapObject/MapObjectManager.hpp"
#include "Save/SaveFile.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

class MapObject_20;
class UnkStruct_027e0cd8;

class UnkStruct_027e0cd8_0C_160 {
public:
    bool func_ov026_02106aa8();
};

class UnkStruct_027e0cd8_0C_Base {
public:
    /* 004 */ unk32 *mUnk_04;
    /* 008 */ unk32 *mUnk_08;
    /* 00C */ unk32 mUnk_0C;
    /* 010 */ unk32 *mUnk_10;
    /* 014 */ unk32 *mUnk_14;
    /* 018 */ unk32 mUnk_18;
    /* 01C */ unk32 *mUnk_1C;
    /* 020 */ unk32 mUnk_20;
    /* 024 */ unk32 *mUnk_24;
    /* 028 */ unk32 mUnk_28;
    /* 02C */ unk32 *mUnk_2C;
    /* 030 */ unk32 mUnk_30;
    /* 034 */ unk32 *mUnk_34;
    /* 038 */ unk32 mUnk_38;
    /* 03C */ unk32 mUnk_3C;
    /* 040 */ unk32 mUnk_40;
    /* 044 */ unk32 mUnk_44;
    /* 048 */ unk32 mUnk_48;
    /* 04C */ unk32 mUnk_4C;
    /* 050 */ unk32 mUnk_50;
    /* 054 */ unk32 mUnk_54;
    /* 058 */ unk32 mUnk_58;
    /* 05C */ unk32 mUnk_5C;
    /* 060 */ unk32 mUnk_60;
    /* 064 */ unk32 mUnk_64;
    /* 068 */ unk32 mUnk_68;
    /* 06C */ unk32 mUnk_6C;
    /* 070 */ unk32 *mUnk_70;
    /* 074 */ unk32 *mUnk_74;
    /* 078 */ unk32 *mUnk_78;
    /* 07C */ unk32 mUnk_7C;
    /* 080 */ unk32 mUnk_80;
    /* 084 */ unk32 mUnk_84;
    /* 088 */ unk32 *mUnk_88;
    /* 08C */ unk32 *mUnk_8C;
    /* 090 */ unk32 mUnk_90;
    /* 094 */ unk32 mUnk_94;
    /* 098 */ unk32 mUnk_98;
    /* 09C */ unk32 mUnk_9C;
    /* 0A0 */ unk32 mUnk_A0;
    /* 0A4 */ unk32 mUnk_A4;
    /* 0A8 */ unk32 mUnk_A8;
    /* 0AC */ unk32 mUnk_AC;
    /* 0B0 */ unk32 mUnk_B0;
    /* 0B4 */ ZeldaObjectList *mUnk_B4;
    /* 0B8 */ ZeldaObjectList *mUnk_B8;
    /* 0BC */ ZeldaObjectList *mUnk_BC;
    /* 0C0 */ ZeldaObjectList *mUnk_C0;
    /* 0C4 */ ZeldaObjectList *mUnk_C4;
    /* 0C8 */ ZeldaObjectList *mUnk_C8;
    /* 0CC */ ZeldaObjectList *mUnk_CC;
    /* 0D0 */ ZeldaObjectList *mUnk_D0;
    /* 0D4 */ ZeldaObjectList *mUnk_D4;
    /* 0D8 */ ZeldaObjectList *mUnk_D8;
    /* 0DC */ ZeldaObjectList *mUnk_DC[8];
    /* 0FC */ STRUCT_PAD(0xFC, 0x118);
    /* 118 */ unk32 mUnk_118;
    /* 118 */ unk32 mUnk_11C;

    UnkStruct_027e0cd8_0C_Base(UnkStruct_027e0cd8 *param1);

    /* 00 */ virtual ~UnkStruct_027e0cd8_0C_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C(const UnkStruct_SceneChange1 *param1, unk32 param2, unk32 param3);
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual fx32 vfunc_28(VecFx32 *param1, unk32 param2, unk32 param3);
    /* 2C */ virtual void vfunc_2C();

    // itcm
    fx32 func_01ffedf4(Vec2b *pPos);

    // overlay 0
    unk32 func_ov000_02080180(void *param1);
    void func_ov000_020801b0(Vec2b *param1, unk32 param2, unk32 param3);
    bool func_ov000_020802ec(u16 param1, VecFx32 *param2);
    void func_ov000_020803ec(u16 param1);
    void func_ov000_0208053c(u16 param1);
    bool func_ov000_02080658(unk32 param1, UnkStruct_SceneChange1 *param2);
    void func_ov000_020808f4(void *param1, void *param2, unk32 param3);
    unk32 func_ov000_02080a44();
    void func_ov000_02080a5c(VecFx32 *param1);
    void func_ov000_02080a78(VecFx32 *param1);

    // overlay 1
    void func_ov001_020b85d0(const UnkStruct_SceneChange1 *param1);
    VecFx32 *func_ov001_020b8a5c(unk32 spawnIndex, unk32 param1);
    void func_ov001_020b88ec();
};

class UnkStruct_027e0cd8_0C : public UnkStruct_027e0cd8_0C_Base {
public:
    /* 000 (base) */
    /* 120 */ STRUCT_PAD(0x120, 0x128);
    /* 128 */ u16 mUnk_128;
    /* 12A */ STRUCT_PAD(0x12A, 0x160);
    /* 160 */ UnkStruct_027e0cd8_0C_160 *mUnk_160;
    /* 164 */ STRUCT_PAD(0x164, 0x1E0);
    /* 1E0 */

    UnkStruct_027e0cd8_0C(UnkStruct_027e0cd8 *param1);

    // data_ov031_02112a0c
    /* 00 */ virtual ~UnkStruct_027e0cd8_0C() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C(const UnkStruct_SceneChange1 *param1, unk32 param2, unk32 param3) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 28 */ virtual fx32 vfunc_28(VecFx32 *param1, unk32 param2, unk32 param3) override;
    /* 2C */ virtual void vfunc_2C() override;
};

class UnkStruct_027e0cd8_0C_Derived2 : public UnkStruct_027e0cd8_0C_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x120, 0x4F8);
    UnkStruct_027e0cd8_0C_Derived2(UnkStruct_027e0cd8 *param1);
};

class UnkStruct_027e0cd8_0C_Derived3 : public UnkStruct_027e0cd8_0C_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x120, 0x160);
    UnkStruct_027e0cd8_0C_Derived3(UnkStruct_027e0cd8 *param1);
};

class UnkStruct_027e0cd8_04_0C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ s16 mUnk_08;
    /* 0C */ volatile u32 mUnk_0C;
    /* 10 */ STRUCT_PAD(0x10, 0x50);
    /* 50 */

    UnkStruct_027e0cd8_04_0C();
};

class UnkStruct_027e0cd8_04 {
public:
    /* 00 */ unk8 mUnk_00;
    /* 00 */ u8 mUnk_01;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkStruct_027e0cd8_04_0C *mUnk_0C;
    /* 10 */ u8 mUnk_10;
    /* 11 */ u8 mUnk_11;
    /* 12 */ STRUCT_PAD(0x12, 0x40);
    /* 40 */ u8 mUnk_40[1][10]; // at least one
    STRUCT_PAD(0x4C, 0xB4);
    /* B4 */

    UnkStruct_027e0cd8_04();
    ~UnkStruct_027e0cd8_04();

    void func_ov000_02081354(const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1,
                             SaveFile_00000_0000_Data_184 *param3, bool param4);
};

class UnkStruct_027e0cd8_10 : public UnkDataStruct4 {
public:
    /* 00 (base) */
    /* D0 */ unk32 mUnk_D0;
    /* D4 */

    UnkStruct_027e0cd8_10();
    ~UnkStruct_027e0cd8_10();
};

class UnkStruct_027e0cd8 : public AutoInstance<UnkStruct_027e0cd8> {
public:
    /* 00 */ Vec2s mUnk_00;
    /* 04 */ UnkStruct_027e0cd8_04 *mUnk_04; // stage flags
    /* 08 */ UnkStruct_027e0cd8_04 *mUnk_08;
    /* 0C */ UnkStruct_027e0cd8_0C_Base *mUnk_0C; // related to train?
    /* 10 */ UnkStruct_027e0cd8_10 *mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ bool mUnk_16;
    /* 16 */ bool mUnk_17;
    /* 18 */ UnkSystem8 mUnk_18;
    /* 24 */ VecFx32 mUnk_24;
    /* 30 */ unk32 mUnk_30; // scene index but unknown purpose
    /* 34 */ unk32 mUnk_34; // scene index but unknown purpose
    /* 38 */ s64 mUnk_38[2];
    /* 48 */ bool mUnk_48[2];
    /* 4C */

    UnkStruct_027e0cd8_0C *GetUnk0C() {
        return (UnkStruct_027e0cd8_0C *) this->mUnk_0C;
    }

    UnkStruct_027e0cd8();
    ~UnkStruct_027e0cd8();

    // overlay 0
    bool func_ov000_02081e30(unk32 param1, unk32 param2);
    void func_ov000_02081d7c(unk32 flagValue, unk32 param2, bool doSet);
    void func_ov000_02081ecc(unk16 param1, unk32 param2);
    void func_ov000_02081eec(unk16 param1, unk32 param2, unk32 param3);
    bool func_ov000_02081f3c(unk16 param1, unk32 param2);
    u32 func_ov000_02081d5c(); // returns current room index?
    bool func_ov000_02082124();
    bool func_ov000_02081c28();
    void func_ov000_02081ca0();

    // overlay 1
    void func_ov001_020b7830(const UnkStruct_SceneChange1 *param1);
    void func_ov001_020b7a7c();
    void func_ov001_020b7b38(const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1);
    void func_ov001_020b7c08(const UnkStruct_SceneChange1 *param1, const UnkStruct_WarpUnk1_A0 *param2);
    void func_ov001_020b7d64(const UnkStruct_SceneChange1 *param1);
    void func_ov001_020b7e50();
    void func_ov001_020b7e68(const UnkStruct_SceneChange1 *param1, unk32 param2);
    void func_ov001_020b803c();
    bool func_ov001_020b80fc(SceneIndex sceneIndex);
    void func_ov001_020b8120(SceneIndex sceneIndex);
    void func_ov001_020b818c();

    static UnkStruct_027e0cd8 *Create();
    static void Destroy();
};

extern UnkStruct_027e0cd8 *data_027e0cd8;
