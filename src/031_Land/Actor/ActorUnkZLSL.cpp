//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZLSL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkZLSL ActorTypeUnkZLSL::gInstance;

THUMB ActorTypeUnkZLSL *ActorTypeUnkZLSL::GetInstance() {
    return &ActorTypeUnkZLSL::gInstance;
}

THUMB Actor *ActorTypeUnkZLSL::Create() {
    return new(HeapIndex_2) ActorUnkZLSL();
}

THUMB ActorTypeUnkZLSL::ActorTypeUnkZLSL() :
    ActorType(ActorId_ZLSL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkZLSL::ActorUnkZLSL() {}

THUMB void ActorUnkZLSL::func_ov031_020ea0b4(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea0e4(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea0f8(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea100(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea140(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea4f4(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea500(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea50c(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea518(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea524(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ea5c8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea674(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea698(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea7a4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea7a8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea864(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea868(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea86c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea870(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea8c0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea8c4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea8c8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ea8cc(void) {}
ARM void ActorUnkZLSL::func_ov031_020eaa68(void) {}
ARM void ActorUnkZLSL::func_ov031_020eaa88(void) {}
ARM void ActorUnkZLSL::func_ov031_020eaa8c(void) {}
ARM void ActorUnkZLSL::func_ov031_020eab0c(void) {}
ARM void ActorUnkZLSL::func_ov031_020eab40(void) {}
ARM void ActorUnkZLSL::func_ov031_020eac64(void) {}
ARM void ActorUnkZLSL::func_ov031_020eace0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ead0c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ead78(void) {}
ARM void ActorUnkZLSL::func_ov031_020ead7c(void) {}
ARM void ActorUnkZLSL::func_ov031_020eafb0(void) {}
ARM void ActorUnkZLSL::func_ov031_020eafe0(void) {}
ARM void ActorUnkZLSL::func_ov031_020eb158(void) {}
ARM void ActorUnkZLSL::func_ov031_020eb188(void) {}
ARM void ActorUnkZLSL::func_ov031_020eb218(void) {}
ARM void ActorUnkZLSL::func_ov031_020eb2b0(void) {}
ARM void ActorUnkZLSL::func_ov031_020eb5f8(void) {}
ARM void ActorUnkZLSL::func_ov031_020eb61c(void) {}
ARM void ActorUnkZLSL::func_ov031_020eba58(void) {}
ARM void ActorUnkZLSL::func_ov031_020eba8c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ebfd8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec028(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec034(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec058(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec05c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec0a8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec0d4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec12c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec164(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec170(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec1d4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec2d0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec3d0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec49c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec54c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec5f0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec6d8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec764(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec7a4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec7e4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec860(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec8bc(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec8c4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ec970(void) {}
ARM void ActorUnkZLSL::func_ov031_020ecbe0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ecc68(void) {}
ARM void ActorUnkZLSL::func_ov031_020ecea8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ed0b0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ed3c0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ed47c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ed4e4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ed55c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ed6cc(void) {}
ARM void ActorUnkZLSL::func_ov031_020ed8ac(void) {}
ARM void ActorUnkZLSL::func_ov031_020edc80(void) {}
ARM void ActorUnkZLSL::func_ov031_020edd14(void) {}
ARM void ActorUnkZLSL::func_ov031_020edd54(void) {}
ARM void ActorUnkZLSL::func_ov031_020ede30(void) {}
ARM void ActorUnkZLSL::func_ov031_020edf98(void) {}
ARM void ActorUnkZLSL::func_ov031_020edfdc(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee000(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee1f4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee2c8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee3e8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee41c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee4c4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee654(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee6d0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee724(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee760(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee784(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee794(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee79c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee7b8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee7d4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee7f0(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee814(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee840(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee85c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee884(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee8a4(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee8b8(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee8cc(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ee8f4(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ee93c(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ee948(void) {}
THUMB void ActorUnkZLSL::func_ov031_020ee95c(void) {}
ARM void ActorUnkZLSL::func_ov031_020ee968(void) {}
ARM void ActorUnkZLSL::func_ov031_020eeae4(void) {}
ARM void ActorUnkZLSL::func_ov031_020eeb18(void) {}
ARM void ActorUnkZLSL::func_ov031_020eeb58(void) {}
ARM void ActorUnkZLSL::func_ov031_020eeca8(void) {}
ARM void ActorUnkZLSL::func_ov031_020eece8(void) {}
