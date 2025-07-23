#pragma once

#include "Item/Item.hpp"
#include "System/SysNew.hpp"
#include "types.h"

class ItemManager : public SysObject {
public:
    /* 00 */ unk32 mEquippedItem;
    /* 04 */ unk32 mForcedItem;
    /* 08 */ unk16 mUnk_08; // inventory items bitfield
    /* 0a */ unk16 mUnk_0a; // collection/equipment bitfield
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk16 mNumRupees;
    /* 12 */ unk16 mUnk_12; // "toggle bitfield"
    /* 14 */ unk16 mItemRestrictions; // bitfield
    /* 16 */ unk8 mTearsAmount; // number of tears of light
    /* 17 */ unk8 mKeyAmount; // number of small keys
    /* 18 */ unk8 mQuiverCapacity;
    /* 19 */ unk8 mBombBagCapacity;
    /* 1a */ unk8 mArrowAmount;
    /* 1b */ unk8 mBombAmount;
    /* 1c */ unk8 mPotions[MAX_POTIONS];
    /* 1e */ unk16 mUnk_1e;
    /* 20 */ unk32 *mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */

    ItemManager();
    ~ItemManager();
};
