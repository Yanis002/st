#include "Player/PlayerBoomerang.hpp"
#include "Item/ItemManager.hpp"
#include "Player/PlayerGet.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

extern "C" void func_01ffb974(unk32, unk32 *, unk32 *);
extern "C" void func_01ff993c(Vec3p *, Vec3p *, unk32);
extern "C" void func_ov000_0205cadc(const UnkStruct_ov110_021861ec *, unk32, unk32, unk32, unk32 *);
extern "C" void func_ov000_0208ba10(struct UnkStruct_auStack_18 *, void *, unk32);
extern "C" void func_ov000_0205d65c(struct UnkStruct_auStack_18 *, Vec3p *, Vec3p *, u16);
extern unk32 data_ov000_020b1968;
extern "C" unk32 func_01ffd118(unk32 *, Vec3p *);
extern unk32 data_027e0c90;

const UnkStruct_ov110_021861ec data_ov104_02185168 = UnkStruct_ov110_021861ec(0xFFFFFE67, 0x800, 0xFFFFFF86);

ARM bool UnkStruct_ov000_0208f820_24::func_ov104_02184a40(unk32 param1, Vec3p *param2, Vec3p *param3) {
    Vec3p auStack_20;

    if (this->mUnk_020 != 0) {
        func_01ffb974(param1 - this->mUnk_03c, &this->mUnk_044, &this->mUnk_038);
        this->func_ov000_0208834c(&auStack_20);
        func_01ff993c(param2, &auStack_20, CoSqrt((POW(this->mUnk_060) + POW(this->mUnk_062) + 4) * POW(4)));
        return true;
    }

    return false;
}

ARM PlayerBoomerang_6c_base_2::~PlayerBoomerang_6c_base_2() {}

ARM PlayerBoomerang::PlayerBoomerang() :
    // mUnk_54({0, 0, 0}),
    mUnk_60(*mUnk_34),
    mUnk_ac(1),
    mUnk_ad(0) {}

ARM PlayerBoomerang::~PlayerBoomerang() {
    if (this->mUnk_ac != 0) {
        this->mUnk_28->pItemManager->func_ov000_020a8aa4()->mUnk_008.func_ov031_020dc480();
    }

    // real?
    this->mUnk_6c.mUnk_04.~UnkStruct_ov000_020b1968();
}

struct UnkStruct_auStack_18 {
    s16 mUnk_00;
    s16 mUnk_02;
};

// non-matching
ARM void PlayerBoomerang::vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) {
    UnkStruct_auStack_18 auStack_14;
    UnkStruct_auStack_18 auStack_18;

    this->mUnk_2c->mUnk_58 = 0;
    func_ov000_0208ba10(&auStack_14, &this->mUnk_24->mUnk_094, 0);

    switch (param1->mUnk_04) {
        case 0x65:
            this->mUnk_ad = 0;
            break;
        case 0x66:
            this->mUnk_54.x = 0;
            this->mUnk_54.y = 0;
            this->mUnk_54.z = 0;
            func_ov000_0205d65c(&auStack_18, this->mUnk_34, &this->mUnk_60, this->mUnk_40->mUnk_00);
            this->mUnk_40->mUnk_00 = auStack_18.mUnk_00;
            break;
        default:
            break;
    }
}

ARM void PlayerBoomerang::vfunc_10(unk32 param1, unk32 param2) {
    if (this->func_ov000_02090750(param2) != 0) {
        return;
    }

    switch (param1) {
        case 0x65:
            if (!(this->mUnk_24->mUnk_104 & 0x100)) {
                this->mUnk_30->func_ov000_020921e4(this->func_ov000_0209078c(param2));
                return;
            }

            if (this->mUnk_24->mUnk_104 & 0x20) {
                return;
            }

            PlayerBoomerangItem *temp_r5 = this->mUnk_28->pItemManager->func_ov000_020a8aa4();
            Vec3p sp20;

            if (this->mUnk_24->func_ov104_02184a40(this->mUnk_34->y + 0x800, &this->mUnk_54, &sp20)) {
                this->mUnk_ad = 1;

                if (((u32) (((u32) (temp_r5->mUnk_31c - temp_r5->mUnk_318) >> 0x1F) +
                            ((temp_r5->mUnk_31c - temp_r5->mUnk_318) / 12)) < 0x40U) &&
                    (func_01ffd118(&data_027e0c90, &sp20) != 0)) {
                    this->mUnk_24->func_ov000_02088da8(0x8D74);
                    unk32 temp_r2 = ((u32) (temp_r5->mUnk_31c - temp_r5->mUnk_318) >> 0x1F) +
                                    ((temp_r5->mUnk_31c - temp_r5->mUnk_318) / 12);

                    if (temp_r2 == 0) {
                        this->mUnk_60 = sp20;
                    }

                    temp_r5->mUnk_008.func_ov031_020dc4b8(&sp20, temp_r2);
                }
            }
            break;
        case 0x66:
            break;
        default:
            break;
    }
}

ARM void PlayerBoomerang::vfunc_18(unk32 param1, unk32 param2, unk32 param3, u8 param4) {
    if (param2 != 0x65 && param2 != 0x66) {
        return;
    }

    if (this->mUnk_ac == 0 || param3 == 0) {
        return;
    }

    if (param4 != 0) {
        this->mUnk_48->func_ov017_020bbf6c(&this->mUnk_6c);
        return;
    }

    this->mUnk_6c.vfunc_08();
}

ARM unk32 PlayerBoomerang::vfunc_1c(Vec3p *param1) {
    if (data_027e0cdc->func_ov000_02082a28(7) == 0) {
        Vec3p_Add(this->mUnk_34, &this->mUnk_54, param1);
        return 7;
    }

    return this->UnkStruct_ov000_0208f820::vfunc_1c(param1);
}

ARM PlayerBoomerang_6c::PlayerBoomerang_6c() {
    UnkStruct_027e0ce0_1c *unk_1c = data_027e0ce0->mUnk_1c;
    UnkStruct_ov000_020afc48 *ret = ItemManager::func_ov000_020a8974(ItemFlag_Boomerang);

    this->mUnk_08 = unk_1c->func_ov000_0208ed30(0, 1, ret->mUnk_10);
    // this->mUnk_04 = &data_ov000_020b1968;
    this->mUnk_0c = 1;
    func_ov000_0205cadc(&data_ov104_02185168, 0xFFFFC60B, 0xFFFFFC72, 0xFFFFD555, &this->mUnk_10);
}

ARM void PlayerBoomerang_6c::vfunc_08() {
    this->func_ov000_0208c724(&this->mUnk_04, 0x1B, &this->mUnk_10);
}

ARM PlayerBoomerang_6c::~PlayerBoomerang_6c() {}
