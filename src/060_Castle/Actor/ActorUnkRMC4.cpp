//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC4.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMC4 ActorTypeUnkRMC4::gInstance;

ARM ActorTypeUnkRMC4 *ActorTypeUnkRMC4::GetInstance() {
    return &ActorTypeUnkRMC4::gInstance;
}

ARM Actor *ActorTypeUnkRMC4::Create() {
    return new(HeapIndex_2) ActorUnkRMC4();
}

ARM ActorTypeUnkRMC4::ActorTypeUnkRMC4() :
    ActorType(ActorId_RMC4) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMC4::ActorUnkRMC4() {}

ARM void ActorUnkRMC4::func_ov060_0215e660(void) {}
ARM void ActorUnkRMC4::func_ov060_0215e680(void) {}
ARM void ActorUnkRMC4::func_ov060_0215e684(void) {}
ARM void ActorUnkRMC4::func_ov060_0215e6d4(void) {}
ARM void ActorUnkRMC4::func_ov060_0215e6f4(void) {}
ARM void ActorUnkRMC4::func_ov060_0215e71c(void) {}
