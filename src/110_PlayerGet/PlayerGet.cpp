#include "Player/PlayerGet.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce4.hpp"
#include "Unknown/UnkStruct_027e0ce8.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b51c0.hpp"
#include "nitro/math.h"
#include "versions.h"
#include "Actor/ActorId.hpp"

extern "C" void func_01ffb6e4(unk32, const void *, void *);
extern "C" void func_01ffc5a0(unk32 *, unk32, u16, void *, unk32);
extern "C" void func_ov000_0208f820();
extern "C" unk32 func_ov024_020d5354(unk32 *, u16 *);
extern "C" void func_ov000_02058fc4(unk32 *, UnkStruct_PlayerGet_74 *, Vec3p *);
extern unk32 *data_027e0958;
extern "C" void func_ov024_020d6370(unk32 *, ItemId);
extern unk32 *data_ov024_020d86b0;
extern "C" unk32 func_01fff584();
class UnkStruct_ov000_02067bc4 {
public:
    /* 00 */ virtual unk32 vfunc_00();
    /* 04 */ virtual unk32 vfunc_04();
    /* 08 */ virtual unk32 vfunc_08();

    UnkStruct_ov000_02067bc4 *func_ov000_02067bc4(unk32);
};
extern UnkStruct_ov000_02067bc4 data_ov000_020b504c;

static const unk32 data_ov110_02185dc4[1] = {8};

extern "C" unk32 func_ov000_020a8984(unk32);
extern u8 data_ov000_020afc43;
extern u8 data_ov000_020afc40;
extern "C" unk32 func_01fff458();

class UnkStruct_027e09a4 {
public:
    /* 00 */ unk32 mUnk_00;

    unk8 func_ov000_02070bd0(unk32, unk32);
};
extern UnkStruct_027e09a4 *data_027e09a4;

struct UnkStruct_ov110_02185dc8 {
    u16 mUnk_00;
    u16 mUnk_02;
};

static const UnkStruct_ov110_02185dc8 data_ov110_02185dc8[] = {
    {0x02, 0x11}, {0x01, 0x10}, {0x41, 0x12}, {0x26, 0x13}, {0x63, 0x14}, {0x62, 0x15}, {0x59, 0x16}, {0x3E, 0x17},
};

