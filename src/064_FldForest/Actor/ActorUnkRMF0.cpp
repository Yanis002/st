//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMF0.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMF0 ActorTypeUnkRMF0::gInstance;

ARM ActorTypeUnkRMF0 *ActorTypeUnkRMF0::GetInstance() {
    return &ActorTypeUnkRMF0::gInstance;
}

ARM Actor *ActorTypeUnkRMF0::Create() {
    return new(HeapIndex_2) ActorUnkRMF0();
}

ARM ActorTypeUnkRMF0::ActorTypeUnkRMF0() :
    ActorType(ActorId_RMF0) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMF0::ActorUnkRMF0() {}

ARM void ActorUnkRMF0::func_ov064_021592d0(void) {}
ARM void ActorUnkRMF0::func_ov064_021592f0(void) {}
ARM void ActorUnkRMF0::func_ov064_02159340(void) {}
ARM void ActorUnkRMF0::func_ov064_02159360(void) {}
ARM void ActorUnkRMF0::func_ov064_02159388(void) {}
