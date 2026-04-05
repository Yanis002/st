//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPLSR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkPLSR ActorTypeUnkPLSR::gInstance;

ARM ActorTypeUnkPLSR *ActorTypeUnkPLSR::GetInstance() {
    return &ActorTypeUnkPLSR::gInstance;
}

ARM Actor *ActorTypeUnkPLSR::Create() {
    return new(HeapIndex_2) ActorUnkPLSR();
}

ARM ActorTypeUnkPLSR::ActorTypeUnkPLSR() :
    ActorType(ActorId_PLSR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPLSR::ActorUnkPLSR() {}

ARM void ActorUnkPLSR::func_ov038_0211f114(void) {}
ARM void ActorUnkPLSR::func_ov038_0211f288(void) {}
ARM void ActorUnkPLSR::func_ov038_0211f740(void) {}
ARM void ActorUnkPLSR::func_ov038_0211f908(void) {}
ARM void ActorUnkPLSR::func_ov038_0211fcf0(void) {}
ARM void ActorUnkPLSR::func_ov038_02120478(void) {}
ARM void ActorUnkPLSR::func_ov038_02120654(void) {}
ARM void ActorUnkPLSR::func_ov038_0212072c(void) {}
ARM void ActorUnkPLSR::func_ov038_02120824(void) {}
ARM void ActorUnkPLSR::func_ov038_02120894(void) {}
ARM void ActorUnkPLSR::func_ov038_021208c4(void) {}
ARM void ActorUnkPLSR::func_ov038_021208d0(void) {}
ARM void ActorUnkPLSR::func_ov038_02120910(void) {}
