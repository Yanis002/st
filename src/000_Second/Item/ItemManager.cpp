#include "Item/ItemManager.hpp"
#include "global.h"

// quiver and bomb bag tiers
extern u8 data_ov000_020afc40[3];
extern u8 data_ov000_020afc43[3];

// removeEquipmentItem
ARM void ItemManager::func_ov000_020a865c(u32 bitIdx) {
    UNSET_FLAG(this->mUnk_08, bitIdx);
}

// getItemAmmo
ARM u32 ItemManager::func_ov000_020a86d0(ItemFlag itemFlag) {
    bool canUse = GET_FLAG(this->mUnk_08, itemFlag);

    switch (itemFlag) {
        case ItemFlag_Bow:
            return canUse ? this->mArrowAmount : 0;
        case ItemFlag_Bombs:
            return canUse ? this->mBombAmount : 0;
        default:
            break;
    }

    return canUse;
}

// getMaxArrows
ARM u8 ItemManager::func_ov000_020a8728() {
    if (GET_FLAG(this->mUnk_08, ItemFlag_Bow) == 0) {
        return 0;
    }

    return data_ov000_020afc40[this->mQuiverCapacity];
}

// getMaxBombs
ARM u8 ItemManager::func_ov000_020a8748() {
    if (GET_FLAG(this->mUnk_08, ItemFlag_Bombs) == 0) {
        return 0;
    }

    return data_ov000_020afc43[this->mBombBagCapacity];
}

// addKeys
ARM void ItemManager::func_ov000_020a87c8(s32 amount) {
    s32 newAmount = this->mKeyAmount + amount;

    if (newAmount > MAX_KEYS) {
        newAmount = MAX_KEYS;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mKeyAmount = newAmount;
}

// gainArrows
ARM void ItemManager::func_ov000_020a87ec(s32 amount) {
    s32 maxArrows = this->func_ov000_020a8728();
    s32 newAmount = this->mArrowAmount + amount;

    if (newAmount > maxArrows) {
        newAmount = maxArrows;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mArrowAmount = newAmount;
}

// gainBombs
ARM void ItemManager::func_ov000_020a8820(s32 amount) {
    s32 maxBombs  = this->func_ov000_020a8748();
    s32 newAmount = this->mBombAmount + amount;

    if (newAmount > maxBombs) {
        newAmount = maxBombs;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mBombAmount = newAmount;
}

// gainPotion
ARM void ItemManager::func_ov000_020a888c(PotionType type) {
    switch (type) {
        case PotionType_Red:
        case PotionType_Purple:
        case PotionType_Yellow:
            for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
                if (this->mPotions[i] == PotionType_None) {
                    this->mPotions[i] = type;
                    break;
                }
            }
            break;
        default:
            break;
    }
}

// hasPotion
ARM bool ItemManager::func_ov000_020a88c8() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] != PotionType_None) {
            return true;
        }
    }

    return false;
}

// hasPurplePotion
ARM bool ItemManager::func_ov000_020a88f4() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] == PotionType_Purple) {
            return true;
        }
    }

    return false;
}

// removePurplePotion
ARM void ItemManager::func_ov000_020a8920() {
    for (s32 i = ARRAY_LEN(this->mPotions) - 1; i >= 0; i--) {
        if (this->mPotions[i] == PotionType_Purple) {
            this->mPotions[i] = PotionType_None;
            return;
        }
    }
}

// potionInventoryFull
ARM bool ItemManager::func_ov000_020a8948() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] == PotionType_None) {
            return false;
        }
    }
    return true;
}

// hasAnyTreasure
ARM bool ItemManager::func_ov000_020a9c64() {
    for (s32 i = 0; i < ARRAY_LEN(this->mUnk_3c); i++) {
        if (this->mUnk_3c[i] >= 0) {
            return true;
        }
    }

    return false;
}

// getTreasureAmount
ARM unk32 ItemManager::func_ov000_020a9c90(TreasureType type) {
    if (this->mUnk_3c[type] >= 0) {
        return this->mUnk_3c[type];
    }

    return 0;
}

// isTreasureAmountMaxed
ARM bool ItemManager::func_ov000_020a9ca4(TreasureType type) {
    return this->func_ov000_020a9c90(type) >= MAX_TREASURE;
}

// gainTreasure
ARM void ItemManager::func_ov000_020a9cbc(TreasureType type, s32 amount) {
    s32 newAmount;

    if (this->mUnk_3c[type] < 0) {
        this->mUnk_3c[type] = 0;
    }

    newAmount = this->mUnk_3c[type] + amount;

    if (newAmount > MAX_TREASURE) {
        newAmount = MAX_TREASURE;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mUnk_3c[type] = newAmount;
}

// gainTreasureFromItem
ARM void ItemManager::func_ov000_020aa0ac(ItemId itemId) {
    switch (itemId) {
        case ItemId_DemonFossil:
            this->func_ov000_020a9cbc(TreasureType_DemonFossil, 1);
            break;
        case ItemId_StalfosSkull:
            this->func_ov000_020a9cbc(TreasureType_StalfosSkull, 1);
            break;
        case ItemId_StarFragment:
            this->func_ov000_020a9cbc(TreasureType_StarFragment, 1);
            break;
        case ItemId_BeeLarvae:
            this->func_ov000_020a9cbc(TreasureType_BeeLarvae, 1);
            break;
        case ItemId_WoodHeart:
            this->func_ov000_020a9cbc(TreasureType_WoodHeart, 1);
            break;
        case ItemId_DarkPearlLoop:
            this->func_ov000_020a9cbc(TreasureType_DarkPearlLoop, 1);
            break;
        case ItemId_WhitePearlLoop:
            this->func_ov000_020a9cbc(TreasureType_WhitePearlLoop, 1);
            break;
        case ItemId_RutoCrown:
            this->func_ov000_020a9cbc(TreasureType_RutoCrown, 1);
            break;
        case ItemId_DragonScale:
            this->func_ov000_020a9cbc(TreasureType_DragonScale, 1);
            break;
        case ItemId_PirateNecklace:
            this->func_ov000_020a9cbc(TreasureType_PirateNecklace, 1);
            break;
        case ItemId_PalaceDish:
            this->func_ov000_020a9cbc(TreasureType_PalaceDish, 1);
            break;
        case ItemId_GoronAmber:
            this->func_ov000_020a9cbc(TreasureType_GoronAmber, 1);
            break;
        case ItemId_MysticJade:
            this->func_ov000_020a9cbc(TreasureType_MysticJade, 1);
            break;
        case ItemId_AncientCoin:
            this->func_ov000_020a9cbc(TreasureType_AncientCoin, 1);
            break;
        case ItemId_PricelessStone:
            this->func_ov000_020a9cbc(TreasureType_PricelessStone, 1);
            break;
        case ItemId_RegalRing:
            this->func_ov000_020a9cbc(TreasureType_RegalRing, 1);
            break;
        default:
            break;
    }
}
