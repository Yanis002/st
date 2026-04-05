//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNTTZ.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNTTZ ActorTypeUnkNTTZ::gInstance;

ARM ActorTypeUnkNTTZ *ActorTypeUnkNTTZ::GetInstance() {
    return &ActorTypeUnkNTTZ::gInstance;
}

ARM Actor *ActorTypeUnkNTTZ::Create() {
    return new(HeapIndex_2) ActorUnkNTTZ();
}

ARM ActorTypeUnkNTTZ::ActorTypeUnkNTTZ() :
    ActorType(ActorId_NTTZ) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNTTZ::ActorUnkNTTZ() {}

ARM void ActorUnkNTTZ::func_ov031_020f6160(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f6190(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f6198(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f619c(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f61a0(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f61f0(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f6240(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f6254(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f6270(void) {}
