//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMTB ActorTypeUnkRMTB::gInstance;

ARM ActorTypeUnkRMTB *ActorTypeUnkRMTB::GetInstance() {
    return &ActorTypeUnkRMTB::gInstance;
}

ARM Actor *ActorTypeUnkRMTB::Create() {
    return new(HeapIndex_2) ActorUnkRMTB();
}

ARM ActorTypeUnkRMTB::ActorTypeUnkRMTB() :
    ActorType(ActorId_RMTB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMTB::ActorUnkRMTB() {}

ARM void ActorUnkRMTB::func_ov059_02162bd0(void) {}
ARM void ActorUnkRMTB::func_ov059_02162bf0(void) {}
ARM void ActorUnkRMTB::func_ov059_02162c40(void) {}
ARM void ActorUnkRMTB::func_ov059_02162c60(void) {}
