//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWHI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSWHI ActorTypeUnkSWHI::gInstance;

ARM ActorTypeUnkSWHI *ActorTypeUnkSWHI::GetInstance() {
    return &ActorTypeUnkSWHI::gInstance;
}

ARM Actor *ActorTypeUnkSWHI::Create() {
    return new(HeapIndex_2) ActorUnkSWHI();
}

ARM ActorTypeUnkSWHI::ActorTypeUnkSWHI() :
    ActorType(ActorId_SWHI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSWHI::ActorUnkSWHI() {}

ARM void ActorUnkSWHI::func_ov066_0215cb80(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cbac(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cbf0(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cc2c(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cc74(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cc88(void) {}
ARM void ActorUnkSWHI::func_ov066_0215ccb4(void) {}
ARM void ActorUnkSWHI::func_ov066_0215ccf4(void) {}
ARM void ActorUnkSWHI::func_ov066_0215ccf8(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cd14(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cd38(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cd50(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cd58(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cda8(void) {}
ARM void ActorUnkSWHI::func_ov066_0215cdd0(void) {}
