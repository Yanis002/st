//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKLTR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkKLTR);

ARM Actor *ActorProfileUnkKLTR::Create() {
    return new(HeapIndex_2) ActorUnkKLTR();
}

ARM ActorProfileUnkKLTR::ActorProfileUnkKLTR() :
    ActorProfile_Derived1(ActorId_KLTR) {
    for (s8 i = 0; i < ARRAY_LEN(this->mUnk_16); i++) {
        this->mUnk_16[i] = 2;
    }

    this->mUnk_04.pos.x = FLOAT_TO_Q20(0.0f);
    this->mUnk_04.pos.y = FLOAT_TO_Q20(0.25f);
    this->mUnk_04.pos.z = FLOAT_TO_Q20(0.0f);
    this->mUnk_04.size  = FLOAT_TO_Q20(0.25f);

    this->mUnk_3C.mUnk_15 = 1;
}

ARM void ActorUnkKLTR::func_ov026_021116e0(void) {}

ARM ActorUnkKLTR::ActorUnkKLTR() :
    mUnk_0A4(&mUnk_0A8),
    mUnk_0A8(1, 0),
    mUnk_300(0) {
    this->mUnk_B14 = 0;
    this->func_ov000_0209862c(4);
    this->mUnk_48 = 5;
    this->mUnk_314.mUnk_10.func_ov026_0210136c(GET_PROFILE(ActorProfileUnkKLTR)->vfunc_04());
    this->mUnk_0A4->func_ov026_020ee538(this->mUnk_314.mUnk_10.mUnk_00);
}

ARM ActorUnkKLTR::~ActorUnkKLTR() {}

ARM bool ActorUnkKLTR::vfunc_18(unk32 param1) {}
ARM void ActorUnkKLTR::vfunc_1c(void) {}
ARM void ActorUnkKLTR::vfunc_20(void) {}
ARM void ActorUnkKLTR::vfunc_24(void) {}
ARM void ActorUnkKLTR::func_ov026_02111ac4(void) {}
ARM void ActorUnkKLTR::func_ov026_02111c08(void) {}
ARM void ActorUnkKLTR::func_ov026_02111d50(void) {}
ARM void ActorUnkKLTR::vfunc_2c(unk32 param1) {}
ARM void ActorUnkKLTR::vfunc_30(void) {}
ARM void ActorUnkKLTR::func_ov026_0211202c(void) {}
ARM void ActorUnkKLTR::func_ov026_0211205c(void) {}
ARM void ActorUnkKLTR::func_ov026_02112088(void) {}
ARM void ActorUnkKLTR::func_ov026_0211210c(void) {}
ARM void ActorUnkKLTR::func_ov026_02112328(void) {}
ARM void ActorUnkKLTR::func_ov026_021127e8(void) {}
ARM void ActorUnkKLTR::func_ov026_02112850(void) {}
ARM void ActorUnkKLTR::func_ov026_02112944(void) {}
ARM void ActorUnkKLTR::func_ov026_02112bd4(void) {}
ARM void ActorUnkKLTR::func_ov026_02112ca8(void) {}
ARM void ActorUnkKLTR::func_ov026_02112cbc(void) {}
ARM void ActorUnkKLTR::func_ov026_02112cc0(void) {}
ARM void ActorUnkKLTR::func_ov026_02112e28(void) {}
ARM void ActorUnkKLTR::func_ov026_02112ecc(void) {}
ARM void ActorUnkKLTR::func_ov026_02112f08(void) {}
ARM void ActorUnkKLTR::func_ov026_02112fb0(void) {}
ARM void ActorUnkKLTR::func_ov026_02112fec(void) {}
ARM void ActorUnkKLTR::func_ov026_02112ff8(void) {}
ARM void ActorUnkKLTR::func_ov026_02113040(void) {}
ARM void ActorUnkKLTR::func_ov026_02113118(void) {}
ARM void ActorUnkKLTR::func_ov026_02113204(void) {}
ARM void ActorUnkKLTR::func_ov026_021132c0(void) {}
ARM void ActorUnkKLTR::func_ov026_02113304(void) {}
ARM void ActorUnkKLTR::func_ov026_021133b0(void) {}
ARM void ActorUnkKLTR::func_ov026_0211340c(void) {}
ARM void ActorUnkKLTR::func_ov026_021134c8(void) {}
ARM void ActorUnkKLTR::func_ov026_0211350c(void) {}
ARM void ActorUnkKLTR::func_ov026_021135b8(void) {}
ARM void ActorUnkKLTR::func_ov026_021135e4(void) {}
ARM void ActorUnkKLTR::func_ov026_02113704(void) {}
ARM void ActorUnkKLTR::func_ov026_02113718(void) {}
ARM void ActorUnkKLTR::func_ov026_02113784(void) {}
ARM void ActorUnkKLTR::func_ov026_0211391c(void) {}
ARM void ActorUnkKLTR::func_ov026_02113a40(void) {}
ARM void ActorUnkKLTR::func_ov026_02113a5c(void) {}
ARM void ActorUnkKLTR::func_ov026_02113b5c(void) {}
ARM void ActorUnkKLTR::func_ov026_02113b98(void) {}

ARM ActorProfileUnkKLTR::~ActorProfileUnkKLTR() {}
