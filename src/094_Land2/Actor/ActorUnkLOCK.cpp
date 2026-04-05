//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLOCK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkLOCK ActorTypeUnkLOCK::gInstance;

ARM ActorTypeUnkLOCK *ActorTypeUnkLOCK::GetInstance() {
    return &ActorTypeUnkLOCK::gInstance;
}

ARM Actor *ActorTypeUnkLOCK::Create() {
    return new(HeapIndex_2) ActorUnkLOCK();
}

ARM ActorTypeUnkLOCK::ActorTypeUnkLOCK() :
    ActorType(ActorId_LOCK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkLOCK::ActorUnkLOCK() {}

ARM void ActorUnkLOCK::func_ov094_021660a8(void) {}
ARM void ActorUnkLOCK::func_ov094_02166128(void) {}
ARM void ActorUnkLOCK::func_ov094_0216613c(void) {}
ARM void ActorUnkLOCK::func_ov094_02166144(void) {}
ARM void ActorUnkLOCK::func_ov094_02166150(void) {}
ARM void ActorUnkLOCK::func_ov094_02166154(void) {}
ARM void ActorUnkLOCK::func_ov094_02166284(void) {}
ARM void ActorUnkLOCK::func_ov094_02166298(void) {}
ARM void ActorUnkLOCK::func_ov094_021662b4(void) {}
