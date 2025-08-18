#include "Player/PlayerBomb.hpp"
#include "Actor/Actor.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0ce4.hpp"

extern "C" unk32 func_ov031_020db2dc();
extern "C" void func_ov000_0208ba10(char *, void *, unk32);

// non-matching
ARM ActorUnk_ov000_020a8bb0 *PlayerBombItem::func_ov109_02184a40(Vec3p *param1, u16 param2, unk32 param3) {
    unk32 iVar1 = func_ov031_020db2dc();

    if (iVar1 >= 0 && iVar1 < 3) {
        Actor_5c AStack_58;

        AStack_58.mUnk_28 = 0;
        AStack_58.func_ov000_020975f8();
        AStack_58.mUnk_00.x  = param1->x;
        AStack_58.mUnk_00.y  = param1->y;
        AStack_58.mUnk_00.z  = param1->z;
        AStack_58.mUnk_10[0] = 0;
        AStack_58.mUnk_0c    = param2;
        AStack_58.mUnk_28    = param3;

        ActorUnk uStack_5c;
        uStack_5c.func_ov000_020973f4(&data_ov000_020b539c, ActorId_Bomb, &AStack_58);
        this->mUnk_00[iVar1] = uStack_5c.mUnk_00;
        return data_027e0ce4->func_01fff3b4(&uStack_5c);
    }

    return NULL;
}

// non-matching
ARM void PlayerBomb::vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) {
    char auStack_24[4];
    ItemManager *pItemManager;
    ActorUnk_ov000_020a8bb0 *piVar4;

    piVar4                 = NULL;
    this->mUnk_2c->mUnk_16 = 0;
    func_ov000_0208ba10(auStack_24, &this->mUnk_24->mUnk_094, 0);

    if (*(u32 *) this->mUnk_04.mUnk_00 != 0x7B) {
        return;
    }

    pItemManager = this->mUnk_28->pItemManager;

    if (pItemManager->mBombAmount != 0) {
        PlayerBombItem *pPVar1 = pItemManager->func_ov000_020a8acc();

        Vec3p unk_34;
        unk_34.x = this->mUnk_34->x;
        unk_34.y = this->mUnk_34->y + FLOAT_TO_Q20(1.0);
        unk_34.z = this->mUnk_34->z;

        piVar4 = pPVar1->func_ov109_02184a40(&unk_34, this->mUnk_40->mUnk_00, this->mUnk_28->mUnk_50);
    }

    if (piVar4 != NULL) {
        *this->mUnk_44 = piVar4->mUnk_8c;

        if (piVar4->vfunc_38(this->mUnk_28->mUnk_50) != 0) {
            data_027e09a8->func_ov000_02071700(0x8C73, this->mUnk_34);
            data_027e09a8->func_ov000_020717cc(0x8C1B, this->mUnk_34);
            return;
        }

        *this->mUnk_44 = 0;
        return;
    }
}

ARM void PlayerBomb::vfunc_10(unk32 param1, unk32 param2) {
    if (func_ov000_02090750(param2) != 0) {
        this->mUnk_28->func_ov000_0208cda0();
        this->mUnk_30->func_ov000_020921e4(this->func_ov000_0209078c(param2));
        return;
    }

    if (param1 == 0x7B) {
        int uStack_20[3];
        uStack_20[0] = 0;
        uStack_20[1] = 0;
        uStack_20[2] = 0;

        unk32 iVar1 = this->func_ov000_0209008c(uStack_20);
        if (iVar1 != 0) {
            if (this->mUnk_24->mUnk_104 & 0x100) {
                *(u32 *) this->mUnk_04.mUnk_00 = uStack_20[0];
                *(u32 *) this->mUnk_04.mUnk_04 = uStack_20[1];
                this->mUnk_04.mUnk_08          = uStack_20[2];
                this->mUnk_30->func_ov000_020921e4(iVar1);
                return;
            }
        }

        if (this->mUnk_50->func_01ff8fa8() != 0) {
            if (!(this->mUnk_24->mUnk_104 & 0x100)) {
                this->mUnk_28->func_ov000_0208cda0();
            }

            this->mUnk_30->func_ov000_020921e4(this->func_ov000_0209078c(param2));
        }
    }
}

ARM PlayerBomb::~PlayerBomb() {}