// non-matching
ARM bool ItemManager::func_ov110_02184a40(ItemId itemId) {
    s16 var_r1_3;
    s32 temp_r0_3;
    u32 temp_r0_5;
    u32 temp_r2;
    u32 var_r3;

    switch (itemId) {
        case ItemId_NormalKey:
            this->func_ov000_020a87c8(1);
            break;
        case ItemId_GreenRupee:
            this->func_ov000_020a8768(1, 1, 1);
            break;
        case ItemId_BlueRupee:
            this->func_ov000_020a8768(5, 1, 1);
            break;
        case ItemId_RedRupee:
            this->func_ov000_020a8768(20, 1, 1);
            break;
        case ItemId_BigGreenRupee:
            this->func_ov000_020a8768(100, 1, 1);
            break;
        case ItemId_BigRedRupee:
            this->func_ov000_020a8768(200, 1, 1);
            break;
        case ItemId_BigGoldRupee:
            this->func_ov000_020a8768(300, 1, 1);
            break;
        case ItemId_HeartContainer:
            data_027e0ce0->func_ov000_0208a318(4, 1, 1);
            break;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            if (this->mQuiverCapacity < 2) {
                this->mQuiverCapacity++;
            }

            this->mArrowAmount = this->func_ov000_020a8728();
            break;
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            if (this->mBombBagCapacity < 2) {
                this->mBombBagCapacity++;
            }

            this->mBombAmount = this->func_ov000_020a8748();
            break;
        case ItemId_RedPotion:
            this->func_ov000_020a888c(PotionType_Red);
            break;
        case ItemId_PurplePotion:
            this->func_ov000_020a888c(PotionType_Purple);
            break;
        case ItemId_YellowPotion:
            this->func_ov000_020a888c(PotionType_Yellow);
            break;
        case ItemId_ArrowsRefill:
            this->func_ov000_020a87ec(10);
            break;
        case ItemId_BombsRefill:
            this->func_ov000_020a8820(10);
            break;
        case ItemId_TearLight:
            if (this->mTearsAmount >= 3) {
                this->mTearsAmount = 3;
            } else {
                this->mTearsAmount++;
            }
            break;
        default:
            temp_r0_3 = func_ov000_020a8984(itemId);

            if (temp_r0_3 != -1) {
                this->func_ov000_020a863c(temp_r0_3);

                switch (temp_r0_3) {
                    case 4:
                        this->mBombBagCapacity = 0;
                        this->mBombAmount      = data_ov000_020afc43;
                        break;
                    case 3:
                        this->mQuiverCapacity = 0;
                        this->mArrowAmount    = data_ov000_020afc40;
                        break;
                    default:
                        break;
                }

                if (this->mEquippedItem == -1) {
                    this->mEquippedItem = temp_r0_3;
                    data_ov024_020d8698->func_ov024_020cd458(temp_r0_3, 0);
                }
            } else {
                var_r1_3 = -1;

                for (var_r3 = 0; var_r3 < 8; var_r3++) {
                    if (itemId == data_ov110_02185dc8[var_r3].mUnk_00) {
                        var_r1_3 = data_ov110_02185dc8[var_r3].mUnk_02;
                        break;
                    }
                }

                if (var_r1_3 != -1) {
                    this->func_ov000_020a863c(var_r1_3);
                }
            }
            break;
    }

    temp_r0_5 = ItemManager::func_ov110_02185db4(itemId);

    if (temp_r0_5 != 0) {
        temp_r0_5 &= 0xFFFF;
        temp_r2 = (temp_r0_5 >> 5);
        data_027e09b8->mUnk_14[temp_r2] |= 1 << (temp_r0_5 & 0x1F);
    }

    data_027e0ce0->mUnk_34->func_ov110_02185d3c(itemId);
    data_ov000_020b6510->func_ov000_020aa0ac(itemId);
    func_ov024_020d6370(data_ov024_020d86b0, itemId);

    if (!GET_FLAG(this->mUnk_08, ItemFlag_LokomoSword) && itemId == ItemId_TearLight && this->mTearsAmount == 3 &&
        (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_Tower)) {
        return true;
    }

    return false;
}

static const unk32 data_ov110_02185de8[] = {
    0x30001,  0x30002,  0xB00D6,  0x8007A,  0x30003, 0x8007B, 0x8007C, 0x8007D, 0x8007E, 0x30004,  0x30005, 0x30006,  0x30007,
    0x30008,  0x30009,  0x3000A,  0x3000B,  0x3000C, 0x3000D, 0x3000E, 0x3000F, 0xD0000, 0xD0001,  0xD0002, 0xD0003,  0xF00EB,
    0x100000, 0x110000, 0x1C008E, 0x1E0048, 0x30010, 0x30011, 0x30012, 0x30013, 0x30014, 0x30015,  0x30016, 0x30017,  0xB00D7,
    0x30018,  0x30019,  0x3001A,  0x3001B,  0x3001C, 0x3001D, 0x3001E, 0x3001F, 0x30020, 0x30021,  0x30022, 0x30023,  0x30024,
    0x30025,  0x30026,  0x30027,  0x30028,  0x30029, 0x3002A, 0x3002B, 0x3002C, 0x3002D, 0x3002E,  0x3002F, 0x1400F7, 0x8007F,
    0x30030,  0x30031,  0x30032,  0x30033,  0x30034, 0x30035, 0x30036, 0x30037, 0x30038, 0x30039,  0x3003A, 0x3003B,  0x3003C,
    0x3003D,  0x3003E,  0x3003F,  0x30040,  0x30041, 0x30042, 0x30043, 0x30044, 0x30045, 0x30046,  0x30047, 0x1400F8, 0x30048,
    0x30049,  0x3004A,  0x3004B,  0x3004C,  0x3004D, 0xD0004, 0xD0005, 0x3004E, 0x3004F, 0x1400F9, 0xF00EC, 0x80080,  0x110001,
    0x1400FA, 0x100001, 0x30050,  0x30051,  0x30052, 0x30053, 0x30054, 0x30055, 0x30056, 0x30057,  0x30058, 0x030059, 0x3005A,
};

