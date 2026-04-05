//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFW3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFW3 ActorTypeUnkEFW3::gInstance;

ARM ActorTypeUnkEFW3 *ActorTypeUnkEFW3::GetInstance() {
    return &ActorTypeUnkEFW3::gInstance;
}

ARM Actor *ActorTypeUnkEFW3::Create() {
    return new(HeapIndex_2) ActorUnkEFW3();
}

ARM ActorTypeUnkEFW3::ActorTypeUnkEFW3() :
    ActorType(ActorId_EFW3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFW3::ActorUnkEFW3() {}

ARM void ActorUnkEFW3::func_ov083_0215c6c8(void) {}
ARM void ActorUnkEFW3::func_ov083_0215c6e8(void) {}
ARM void ActorUnkEFW3::func_ov083_0215c784(void) {}
ARM void ActorUnkEFW3::func_ov083_0215c7a0(void) {}
ARM void ActorUnkEFW3::func_ov083_0215c7d0(void) {}
