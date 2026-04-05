//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMF1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMF1 ActorTypeUnkRMF1::gInstance;

ARM ActorTypeUnkRMF1 *ActorTypeUnkRMF1::GetInstance() {
    return &ActorTypeUnkRMF1::gInstance;
}

ARM Actor *ActorTypeUnkRMF1::Create() {
    return new(HeapIndex_2) ActorUnkRMF1();
}

ARM ActorTypeUnkRMF1::ActorTypeUnkRMF1() :
    ActorType(ActorId_RMF1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMF1::ActorUnkRMF1() {}

ARM void ActorUnkRMF1::func_ov064_021593f4(void) {}
ARM void ActorUnkRMF1::func_ov064_02159414(void) {}
ARM void ActorUnkRMF1::func_ov064_02159464(void) {}
ARM void ActorUnkRMF1::func_ov064_02159484(void) {}
ARM void ActorUnkRMF1::func_ov064_021594ac(void) {}
