//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFWI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFWI ActorTypeUnkEFWI::gInstance;

ARM ActorTypeUnkEFWI *ActorTypeUnkEFWI::GetInstance() {
    return &ActorTypeUnkEFWI::gInstance;
}

ARM Actor *ActorTypeUnkEFWI::Create() {
    return new(HeapIndex_2) ActorUnkEFWI();
}

ARM ActorTypeUnkEFWI::ActorTypeUnkEFWI() :
    ActorType(ActorId_EFWI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFWI::ActorUnkEFWI() {}

ARM void ActorUnkEFWI::func_ov098_02181718(void) {}
ARM void ActorUnkEFWI::func_ov098_02181738(void) {}
ARM void ActorUnkEFWI::func_ov098_021817d4(void) {}
ARM void ActorUnkEFWI::func_ov098_021817f0(void) {}
ARM void ActorUnkEFWI::func_ov098_02181820(void) {}
ARM void ActorUnkEFWI::func_ov098_02181858(void) {}
