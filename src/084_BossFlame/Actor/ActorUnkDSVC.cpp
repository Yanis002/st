//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSVC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDSVC ActorTypeUnkDSVC::gInstance;

ARM ActorTypeUnkDSVC *ActorTypeUnkDSVC::GetInstance() {
    return &ActorTypeUnkDSVC::gInstance;
}

ARM Actor *ActorTypeUnkDSVC::Create() {
    return new(HeapIndex_2) ActorUnkDSVC();
}

ARM ActorTypeUnkDSVC::ActorTypeUnkDSVC() :
    ActorType(ActorId_DSVC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDSVC::ActorUnkDSVC() {}

ARM void ActorUnkDSVC::func_ov084_0215af3c(void) {}
ARM void ActorUnkDSVC::func_ov084_0215af5c(void) {}
ARM void ActorUnkDSVC::func_ov084_0215afac(void) {}
ARM void ActorUnkDSVC::func_ov084_0215afcc(void) {}
ARM void ActorUnkDSVC::func_ov084_0215aff4(void) {}
