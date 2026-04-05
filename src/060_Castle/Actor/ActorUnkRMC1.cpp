//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMC1 ActorTypeUnkRMC1::gInstance;

ARM ActorTypeUnkRMC1 *ActorTypeUnkRMC1::GetInstance() {
    return &ActorTypeUnkRMC1::gInstance;
}

ARM Actor *ActorTypeUnkRMC1::Create() {
    return new(HeapIndex_2) ActorUnkRMC1();
}

ARM ActorTypeUnkRMC1::ActorTypeUnkRMC1() :
    ActorType(ActorId_RMC1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMC1::ActorUnkRMC1() {}

ARM void ActorUnkRMC1::func_ov060_0215d8e0(void) {}
ARM void ActorUnkRMC1::func_ov060_0215d900(void) {}
ARM void ActorUnkRMC1::func_ov060_0215d950(void) {}
ARM void ActorUnkRMC1::func_ov060_0215d988(void) {}
ARM void ActorUnkRMC1::func_ov060_0215d9c8(void) {}
