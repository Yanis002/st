//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMTR ActorTypeUnkRMTR::gInstance;

ARM ActorTypeUnkRMTR *ActorTypeUnkRMTR::GetInstance() {
    return &ActorTypeUnkRMTR::gInstance;
}

ARM Actor *ActorTypeUnkRMTR::Create() {
    return new(HeapIndex_2) ActorUnkRMTR();
}

ARM ActorTypeUnkRMTR::ActorTypeUnkRMTR() :
    ActorType(ActorId_RMTR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMTR::ActorUnkRMTR() {}

ARM void ActorUnkRMTR::func_ov059_02162a28(void) {}
ARM void ActorUnkRMTR::func_ov059_02162a9c(void) {}
ARM void ActorUnkRMTR::func_ov059_02162ad4(void) {}
ARM void ActorUnkRMTR::func_ov059_02162af4(void) {}
ARM void ActorUnkRMTR::func_ov059_02162b1c(void) {}
ARM void ActorUnkRMTR::func_ov059_02162b3c(void) {}
ARM void ActorUnkRMTR::func_ov059_02162b64(void) {}
