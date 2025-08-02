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
    /* 12 */ unk16 mUnk_12; // "toggle bitfield"
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
    void func_ov000_020aa0ac(ItemId itemId);
};
