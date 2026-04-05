//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSTFB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSTFB ActorTypeUnkSTFB::gInstance;

ARM ActorTypeUnkSTFB *ActorTypeUnkSTFB::GetInstance() {
    return &ActorTypeUnkSTFB::gInstance;
}

ARM Actor *ActorTypeUnkSTFB::Create() {
    return new(HeapIndex_2) ActorUnkSTFB();
}

ARM ActorTypeUnkSTFB::ActorTypeUnkSTFB() :
    ActorType(ActorId_STFB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSTFB::ActorUnkSTFB() {}

ARM void ActorUnkSTFB::func_ov043_021283c8(void) {}
ARM void ActorUnkSTFB::func_ov043_02128410(void) {}
ARM void ActorUnkSTFB::func_ov043_02128424(void) {}
ARM void ActorUnkSTFB::func_ov043_02128530(void) {}
ARM void ActorUnkSTFB::func_ov043_02128544(void) {}
ARM void ActorUnkSTFB::func_ov043_02128580(void) {}
ARM void ActorUnkSTFB::func_ov043_0212877c(void) {}
ARM void ActorUnkSTFB::func_ov043_021287f8(void) {}
ARM void ActorUnkSTFB::func_ov043_021288e8(void) {}
ARM void ActorUnkSTFB::func_ov043_02128954(void) {}
ARM void ActorUnkSTFB::func_ov043_021289bc(void) {}
ARM void ActorUnkSTFB::func_ov043_021289d8(void) {}
ARM void ActorUnkSTFB::func_ov043_02128a08(void) {}
ARM void ActorUnkSTFB::func_ov043_02128a40(void) {}
THUMB void ActorUnkSTFB::func_ov043_02128a54(void) {}
THUMB void ActorUnkSTFB::func_ov043_02128a78(void) {}
THUMB void ActorUnkSTFB::func_ov043_02128ab0(void) {}
