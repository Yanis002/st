//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFR3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFR3 ActorTypeUnkEFR3::gInstance;

ARM ActorTypeUnkEFR3 *ActorTypeUnkEFR3::GetInstance() {
    return &ActorTypeUnkEFR3::gInstance;
}

ARM Actor *ActorTypeUnkEFR3::Create() {
    return new(HeapIndex_2) ActorUnkEFR3();
}

ARM ActorTypeUnkEFR3::ActorTypeUnkEFR3() :
    ActorType(ActorId_EFR3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFR3::ActorUnkEFR3() {}

ARM void ActorUnkEFR3::func_ov083_0215c514(void) {}
ARM void ActorUnkEFR3::func_ov083_0215c534(void) {}
ARM void ActorUnkEFR3::func_ov083_0215c5d0(void) {}
ARM void ActorUnkEFR3::func_ov083_0215c5ec(void) {}
ARM void ActorUnkEFR3::func_ov083_0215c61c(void) {}
ARM void ActorUnkEFR3::func_ov083_0215c654(void) {}
