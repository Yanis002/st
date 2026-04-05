//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAMB ActorTypeUnkCAMB::gInstance;

ARM ActorTypeUnkCAMB *ActorTypeUnkCAMB::GetInstance() {
    return &ActorTypeUnkCAMB::gInstance;
}

ARM Actor *ActorTypeUnkCAMB::Create() {
    return new(HeapIndex_2) ActorUnkCAMB();
}

ARM ActorTypeUnkCAMB::ActorTypeUnkCAMB() :
    ActorType(ActorId_CAMB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAMB::ActorUnkCAMB() {}

ARM void ActorUnkCAMB::func_ov061_02158710(void) {}
ARM void ActorUnkCAMB::func_ov061_02158730(void) {}
ARM void ActorUnkCAMB::func_ov061_0215877c(void) {}
ARM void ActorUnkCAMB::func_ov061_021588e4(void) {}
ARM void ActorUnkCAMB::func_ov061_021588f8(void) {}
ARM void ActorUnkCAMB::func_ov061_021589a4(void) {}
ARM void ActorUnkCAMB::func_ov061_021589b0(void) {}
ARM void ActorUnkCAMB::func_ov061_021589d8(void) {}
ARM void ActorUnkCAMB::func_ov061_02158a08(void) {}
ARM void ActorUnkCAMB::func_ov061_02158a2c(void) {}
ARM void ActorUnkCAMB::func_ov061_02158a58(void) {}
ARM void ActorUnkCAMB::func_ov061_02158a74(void) {}
ARM void ActorUnkCAMB::func_ov061_02158a9c(void) {}
ARM void ActorUnkCAMB::func_ov061_02158abc(void) {}
ARM void ActorUnkCAMB::func_ov061_02158ad0(void) {}
ARM void ActorUnkCAMB::func_ov061_02158ae4(void) {}
