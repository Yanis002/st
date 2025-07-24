#include "Actor/ActorRupee.hpp"

extern unk32 data_ov031_021166e8;

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
ARM void ActorRupee::func_ov031_020e8fec() {}
ARM void ActorRupee::func_ov031_020e9068() {}
ARM void ActorRupee::func_ov031_020e9108() {}
ARM void ActorRupee::func_ov031_020e91a8() {}
ARM void ActorRupee::func_ov031_020e9234() {}
ARM void ActorRupee::func_ov031_020e9254() {}
ARM void ActorRupee::func_ov031_020e92e0() {}
ARM void ActorRupee::func_ov031_020e9310() {}
ARM void ActorRupee::func_ov031_020e9428() {}
ARM void ActorRupee::func_ov031_020e942c() {}
ARM void ActorRupee::func_ov031_020e9430() {}
ARM void ActorRupee::func_ov031_020e9434() {}
ARM void ActorRupee::func_ov031_020e9438() {}
ARM void ActorRupee::func_ov031_020e9450() {}
ARM void ActorRupee::func_ov031_020e94d4() {}
ARM void ActorRupee::func_ov031_020e951c() {}
ARM void ActorRupee::func_ov031_020e9598() {}
ARM void ActorRupee::func_ov031_020e95ac() {}
ARM void ActorRupee::func_ov031_020e95b0() {}
ARM void ActorRupee::func_ov031_020e95c0() {}
ARM void ActorRupee::func_ov031_020e9610() {}
ARM void ActorRupee::func_ov031_020e9624() {}
ARM void ActorRupee::func_ov031_020e9638() {}
ARM void ActorRupee::func_ov031_020e96bc() {}
ARM void ActorRupee::func_ov031_020e970c() {}
ARM void ActorRupee::func_ov031_020e9740() {}
ARM void ActorRupee::func_ov031_020e9838() {}
ARM void ActorRupee::func_ov031_020e98c4() {}
ARM void ActorRupee::func_ov031_020e9904() {}
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
