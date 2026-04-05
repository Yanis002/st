//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMV0.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMV0 ActorTypeUnkRMV0::gInstance;

ARM ActorTypeUnkRMV0 *ActorTypeUnkRMV0::GetInstance() {
    return &ActorTypeUnkRMV0::gInstance;
}

ARM Actor *ActorTypeUnkRMV0::Create() {
    return new(HeapIndex_2) ActorUnkRMV0();
}

ARM ActorTypeUnkRMV0::ActorTypeUnkRMV0() :
    ActorType(ActorId_RMV0) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMV0::ActorUnkRMV0() {}

ARM void ActorUnkRMV0::func_ov067_02159db0(void) {}
ARM void ActorUnkRMV0::func_ov067_02159dd0(void) {}
ARM void ActorUnkRMV0::func_ov067_02159e20(void) {}
ARM void ActorUnkRMV0::func_ov067_02159e40(void) {}
ARM void ActorUnkRMV0::func_ov067_02159e68(void) {}
