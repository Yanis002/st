#include "Actor/ActorRupee.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0ce4.hpp"

extern unk32 data_ov031_021166e8;
extern "C" unk32 func_02017158();
extern "C" void func_01fff05c(u32 *, UnkStruct_027e0cd8_0c *, Vec3p *);
extern "C" void func_ov017_020bf99c();
extern "C" unk32 func_01ffd420(unk32 *);
extern unk32 *data_027e09b8;
extern "C" unk32 func_ov031_020d9834(unk32 *);
extern unk32 *data_027e0d34;

ARM unk32 *ActorRupee::func_ov031_020e8cb8() {
    return &data_ov031_021166e8;
}

ARM Actor *ActorRupeeBase::Create() {
    return new(2, 4) ActorRupee();
}

ARM ActorRupeeBase::ActorRupeeBase() :
    ActorUnk_ov000_0209767c(ActorId_Rupee) {
    this->mUnk_04 = 0;
    this->mUnk_08 = 0x556;
    this->mUnk_0c = 0;
    this->mUnk_10 = 0x556;
}

ARM void ActorRupee::func_ov031_020e8d2c() {}

ARM ActorRupee::ActorRupee() {
    this->mUnk_94 = 0;
    this->mUnk_96 = 0;
    this->mUnk_98 = 0;
    this->mUnk_9a = 6;
    this->mUnk_9c.func_ov000_02097bb8();
    this->mUnk_bc = 0;
    this->mUnk_c0 = 0;
    this->mUnk_c4.func_ov031_020e9ef0(this);
    this->mUnk_e8         = 0;
    this->mUnk_f0.mUnk_00 = 0;
    this->mUnk_f4         = 0;
    this->mUnk_a0         = 0x13100;
    this->mUnk_40         = &this->mUnk_c4;
}

ARM unk32 ActorRupee::vfunc_18() {}

ARM void ActorRupee::func_ov031_020e8fec() {
    switch (this->mUnk_6c) {
        case RupeeId_Green:
            data_027e09a8->func_ov000_02071b30(0x73, &this->mPos, 0);
            break;
        case RupeeId_Blue:
            data_027e09a8->func_ov000_02071b30(0x74, &this->mPos, 0);
            break;
        case RupeeId_Red:
            data_027e09a8->func_ov000_02071b30(0x75, &this->mPos, 0);
            break;
        default:
            break;
    }
}

// non-matching (regalloc)
ARM void ActorRupee::func_ov031_020e9068() {
    bool var_r4 = false;

    switch (this->mUnk_6c) {
        case RupeeId_BigGreen:
        case RupeeId_BigRed:
        case RupeeId_Gold:
            this->func_ov031_020e9904(5);
            break;
        default: {
            ItemManager *pItemManager = data_027e0ce0->mUnk_2c;
            unk32 ret                 = func_02017158();
            pItemManager->func_ov000_020a8768(ret, 0, 1);
            var_r4 = true;
            break;
        }
    }

    if (this->mUnk_80 >= 0 && this->mUnk_76 != 0) {
        this->func_ov000_02098a88(0, 1);
    }

    this->func_ov031_020e8fec();

    if (var_r4) {
        this->func_ov000_020984d0();
    }
}

// https://decomp.me/scratch/FZsEE
ARM void ActorRupee::func_ov031_020e9108() {
    this->mVel.x = gRandom.Next(-0xCD, 0x19B);
    this->mVel.y = gRandom.Next(0, 0x19A);
    this->mVel.z = gRandom.Next(-0xCD, 0x19B);
    this->mUnk_58 |= 0x02;
}

ARM void ActorRupee::func_ov031_020e91a8() {
    u32 sp0;

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }

    this->func_ov031_020e9b88();

    if (!(this->mUnk_46 & 0x03)) {
        return;
    }

    func_01fff05c(&sp0, data_027e0cd8->mUnk_0c, &this->mPos);

    if (((sp0 >> 5) & 0x03) == 2) {
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov031_020e9904(2);
}

ARM void ActorRupee::func_ov031_020e9234() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    this->mUnk_58 |= 0x02;
}

ARM void ActorRupee::func_ov031_020e9254() {
    u32 sp0;

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }

    this->func_ov031_020e9be8();

    if (!(this->mUnk_46 & 0x03)) {
        return;
    }

    func_01fff05c(&sp0, data_027e0cd8->mUnk_0c, &this->mPos);

    if (((sp0 >> 5) & 0x03) == 2) {
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov031_020e9904(2);
}

ARM void ActorRupee::func_ov031_020e92e0() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;

    if (this->mUnk_96 - this->mUnk_94 > 0xB4) {
        this->mUnk_96 = 0xB4;
        this->mUnk_94 = 0;
    }
}

