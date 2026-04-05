//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC0.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMC0 ActorTypeUnkRMC0::gInstance;

ARM ActorTypeUnkRMC0 *ActorTypeUnkRMC0::GetInstance() {
    return &ActorTypeUnkRMC0::gInstance;
}

ARM Actor *ActorTypeUnkRMC0::Create() {
    return new(HeapIndex_2) ActorUnkRMC0();
}

ARM ActorTypeUnkRMC0::ActorTypeUnkRMC0() :
    ActorType(ActorId_RMC0) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMC0::ActorUnkRMC0() {}

ARM void ActorUnkRMC0::func_ov060_0215d52c(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d594(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d5fc(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d610(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d634(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d648(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d6b0(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d75c(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d770(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d790(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d7e0(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d7fc(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d834(void) {}
ARM void ActorUnkRMC0::func_ov060_0215d874(void) {}
