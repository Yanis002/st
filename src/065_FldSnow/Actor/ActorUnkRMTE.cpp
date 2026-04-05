//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTE.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMTE ActorTypeUnkRMTE::gInstance;

ARM ActorTypeUnkRMTE *ActorTypeUnkRMTE::GetInstance() {
    return &ActorTypeUnkRMTE::gInstance;
}

ARM Actor *ActorTypeUnkRMTE::Create() {
    return new(HeapIndex_2) ActorUnkRMTE();
}

ARM ActorTypeUnkRMTE::ActorTypeUnkRMTE() :
    ActorType(ActorId_RMTE) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMTE::ActorUnkRMTE() {}

ARM void ActorUnkRMTE::func_ov065_021594c0(void) {}
ARM void ActorUnkRMTE::func_ov065_021594e0(void) {}
ARM void ActorUnkRMTE::func_ov065_0215964c(void) {}
ARM void ActorUnkRMTE::func_ov065_0215969c(void) {}
ARM void ActorUnkRMTE::func_ov065_021596bc(void) {}
ARM void ActorUnkRMTE::func_ov065_021596e4(void) {}
