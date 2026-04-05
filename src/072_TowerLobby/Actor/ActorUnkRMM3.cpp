//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMM3 ActorTypeUnkRMM3::gInstance;

ARM ActorTypeUnkRMM3 *ActorTypeUnkRMM3::GetInstance() {
    return &ActorTypeUnkRMM3::gInstance;
}

ARM Actor *ActorTypeUnkRMM3::Create() {
    return new(HeapIndex_2) ActorUnkRMM3();
}

ARM ActorTypeUnkRMM3::ActorTypeUnkRMM3() :
    ActorType(ActorId_RMM3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMM3::ActorUnkRMM3() {}

ARM void ActorUnkRMM3::func_ov072_021520ac(void) {}
ARM void ActorUnkRMM3::func_ov072_0215220c(void) {}
ARM void ActorUnkRMM3::func_ov072_021522dc(void) {}
ARM void ActorUnkRMM3::func_ov072_0215233c(void) {}
ARM void ActorUnkRMM3::func_ov072_02152350(void) {}
ARM void ActorUnkRMM3::func_ov072_02152430(void) {}
ARM void ActorUnkRMM3::func_ov072_02152480(void) {}
ARM void ActorUnkRMM3::func_ov072_021524d8(void) {}
