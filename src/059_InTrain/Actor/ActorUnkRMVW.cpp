//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVW.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMVW ActorTypeUnkRMVW::gInstance;

ARM ActorTypeUnkRMVW *ActorTypeUnkRMVW::GetInstance() {
    return &ActorTypeUnkRMVW::gInstance;
}

ARM Actor *ActorTypeUnkRMVW::Create() {
    return new(HeapIndex_2) ActorUnkRMVW();
}

ARM ActorTypeUnkRMVW::ActorTypeUnkRMVW() :
    ActorType(ActorId_RMVW) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMVW::ActorUnkRMVW() {}

ARM void ActorUnkRMVW::func_ov059_02162200(void) {}
ARM void ActorUnkRMVW::func_ov059_021622c0(void) {}
ARM void ActorUnkRMVW::func_ov059_02162360(void) {}
ARM void ActorUnkRMVW::func_ov059_0216238c(void) {}
ARM void ActorUnkRMVW::func_ov059_021623dc(void) {}
ARM void ActorUnkRMVW::func_ov059_021623e4(void) {}
ARM void ActorUnkRMVW::func_ov059_02162414(void) {}
ARM void ActorUnkRMVW::func_ov059_0216244c(void) {}
