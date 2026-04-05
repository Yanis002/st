//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMDS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMDS ActorTypeUnkRMDS::gInstance;

ARM ActorTypeUnkRMDS *ActorTypeUnkRMDS::GetInstance() {
    return &ActorTypeUnkRMDS::gInstance;
}

ARM Actor *ActorTypeUnkRMDS::Create() {
    return new(HeapIndex_2) ActorUnkRMDS();
}

ARM ActorTypeUnkRMDS::ActorTypeUnkRMDS() :
    ActorType(ActorId_RMDS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMDS::ActorUnkRMDS() {}

ARM void ActorUnkRMDS::func_ov086_0215dad0(void) {}
ARM void ActorUnkRMDS::func_ov086_0215db44(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbb0(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbb4(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbc8(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbdc(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbe8(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dc38(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dc60(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dc90(void) {}
