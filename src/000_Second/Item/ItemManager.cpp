#include "Item/ItemManager.hpp"
#include "global.h"

// quiver and bomb bag tiers
extern u8 data_ov000_020afc40[3];
extern u8 data_ov000_020afc43[3];

// removeEquipmentItem
ARM void ItemManager::func_ov000_020a865c(ItemFlag itemFlag) {
    UNSET_FLAG(this->mUnk_08, itemFlag);
}

ARM bool ItemManager::func_ov000_020a8680() {
    return GET_FLAG(this->mUnk_08, ItemFlag_RecruitUniform) && (this->mUnk_12 & 1);
}

ARM unk32 ItemManager::func_ov000_020a86a4() {
    if (GET_FLAG(this->mUnk_08, ItemFlag_AncientShield) && (this->mUnk_12 & 2)) {
        return 1;
    }

    if (GET_FLAG(this->mUnk_08, ItemFlag_Shield)) {
        return 0;
    }

    return -1;
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

ARM void ItemManager::func_ov000_020a8974() {}
ARM unk32 ItemManager::func_ov000_020a8984(ItemId itemId) {}
THUMB void ItemManager::func_ov000_020a89bc() {}
ARM void ItemManager::func_ov000_020a89d4() {}
ARM void ItemManager::func_ov000_020a8a0c() {}
ARM void ItemManager::func_ov000_020a8a5c() {}
ARM void ItemManager::func_ov000_020a8a74() {}
ARM void ItemManager::func_ov000_020a8a90() {}
ARM void ItemManager::func_ov000_020a8aa4() {}
ARM void ItemManager::func_ov000_020a8ab8() {}
ARM void ItemManager::func_ov000_020a8acc() {}
ARM void ItemManager::func_ov000_020a8ae0() {}
ARM void ItemManager::func_ov000_020a8af4() {}
ARM void ItemManager::func_ov000_020a8b48() {}
ARM void ItemManager::func_ov000_020a8b7c() {}
ARM void ItemManager::func_ov000_020a8bb0() {}
ARM void ItemManager::func_ov000_020a8cc0() {}
ARM void ItemManager::func_ov000_020a8ce0() {}
ARM void ItemManager::func_ov000_020a8d08() {}
ARM void ItemManager::func_ov000_020a8d28() {}
ARM void ItemManager::func_ov000_020a8da0() {}
ARM void ItemManager::func_ov000_020a8da4() {}
ARM void ItemManager::func_ov000_020a8db0() {}
ARM void ItemManager::func_ov000_020a8dd0() {}
ARM void ItemManager::func_ov000_020a8df0() {}
ARM void ItemManager::func_ov000_020a8e84() {}
ARM void ItemManager::func_ov000_020a8e9c() {}
ARM void ItemManager::func_ov000_020a8ec0() {}

ARM unk32 ItemManager::func_ov000_020a8f54() {
    return 1;
}

ARM unk32 ItemManager::func_ov000_020a8f5c() {
    return 1;
}

ARM unk32 ItemManager::func_ov000_020a8f64() {
    return 0x7B;
}

ARM void ItemManager::func_ov000_020a8f6c() {}
ARM void ItemManager::func_ov000_020a8f78() {}
ARM void ItemManager::func_ov000_020a8fe0() {}
ARM void ItemManager::func_ov000_020a8ff4() {}
ARM void ItemManager::func_ov000_020a914c() {}
ARM void ItemManager::func_ov000_020a9150() {}

ARM unk32 ItemManager::func_ov000_020a91a0() {
    return 1;
}

ARM unk32 ItemManager::func_ov000_020a91a8() {
    return -1;
}

ARM unk32 ItemManager::func_ov000_020a91b0() {
    return 1;
}

ARM void ItemManager::func_ov000_020a91b8() {}
ARM void ItemManager::func_ov000_020a9200() {}
ARM void ItemManager::func_ov000_020a921c() {}
ARM void ItemManager::func_ov000_020a9240() {}
ARM void ItemManager::func_ov000_020a9244() {}
ARM void ItemManager::func_ov000_020a9248() {}
ARM void ItemManager::func_ov000_020a92d0() {}
ARM void ItemManager::func_ov000_020a9448() {}
ARM void ItemManager::func_ov000_020a94b0() {}
ARM void ItemManager::func_ov000_020a9598() {}
ARM void ItemManager::func_ov000_020a95c4() {}
ARM void ItemManager::func_ov000_020a95d4() {}
ARM void ItemManager::func_ov000_020a95d8() {}
ARM void ItemManager::func_ov000_020a95e4() {}

ARM unk32 ItemManager::func_ov000_020a97fc() {
    return 1;
}

ARM void ItemManager::func_ov000_020a9804() {}
ARM void ItemManager::func_ov000_020a98f0() {}
ARM void ItemManager::func_ov000_020a98f4() {}
ARM void ItemManager::func_ov000_020a995c() {}
ARM void ItemManager::func_ov000_020a99a4() {}
ARM void ItemManager::func_ov000_020a99d8() {}
ARM void ItemManager::func_ov000_020a9a20() {}
ARM void ItemManager::func_ov000_020a9a34() {}
ARM void ItemManager::func_ov000_020a9a50() {}
ARM void ItemManager::func_ov000_020a9a94() {}

ARM void ItemManager::func_ov000_020a9abc() {}
ARM void ItemManager::func_ov000_020a9ae0() {}
ARM void ItemManager::func_ov000_020a9afc() {}
