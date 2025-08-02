#pragma once

#include "Item/Item.hpp"
#include "System/SysNew.hpp"
#include "types.h"

class ItemManager : public SysObject {
public:
    /* 00 */ unk32 mEquippedItem;
    /* 04 */ unk32 mForcedItem;
    /* 08 */ u32 mUnk_08[2]; // inventory items bitfield & collection/equipment bitfield
    /* 10 */ unk16 mNumRupees;
    /* 12 */ u16 mUnk_12; // "toggle bitfield"
    /* 14 */ unk16 mItemRestrictions; // bitfield
    /* 16 */ unk8 mTearsAmount; // number of tears of light
    /* 17 */ u8 mKeyAmount; // number of small keys
    /* 18 */ u8 mQuiverCapacity;
    /* 19 */ u8 mBombBagCapacity;
    /* 1a */ u8 mArrowAmount;
    /* 1b */ u8 mBombAmount;
    /* 1c */ u8 mPotions[MAX_POTIONS];
    /* 1e */ unk16 mUnk_1e;
    /* 20 */ unk32 *mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk8 mUnk_28[0x3C - 0x28];
    /* 3c */ TreasureType mUnk_3c[16]; // treasures
    /* 5c */

    ItemManager();
    ~ItemManager();

    void func_ov000_020a865c(ItemFlag itemFlag);
    bool func_ov000_020a8680();
    unk32 func_ov000_020a86a4();
    u32 func_ov000_020a86d0(ItemFlag itemFlag);
    u8 func_ov000_020a8728();
    u8 func_ov000_020a8748();
    void func_ov000_020a87c8(s32 amount);
    void func_ov000_020a87ec(s32 amount);
    void func_ov000_020a8820(s32 amount);
    void func_ov000_020a888c(PotionType type);
    bool func_ov000_020a88c8();
    bool func_ov000_020a88f4();
    void func_ov000_020a8920();
    bool func_ov000_020a8948();
    bool func_ov000_020a9c64();
    unk32 func_ov000_020a9c90(TreasureType type);
    bool func_ov000_020a9ca4(TreasureType type);
    void func_ov000_020a9cbc(TreasureType type, s32 amount);
    static unk32 func_ov000_020a9d78(unk32 param1);
    static unk32 func_ov000_020a9e14(unk32 param1);
    static unk32 func_ov000_020a9eb0(unk32 param1);
    static unk32 func_ov000_020a9f4c(unk32 param1);
    unk32 func_ov000_020aa02c(ItemId itemId);
    void func_ov000_020aa0ac(ItemId itemId);

    //! TODO: find out if it belongs here (some of them are (derived) Actor vfuncs?)
    void func_ov000_020a8974();
    void func_ov000_020a8984();
    void func_ov000_020a89bc();
    void func_ov000_020a89d4();
    void func_ov000_020a8a0c();
    void func_ov000_020a8a5c();
    void func_ov000_020a8a74();
    void func_ov000_020a8a90();
    void func_ov000_020a8aa4();
    void func_ov000_020a8ab8();
    void func_ov000_020a8acc();
    void func_ov000_020a8ae0();
    void func_ov000_020a8af4();
    void func_ov000_020a8b48();
    void func_ov000_020a8b7c();
    void func_ov000_020a8bb0();
    void func_ov000_020a8cc0();
    void func_ov000_020a8ce0();
    void func_ov000_020a8d08();
    void func_ov000_020a8d28();
    void func_ov000_020a8da0();
    void func_ov000_020a8da4();
    void func_ov000_020a8db0();
    void func_ov000_020a8dd0();
    void func_ov000_020a8df0();
    void func_ov000_020a8e84();
    void func_ov000_020a8e9c();
    void func_ov000_020a8ec0();
    unk32 func_ov000_020a8f54();
    unk32 func_ov000_020a8f5c();
    unk32 func_ov000_020a8f64();
    void func_ov000_020a8f6c();
    void func_ov000_020a8f78();
    void func_ov000_020a8fe0();
    void func_ov000_020a8ff4();
    void func_ov000_020a914c();
    void func_ov000_020a9150();
    unk32 func_ov000_020a91a0();
    unk32 func_ov000_020a91a8();
    unk32 func_ov000_020a91b0();
    void func_ov000_020a91b8();
    void func_ov000_020a9200();
    void func_ov000_020a921c();
    void func_ov000_020a9240();
    void func_ov000_020a9244();
    void func_ov000_020a9248();
    void func_ov000_020a92d0();
    void func_ov000_020a9448();
    void func_ov000_020a94b0();
    void func_ov000_020a9598();
    void func_ov000_020a95c4();
    void func_ov000_020a95d4();
    void func_ov000_020a95d8();
    void func_ov000_020a95e4();
    unk32 func_ov000_020a97fc();
    void func_ov000_020a9804();
    void func_ov000_020a98f0();
    void func_ov000_020a98f4();
    void func_ov000_020a995c();
    void func_ov000_020a99a4();
    void func_ov000_020a99d8();
    void func_ov000_020a9a20();
    void func_ov000_020a9a34();
    void func_ov000_020a9a50();
    void func_ov000_020a9a94();
    void func_ov000_020a9abc();
    void func_ov000_020a9ae0();
    void func_ov000_020a9afc();
    void func_ov000_020a9b10();
    void func_ov000_020a9b2c();
    void func_ov000_020a9b3c();
    void func_ov000_020a9b4c();
    void func_ov000_020a9c4c();
};
