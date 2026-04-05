//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMC2 ActorTypeUnkRMC2::gInstance;

ARM ActorTypeUnkRMC2 *ActorTypeUnkRMC2::GetInstance() {
    return &ActorTypeUnkRMC2::gInstance;
}

ARM Actor *ActorTypeUnkRMC2::Create() {
    return new(HeapIndex_2) ActorUnkRMC2();
}

ARM ActorTypeUnkRMC2::ActorTypeUnkRMC2() :
    ActorType(ActorId_RMC2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMC2::ActorUnkRMC2() {}

ARM void ActorUnkRMC2::func_ov060_0215da48(void) {}
ARM void ActorUnkRMC2::func_ov060_0215db44(void) {}
ARM void ActorUnkRMC2::func_ov060_0215db58(void) {}
ARM void ActorUnkRMC2::func_ov060_0215dc04(void) {}
ARM void ActorUnkRMC2::func_ov060_0215dd90(void) {}
ARM void ActorUnkRMC2::func_ov060_0215ddc0(void) {}
ARM void ActorUnkRMC2::func_ov060_0215ddd4(void) {}
ARM void ActorUnkRMC2::func_ov060_0215df00(void) {}
ARM void ActorUnkRMC2::func_ov060_0215df40(void) {}
ARM void ActorUnkRMC2::func_ov060_0215df58(void) {}
ARM void ActorUnkRMC2::func_ov060_0215df7c(void) {}
ARM void ActorUnkRMC2::func_ov060_0215dfa0(void) {}
ARM void ActorUnkRMC2::func_ov060_0215dfb0(void) {}
ARM void ActorUnkRMC2::func_ov060_0215dfb8(void) {}
ARM void ActorUnkRMC2::func_ov060_0215dfd4(void) {}
ARM void ActorUnkRMC2::func_ov060_0215e01c(void) {}
ARM void ActorUnkRMC2::func_ov060_0215e06c(void) {}
