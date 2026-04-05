//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTZ.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMTZ ActorTypeUnkRMTZ::gInstance;

ARM ActorTypeUnkRMTZ *ActorTypeUnkRMTZ::GetInstance() {
    return &ActorTypeUnkRMTZ::gInstance;
}

ARM Actor *ActorTypeUnkRMTZ::Create() {
    return new(HeapIndex_2) ActorUnkRMTZ();
}

ARM ActorTypeUnkRMTZ::ActorTypeUnkRMTZ() :
    ActorType(ActorId_RMTZ) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMTZ::ActorUnkRMTZ() {}

ARM void ActorUnkRMTZ::func_ov064_02159518(void) {}
ARM void ActorUnkRMTZ::func_ov064_0215958c(void) {}
ARM void ActorUnkRMTZ::func_ov064_021595c8(void) {}
ARM void ActorUnkRMTZ::func_ov064_02159610(void) {}
ARM void ActorUnkRMTZ::func_ov064_02159630(void) {}
ARM void ActorUnkRMTZ::func_ov064_02159650(void) {}
ARM void ActorUnkRMTZ::func_ov064_02159678(void) {}