static const unk32 data_ov110_02185fbc[] = {
    0x000, 0x000, 0x003, 0x000, 0x000, 0x1A3, 0x000, 0x27B, 0x0CB, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    0x000, 0x076, 0x077, 0x078, 0x00F, 0x010, 0x011, 0x012, 0x008, 0x009, 0x00A, 0x00B, 0x00C, 0x00D, 0x002, 0x01F, 0x020,
    0x021, 0x079, 0x07A, 0x07B, 0x000, 0x000, 0x000, 0x000, 0x000, 0x068, 0x069, 0x06A, 0x06B, 0x06C, 0x06D, 0x06E, 0x06F,
    0x070, 0x071, 0x072, 0x073, 0x074, 0x075, 0x0A6, 0x0A7, 0x0A8, 0x0A9, 0x0AA, 0x000, 0x000, 0x0B0, 0x0B1,
};

static const unk32 data_ov110_021860c4[] = {
    0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x12D, 0x000, 0x000,
    0x03C, 0x000, 0x000, 0x000, 0x000, 0x000, 0x0D6, 0x194, 0x18E, 0x18F, 0x190, 0x191, 0x192, 0x193, 0x046, 0x000, 0x000,
};

// non-matching
ARM void PlayerGet::func_ov110_02184dac(unk32 param1, unk32 param2, unk32 param3) {
    UnkStruct_ov000_0208f820_14 *unk_14 = this->mUnk_14;

    // func_01ffc5a0(&unk_14->mUnk_8c, unk_14->mUnk_6c, unk_14->mUnk_70, this->mUnk_04, param3);
}

ARM PlayerGet::PlayerGet() :
    mUnk_54(0),
    mUnk_58_32(0),
    mUnk_5c(-1),
    itemId(ItemId_None),
    mUnk_64(mUnk_44, -1),
    mUnk_6c(0x1000),
    mUnk_70(0),
    mUnk_72(0),
    mUnk_73(0),
    mUnk_88(this),
    mUnk_8c(0) {}

ARM PlayerGet::~PlayerGet() {}

#if IS_JP
ARM bool PlayerGet::func_ov110_02186b8c() {
    switch (this->itemId) {
        case ItemId_NormalShield:
            if (this->mUnk_28->pItemManager->mUnk_12 & 2) {
                return true;
            }
            break;
        case ItemId_AncientShield:
            if (!(this->mUnk_28->pItemManager->mUnk_12 & 2)) {
                return true;
            }
            break;
        default:
            break;
    }

    return false;
}
#endif

static char *data_ov110_021861e0 = "Player/get/";
ARM void PlayerGet::vfunc_0c() {}

const UnkStruct_ov110_021861ec data_ov110_021861ec = UnkStruct_ov110_021861ec(0x5E3, 0x152D, 0xCD);

