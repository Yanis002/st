//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCASL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCASL ActorTypeUnkCASL::gInstance;

ARM ActorTypeUnkCASL *ActorTypeUnkCASL::GetInstance() {
    return &ActorTypeUnkCASL::gInstance;
}

ARM Actor *ActorTypeUnkCASL::Create() {
    return new(HeapIndex_2) ActorUnkCASL();
}

ARM ActorTypeUnkCASL::ActorTypeUnkCASL() :
    ActorType(ActorId_Castle) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCASL::ActorUnkCASL() {}

ARM void ActorUnkCASL::func_ov060_0215e9cc(void) {}
ARM void ActorUnkCASL::func_ov060_0215eafc(void) {}
ARM void ActorUnkCASL::func_ov060_0215eb10(void) {}
ARM void ActorUnkCASL::func_ov060_0215eb24(void) {}
ARM void ActorUnkCASL::func_ov060_0215eb44(void) {}
ARM void ActorUnkCASL::func_ov060_0215eb6c(void) {}
ARM void ActorUnkCASL::func_ov060_0215eb9c(void) {}
