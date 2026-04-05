//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFW2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFW2 ActorTypeUnkEFW2::gInstance;

ARM ActorTypeUnkEFW2 *ActorTypeUnkEFW2::GetInstance() {
    return &ActorTypeUnkEFW2::gInstance;
}

ARM Actor *ActorTypeUnkEFW2::Create() {
    return new(HeapIndex_2) ActorUnkEFW2();
}

ARM ActorTypeUnkEFW2::ActorTypeUnkEFW2() :
    ActorType(ActorId_EFW2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFW2::ActorUnkEFW2() {}

ARM void ActorUnkEFW2::func_ov094_0217090c(void) {}
ARM void ActorUnkEFW2::func_ov094_0217092c(void) {}
ARM void ActorUnkEFW2::func_ov094_021709c8(void) {}
ARM void ActorUnkEFW2::func_ov094_021709e4(void) {}
ARM void ActorUnkEFW2::func_ov094_02170a14(void) {}