ARM void PlayerGet::vfunc_10(unk32 param1) {
    unk32 var_r1;
    UnkStruct_func_01fff520_ret **temp_r0_6;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r0_2;
    bool var_r1_2;
    u32 var_r5_2;
    UnkStruct_func_01fff3b4_ret *temp_r0_3;

    switch (param1) {
        case 0x39:
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_5c) == 0) {
                break;
            }

            if (this->mUnk_30->mUnk_70 < 0xF) {
                break;
            }

            this->mUnk_30->func_ov000_020921e4(0x3A);
            break;
        case 0x3A:
            if (this->mUnk_50->func_01ff8fa8() != 0) {
                this->mUnk_30->func_ov000_020921e4(0x3B);
                break;
            }
            if (this->mUnk_50->func_02015080(0x1C000) == 0) {
                break;
            }

            var_r1 = 0x64;
            switch (this->itemId) {
                case ItemId_Nothing:
                case ItemId_NormalShield:
                case ItemId_NormalSword:
                case ItemId_Whirlwind:
                    break;
                case ItemId_NormalKey:
                case ItemId_GreenRupee:
                case ItemId_BlueRupee:
                case ItemId_RedRupee:
                case ItemId_DemonFossil:
                case ItemId_StalfosSkull:
                case ItemId_StarFragment:
                case ItemId_BeeLarvae:
                case ItemId_WoodHeart:
                    var_r1 = 0x65;
                    break;
                case ItemId_HeartContainer:
                    var_r1 = 0x67;
                    break;
                case ItemId_ForestGlyph:
                case ItemId_SnowGlyph:
                case ItemId_OceanGlyph:
                case ItemId_FireGlyph:
                    var_r1 = 0x68;
                    break;
                case ItemId_25:
                case ItemId_26:
                case ItemId_27:
                case ItemId_28:
                case ItemId_29:
                case ItemId_PanFluteSong_101:
                case ItemId_PanFluteSong_102:
                case ItemId_PanFluteSong_103:
                case ItemId_PanFluteSong_104:
                case ItemId_PanFluteSong_105:
                    var_r1 = 0x66;
                    break;
                case ItemId_ForceGem_18:
                case ItemId_ForceGem_19:
                case ItemId_ForceGem_20:
                case ItemId_ForceGem_35:
                case ItemId_ForceGem_36:
                case ItemId_ForceGem_37:
                case ItemId_ForceGem_43:
                case ItemId_ForceGem_44:
                case ItemId_ForceGem_45:
                case ItemId_ForceGem_46:
                case ItemId_ForceGem_47:
                case ItemId_ForceGem_48:
                case ItemId_ForceGem_49:
                case ItemId_ForceGem_50:
                case ItemId_ForceGem_51:
                case ItemId_ForceGem_52:
                case ItemId_ForceGem_53:
                case ItemId_ForceGem_54:
                case ItemId_ForceGem_55:
                case ItemId_ForceGem_56:
                case ItemId_ForceGem_57:
                case ItemId_ForceGem_58:
                case ItemId_ForceGem_59:
                case ItemId_ForceGem_60:
                case ItemId_ForceGem_61:
                    var_r1 = 0x6A;
                    break;
                default:
                    break;
            }
            data_ov000_020b51b8.func_ov000_0206d274(var_r1);
            break;
        case 0x3B:
            var_r1_2 = false;

            if (data_ov000_020b504c.func_ov000_02067bc4(0)->vfunc_08() == 0) {
                var_r1_2 = true;
            }

            if (var_r1_2) {
                if (this->itemId == ItemId_Nothing) {
                    var_r1_2 = true;
                } else {
                    if (this->mUnk_30->mUnk_70 >= 0x1E) {
                        var_r1_2 = true;
                    } else {
                        goto todo_remove_me;
                    }
                }
            } else {
            todo_remove_me:
                var_r1_2 = false;
            }

            if (this->mUnk_72 == 0 && var_r1_2) {
                temp_r6 = this->mUnk_28->pItemManager->func_ov110_02184a40(this->itemId);

                switch (this->itemId) {
                    case ItemId_NormalShield:
                    case ItemId_AncientShield:
                        this->mUnk_30->func_ov000_020936ec();

                        if (((this->mUnk_54.mUnk_00_16 << 0x10) >> 0x1E) == 1) {
                            temp_r0_3 = data_027e0ce4->func_01fff3b4(this->mUnk_54.mUnk_00_32);
                            if ((temp_r0_3 != NULL) && (func_01fff458() == ActorId_NormalShield)) {
                                this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                                temp_r0_3->func_ov062_02158ce8();
                            }
                        } else {
                            if (this->itemId == ItemId_AncientShield) {
                                this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                            } else if (this->itemId == ItemId_NormalShield) {
                                this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                            }
                        }

                        this->mUnk_30->func_ov000_02093a04();
                        break;
                    case ItemId_NormalSword:
                    case ItemId_LokomoSword:
                        this->mUnk_30->func_ov000_020936ec();
                        this->mUnk_30->mUnk_10->func_ov031_020e076c();
                        break;
                    case ItemId_RecruitUniform2:
                    case ItemId_EngineerUniform:
                        if (data_027e09a4->mUnk_00 == 0x2F) {
                            this->mUnk_28->func_ov058_02152a24();
                        }
                        break;
                    default:
                        break;
                }

                if (this->mUnk_54.mUnk_00_16 == 0x1000) {
                    UnkStruct_PlayerGet_54 structure = this->mUnk_54;

                    if (data_027e0ce8->func_01fff498(structure) != 0) {
                        var_r5_2 = '\0';

                        switch (func_01fff584()) {
                            case 'TRLN':
                                var_r5_2 = 'TREN';
                                break;
                            case 'TREN':
                                var_r5_2 = 'TRLN';
                                break;
                            default:
                                break;
                        }

                        if (var_r5_2 != 0) {
                            // data_ov000_020b34c4.mUnk_04 = var_r5_2;
                            temp_r0_6 = data_027e0ce8->func_01fff520(&data_ov000_020b34c4, data_027e0ce8->mUnk_00);
                            if (temp_r0_6 == data_027e0ce8->mUnk_08) {
                                (*temp_r0_6)->func_ov031_02103878();
                            }
                        }
                    }
                }

                if (this->itemId == ItemId_ForestGlyph) {
                    this->mUnk_72 = data_027e09a4->func_ov000_02070bd0(0x29, 0);
                } else if (this->itemId == ItemId_FireGlyph) {
                    this->mUnk_72 = data_027e09a4->func_ov000_02070bd0(0x14, 0);
                }

                if (this->mUnk_72 != 0) {
                    break;
                }

                if (temp_r6 == 0) {
                    data_027e09bc->mUnk_0c->func_ov000_02078230(0);
                }

                if (data_027e09b8->func_ov000_020732fc(this->mUnk_5c) != 0) {
                    this->mUnk_5c = -1;
                }

                this->mUnk_40->mUnk_00 = 0;

                if (temp_r6 != 0) {
                    this->mUnk_30->func_ov000_020921e4(0x49);
                    break;
                }

                if ((((u32) (this->mUnk_58_16 << 0x10) >> 0x1E) == 1) && (data_027e09b8->func_ov000_020732dc(2) != 0)) {
                    this->mUnk_04 = this->mUnk_58_32;
                    this->mUnk_30->func_ov000_020921e4(0x57);
                    break;
                }

                this->mUnk_30->func_ov000_020921e4(0);
                break;
            }

            this->mUnk_70 += 0x10E;

            if (this->mUnk_73 == 0) {
                break;
            }

            temp_r5 = data_027e0cd8->mUnk_0c->func_ov000_02080a44();

            if (data_ov000_020b51b8.mUnk_10 != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }

            if (var_r0 != 0) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }

            if (var_r0_2 != 0) {
                break;
            }

            if (temp_r5 == data_ov000_020b51c0.func_02002f04()) {
                break;
            }

            data_ov000_020b51b8.func_ov000_0206c9a8(temp_r5, 0x3C, 0x7F, 0);
            this->mUnk_73 = 0;
            break;
        default:
            break;
    }
}