// non-matching
ARM void ActorRupee::func_ov031_020e9310() {
    u32 sp0;

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }

    switch (this->mUnk_ec) {
        case 0:
            if (data_027e0cd8->mUnk_0c->vfunc_28(&this->mPos, 1, 0) < this->mPos.y) {
                this->mUnk_ec++;
            }
            break;
        case 1:
            this->func_ov031_020e9be8();
            if (this->mUnk_46 & 3) {
                this->mVel.x = 0;
                this->mVel.y = 0;
                this->mVel.z = 0;

                func_01fff05c(&sp0, data_027e0cd8->mUnk_0c, &this->mPos);

                if (((sp0 >> 5) & 3) != 2) {
                    this->mUnk_ec = 0;
                } else {
                    this->func_ov000_020984d0();
                }
            }
            break;
        default:
            break;
    }

    this->mUnk_44 = 3;
    this->func_ov000_02098910(0, 0x10);

    if (this->mUnk_46 & 3) {
        return;
    }

    this->func_ov031_020e9904(1);
}

ARM void ActorRupee::func_ov031_020e9428() {}

ARM void ActorRupee::func_ov031_020e942c() {}

ARM void ActorRupee::func_ov031_020e9430() {}

ARM void ActorRupee::func_ov031_020e9434() {}

ARM void ActorRupee::func_ov031_020e9438() {
    func_ov017_020bf99c();
    this->mUnk_9c.func_ov000_02097bec();
}

ARM void ActorRupee::func_ov031_020e9450() {
    this->func_ov017_020bf9c8(data_027e0ce4->func_01fff3b4(this->mUnk_bc));
    this->mPrevPos = this->mPos;
    Vec3p_Add(&this->mPos, &this->mVel, &this->mPos);

    if (!(this->mUnk_58 & 0x20)) {
        return;
    }

    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    this->mUnk_a0 |= 0x1000;
    this->func_ov031_020e9904(0);
}

ARM void ActorRupee::func_ov031_020e94d4() {
    this->mUnk_52 = -1;
    this->mUnk_50 = 0;
    this->mVel.x  = 0;
    this->mVel.y  = 0;
    this->mVel.z  = 0;
    this->mUnk_4a = 0;
    this->mUnk_44 = 0;
    this->mUnk_9c.func_ov000_02097bec();
    this->mUnk_58 &= ~0x02;
}

ARM void ActorRupee::func_ov031_020e951c() {
    s32 var_r1;

    if (func_01ffd420(data_027e09b8) != 0) {
        return;
    }

    var_r1 = -1;

    switch (this->mUnk_6c) {
        case RupeeId_Gold:
            var_r1 = 0x11;
            break;
        case RupeeId_BigGreen:
            var_r1 = 0x0F;
            break;
        case RupeeId_BigRed:
            var_r1 = 0x10;
            break;
        default:
            break;
    }

    if (var_r1 != -1 && func_ov031_020d9834(data_027e0d34) == 0) {
        return;
    }

    this->func_ov000_020984d0();
}

ARM void ActorRupee::func_ov031_020e9598() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

ARM void ActorRupee::func_ov031_020e95ac() {}

ARM void ActorRupee::func_ov031_020e95b0() {
    this->mVel.x = 0;
    this->mVel.z = 0;
}

ARM void ActorRupee::func_ov031_020e95c0() {
    UnkStruct_func_01fff3b4_ret *temp_r0;

    temp_r0 = data_027e0ce4->func_01fff3b4(this->mUnk_c0);
    if (temp_r0 == NULL) {
        this->func_ov031_020e9904(0);
        return;
    }

    this->mPos = temp_r0->mPos;
}

ARM void ActorRupee::func_ov031_020e9610() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

ARM void ActorRupee::func_ov031_020e9624() {
    this->mUnk_9a = 0x14;
    this->mUnk_98 = 0x00;
}

ARM void ActorRupee::func_ov031_020e9638() {}
ARM void ActorRupee::func_ov031_020e96bc() {}
ARM void ActorRupee::func_ov031_020e970c() {}
ARM void ActorRupee::func_ov031_020e9740() {}
ARM void ActorRupee::func_ov031_020e9838() {}
ARM void ActorRupee::func_ov031_020e98c4() {}
ARM void ActorRupee::func_ov031_020e9904(unk32 param1) {}
ARM void ActorRupee::vfunc_20() {}
ARM void ActorRupee::func_ov031_020e9b88() {}
ARM void ActorRupee::func_ov031_020e9be8() {}
ARM void ActorRupee::vfunc_2c() {}

ARM bool ActorRupee::func_ov031_020e9d54() {
    switch (this->mUnk_6c) {
        case RupeeId_BigGreen:
        case RupeeId_BigRed:
        case RupeeId_Gold:
        case RupeeId_7:
            return true;

        default:
            break;
    }

    return false;
}

ARM void ActorRupee::func_ov031_020e9d94() {}
ARM void ActorRupee::func_ov031_020e9e5c() {}
ARM void Actor_c4::func_ov031_020e9ef0(void *param1) {}
ARM void ActorRupee::func_ov031_020e9f28() {}
ARM void ActorRupee::func_ov031_020e9f6c() {}
ARM void ActorRupee::func_ov031_020e9f8c() {}
ARM void ActorRupee::func_ov031_020e9fb4() {}
ARM ActorRupee::~ActorRupee() {}
