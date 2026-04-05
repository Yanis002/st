//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC5.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMC5 ActorTypeUnkRMC5::gInstance;

ARM ActorTypeUnkRMC5 *ActorTypeUnkRMC5::GetInstance() {
    return &ActorTypeUnkRMC5::gInstance;
}

ARM Actor *ActorTypeUnkRMC5::Create() {
    return new(HeapIndex_2) ActorUnkRMC5();
}

ARM ActorTypeUnkRMC5::ActorTypeUnkRMC5() :
    ActorType(ActorId_RMC5) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMC5::ActorUnkRMC5() {}

ARM void ActorUnkRMC5::func_ov060_0215e788(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e7fc(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e800(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e884(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e898(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e8e8(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e920(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e960(void) {}