ARM void PlayerGet::vfunc_18(unk32 param1, unk32 param2, unk32 param3) {
    Vec3p auStack_18;

    switch (param2) {
        case 0x39:
        case 0x3A:
            break;
        case 0x3B:
            if (param3 != 0 && this->itemId != ItemId_Nothing && this->mUnk_90 != 0) {
                Vec3p_Add(this->mUnk_34, (Vec3p *) &data_ov110_021861ec.mUnk_00, &auStack_18);
                func_ov000_02058fc4(data_027e0958, &this->mUnk_74, &auStack_18);
            }
            break;
        default:
            break;
    }
}

ARM UnkStruct_PlayerGet_ec::UnkStruct_PlayerGet_ec() {
    this->mUnk_00 = 0;
}

// non-matching
THUMB void UnkStruct_027e0ce0_34::func_ov110_02185d3c(ItemId itemId) {
    unk32 uStack_14;
    u16 auStack_18[2];

    switch (itemId) {
        case ItemId_31:
            this->func_ov024_020d3d98(0, 0);
            this->mUnk_2c = 1;
            this->mUnk_00 = 0;
            this->mUnk_10 = 0;
            break;
        case ItemId_33:
            this->func_ov024_020d3d98(2, 0);
            this->mUnk_2c = 2;
            this->mUnk_04 = 2;
            this->mUnk_14 = 0;
            break;
        default:
            uStack_14     = -1;
            auStack_18[0] = 0;

            if (func_ov024_020d5354(&uStack_14, auStack_18) != 0) {
                this->func_ov024_020d3ee8(uStack_14, auStack_18[0], 1);
            }
            break;
    }
}

ARM unk32 ItemManager::func_ov110_02185da4(unk32 param1) {
    return data_ov110_02185de8[param1];
}

ARM unk32 ItemManager::func_ov110_02185db4(ItemId itemId) {
    return data_ov110_02185fbc[itemId];
}
