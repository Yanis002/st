//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMV1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMV1 ActorTypeUnkRMV1::gInstance;

ARM ActorTypeUnkRMV1 *ActorTypeUnkRMV1::GetInstance() {
    return &ActorTypeUnkRMV1::gInstance;
}

ARM Actor *ActorTypeUnkRMV1::Create() {
    return new(HeapIndex_2) ActorUnkRMV1();
}

ARM ActorTypeUnkRMV1::ActorTypeUnkRMV1() :
    ActorType(ActorId_RMV1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMV1::ActorUnkRMV1() {}

ARM void ActorUnkRMV1::func_ov067_02159ed4(void) {}
ARM void ActorUnkRMV1::func_ov067_02159ef4(void) {}
ARM void ActorUnkRMV1::func_ov067_02159f44(void) {}
ARM void ActorUnkRMV1::func_ov067_02159f64(void) {}
ARM void ActorUnkRMV1::func_ov067_02159f8c(void) {}
ARM void ActorUnkRMV1::func_ov067_02159fa0(void) {}
ARM void ActorUnkRMV1::func_ov067_02159fc0(void) {}
ARM void ActorUnkRMV1::func_ov067_02159fc4(void) {}
