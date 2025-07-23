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
    /* 16 */ u8 mTearsAmount; // number of tears of light
    /* 17 */ u8 mKeyAmount; // number of small keys
    /* 18 */ u8 mQuiverCapacity;
    /* 19 */ u8 mArrowAmount;
    /* 1a */ u8 mBombBagCapacity;
    /* 1b */ u8 mBombAmount;
    /* 1c */ u8 mPotions[MAX_POTIONS];
    /* 1e */ unk16 mUnk_1e;
    /* 20 */ unk32 *mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */

    ItemManager();
    ~ItemManager();

    void func_ov000_020a863c(unk32 param1);
    unk8 func_ov000_020a8728();
    unk8 func_ov000_020a8748();
    void func_ov000_020a87c8(unk32 param1);
    void func_ov000_020a8768(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_020a87ec(unk32 param1);
    void func_ov000_020a8820(unk32 param1);
    void func_ov000_020a888c(unk32 param1);

    bool func_ov110_02184a40(unk32 param1);

    static unk32 func_ov110_02185db4(unk32 param1);

    void thing(unk32 param1) {
        unk32 var_r1;

        switch (param1 - 0xA) {          /* switch 2; irregular */
            case 0:                     /* switch 2 */
                this->func_ov000_020a87c8(1);
                return;
            case 2:                     /* switch 2 */
                var_r1 = 1;
                break;
            case 3:                     /* switch 2 */
                var_r1 = 5;
                break;
            case 4:                     /* switch 2 */
                var_r1 = 20;
                break;
            case 5:                     /* switch 2 */
                var_r1 = 100;
                break;
            case 6:                     /* switch 2 */
                var_r1 = 200;
                break;
            case 7:                     /* switch 2 */
                var_r1 = 300;
                break;
        }

        this->func_ov000_020a8768(var_r1, 1, 1);
    }
};
