//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTVLR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTVLR ActorTypeUnkTVLR::gInstance;

ARM ActorTypeUnkTVLR *ActorTypeUnkTVLR::GetInstance() {
    return &ActorTypeUnkTVLR::gInstance;
}

ARM Actor *ActorTypeUnkTVLR::Create() {
    return new(HeapIndex_2) ActorUnkTVLR();
}

ARM ActorTypeUnkTVLR::ActorTypeUnkTVLR() :
    ActorType(ActorId_TVLR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTVLR::ActorUnkTVLR() {}

ARM void ActorUnkTVLR::func_ov026_0212218c(void) {}
ARM void ActorUnkTVLR::func_ov026_02122350(void) {}
ARM void ActorUnkTVLR::func_ov026_02122388(void) {}
ARM void ActorUnkTVLR::func_ov026_021223c8(void) {}
ARM void ActorUnkTVLR::func_ov026_021223d0(void) {}
ARM void ActorUnkTVLR::func_ov026_02122404(void) {}
ARM void ActorUnkTVLR::func_ov026_02122750(void) {}
ARM void ActorUnkTVLR::func_ov026_021227a4(void) {}
ARM void ActorUnkTVLR::func_ov026_02122a10(void) {}
ARM void ActorUnkTVLR::func_ov026_02122a6c(void) {}
ARM void ActorUnkTVLR::func_ov026_02122b34(void) {}
ARM void ActorUnkTVLR::func_ov026_02122b90(void) {}
ARM void ActorUnkTVLR::func_ov026_02122cec(void) {}
ARM void ActorUnkTVLR::func_ov026_02122d60(void) {}
ARM void ActorUnkTVLR::func_ov026_02122dd8(void) {}
ARM void ActorUnkTVLR::func_ov026_02122dec(void) {}
ARM void ActorUnkTVLR::func_ov026_02122e3c(void) {}
ARM void ActorUnkTVLR::func_ov026_02122ea8(void) {}
