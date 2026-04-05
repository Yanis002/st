//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMC3 ActorTypeUnkRMC3::gInstance;

ARM ActorTypeUnkRMC3 *ActorTypeUnkRMC3::GetInstance() {
    return &ActorTypeUnkRMC3::gInstance;
}

ARM Actor *ActorTypeUnkRMC3::Create() {
    return new(HeapIndex_2) ActorUnkRMC3();
}

ARM ActorTypeUnkRMC3::ActorTypeUnkRMC3() :
    ActorType(ActorId_RMC3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMC3::ActorUnkRMC3() {}

ARM void ActorUnkRMC3::func_ov060_0215e20c(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e308(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e31c(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e4b0(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e4c8(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e4dc(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e51c(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e540(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e55c(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e5a4(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e5f4(void) {}
