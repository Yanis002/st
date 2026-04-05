//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC6.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMC6 ActorTypeUnkRMC6::gInstance;

ARM ActorTypeUnkRMC6 *ActorTypeUnkRMC6::GetInstance() {
    return &ActorTypeUnkRMC6::gInstance;
}

ARM Actor *ActorTypeUnkRMC6::Create() {
    return new(HeapIndex_2) ActorUnkRMC6();
}

ARM ActorTypeUnkRMC6::ActorTypeUnkRMC6() :
    ActorType(ActorId_RMC6) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMC6::ActorUnkRMC6() {}

ARM void ActorUnkRMC6::func_ov060_0215e0e4(void) {}
ARM void ActorUnkRMC6::func_ov060_0215e104(void) {}
ARM void ActorUnkRMC6::func_ov060_0215e108(void) {}
ARM void ActorUnkRMC6::func_ov060_0215e158(void) {}
ARM void ActorUnkRMC6::func_ov060_0215e178(void) {}
ARM void ActorUnkRMC6::func_ov060_0215e1a0(void) {}
