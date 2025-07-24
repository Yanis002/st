#include "Actor/ActorRupee.hpp"

extern unk32 data_ov031_021166e8;

ARM unk32* ActorRupee::func_ov031_020e8cb8() {
    return &data_ov031_021166e8;
}

ARM Actor* ActorRupeeBase::Create() {
    return new(2, 4) ActorRupee();
}

ARM ActorRupeeBase::ActorRupeeBase() : ActorUnk_ov000_0209767c(ActorId_Rupee) {
    this->mUnk_04 = 0;
    this->mUnk_08 = 0x556;
    this->mUnk_0c = 0;
    this->mUnk_10 = 0x556;
}

ARM ActorRupee::ActorRupee() {
    this->mUnk_94 = 0;
    this->mUnk_96 = 0;
    this->mUnk_98 = 0;
    this->mUnk_9a = 6;
    this->mUnk_9c.func_ov000_02097bb8();
    this->mUnk_bc = 0;
    this->mUnk_c0 = 0;
    this->mUnk_c4.func_ov031_020e9ef0(this);
    this->mUnk_e8 = 0;
    this->mUnk_f0.mUnk_00 = 0;
    this->mUnk_f4 = 0;
    this->mUnk_a0 = 0x13100;
    this->mUnk_40 = &this->mUnk_c4;
}

ARM unk32 ActorRupee::vfunc_18() {}
ARM void ActorRupee::vfunc_20() {}
ARM void ActorRupee::vfunc_2c() {}



ARM ActorRupee::~ActorRupee() {}
