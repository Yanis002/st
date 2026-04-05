//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKIMA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkKIMA ActorTypeUnkKIMA::gInstance;

ARM ActorTypeUnkKIMA *ActorTypeUnkKIMA::GetInstance() {
    return &ActorTypeUnkKIMA::gInstance;
}

ARM Actor *ActorTypeUnkKIMA::Create() {
    return new(HeapIndex_2) ActorUnkKIMA();
}

ARM ActorTypeUnkKIMA::ActorTypeUnkKIMA() :
    ActorType(ActorId_KIMA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkKIMA::ActorUnkKIMA() {}

ARM void ActorUnkKIMA::func_ov060_021601b8(void) {}
ARM void ActorUnkKIMA::func_ov060_021602dc(void) {}
ARM void ActorUnkKIMA::func_ov060_02160304(void) {}
ARM void ActorUnkKIMA::func_ov060_02160334(void) {}
ARM void ActorUnkKIMA::func_ov060_02160340(void) {}
ARM void ActorUnkKIMA::func_ov060_02160348(void) {}
ARM void ActorUnkKIMA::func_ov060_02160350(void) {}
