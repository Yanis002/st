//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMM2 ActorTypeUnkRMM2::gInstance;

ARM ActorTypeUnkRMM2 *ActorTypeUnkRMM2::GetInstance() {
    return &ActorTypeUnkRMM2::gInstance;
}

ARM Actor *ActorTypeUnkRMM2::Create() {
    return new(HeapIndex_2) ActorUnkRMM2();
}

ARM ActorTypeUnkRMM2::ActorTypeUnkRMM2() :
    ActorType(ActorId_RMM2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMM2::ActorUnkRMM2() {}

ARM void ActorUnkRMM2::func_ov088_02172228(void) {}
ARM void ActorUnkRMM2::func_ov088_02172248(void) {}
ARM void ActorUnkRMM2::func_ov088_02172298(void) {}
ARM void ActorUnkRMM2::func_ov088_021722a0(void) {}
ARM void ActorUnkRMM2::func_ov088_021722c8(void) {}
