//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMT3 ActorTypeUnkRMT3::gInstance;

ARM ActorTypeUnkRMT3 *ActorTypeUnkRMT3::GetInstance() {
    return &ActorTypeUnkRMT3::gInstance;
}

ARM Actor *ActorTypeUnkRMT3::Create() {
    return new(HeapIndex_2) ActorUnkRMT3();
}

ARM ActorTypeUnkRMT3::ActorTypeUnkRMT3() :
    ActorType(ActorId_RMT3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMT3::ActorUnkRMT3() {}

ARM void ActorUnkRMT3::func_ov061_021583b0(void) {}
ARM void ActorUnkRMT3::func_ov061_021583d0(void) {}
ARM void ActorUnkRMT3::func_ov061_02158420(void) {}
ARM void ActorUnkRMT3::func_ov061_02158440(void) {}
ARM void ActorUnkRMT3::func_ov061_02158468(void) {}
