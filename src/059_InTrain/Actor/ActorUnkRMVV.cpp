//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVV.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMVV ActorTypeUnkRMVV::gInstance;

ARM ActorTypeUnkRMVV *ActorTypeUnkRMVV::GetInstance() {
    return &ActorTypeUnkRMVV::gInstance;
}

ARM Actor *ActorTypeUnkRMVV::Create() {
    return new(HeapIndex_2) ActorUnkRMVV();
}

ARM ActorTypeUnkRMVV::ActorTypeUnkRMVV() :
    ActorType(ActorId_RMVV) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMVV::ActorUnkRMVV() {}

ARM void ActorUnkRMVV::func_ov059_021624b8(void) {}
ARM void ActorUnkRMVV::func_ov059_02162578(void) {}
ARM void ActorUnkRMVV::func_ov059_02162618(void) {}
ARM void ActorUnkRMVV::func_ov059_02162644(void) {}
ARM void ActorUnkRMVV::func_ov059_02162694(void) {}
ARM void ActorUnkRMVV::func_ov059_0216269c(void) {}
ARM void ActorUnkRMVV::func_ov059_021626cc(void) {}
ARM void ActorUnkRMVV::func_ov059_02162704(void) {}
