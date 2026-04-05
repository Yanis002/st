//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMT2 ActorTypeUnkRMT2::gInstance;

ARM ActorTypeUnkRMT2 *ActorTypeUnkRMT2::GetInstance() {
    return &ActorTypeUnkRMT2::gInstance;
}

ARM Actor *ActorTypeUnkRMT2::Create() {
    return new(HeapIndex_2) ActorUnkRMT2();
}

ARM ActorTypeUnkRMT2::ActorTypeUnkRMT2() :
    ActorType(ActorId_RMT2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMT2::ActorUnkRMT2() {}

ARM void ActorUnkRMT2::func_ov061_0215828c(void) {}
ARM void ActorUnkRMT2::func_ov061_021582ac(void) {}
ARM void ActorUnkRMT2::func_ov061_021582fc(void) {}
ARM void ActorUnkRMT2::func_ov061_0215831c(void) {}
ARM void ActorUnkRMT2::func_ov061_02158344(void) {}
