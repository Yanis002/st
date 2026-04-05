//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkL2MT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkL2MT ActorTypeUnkL2MT::gInstance;

ARM ActorTypeUnkL2MT *ActorTypeUnkL2MT::GetInstance() {
    return &ActorTypeUnkL2MT::gInstance;
}

ARM Actor *ActorTypeUnkL2MT::Create() {
    return new(HeapIndex_2) ActorUnkL2MT();
}

ARM ActorTypeUnkL2MT::ActorTypeUnkL2MT() :
    ActorType(ActorId_L2MT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkL2MT::ActorUnkL2MT() {}

ARM void ActorUnkL2MT::func_ov044_0212c8e0(void) {}
ARM void ActorUnkL2MT::func_ov044_0212c954(void) {}
ARM void ActorUnkL2MT::func_ov044_0212c974(void) {}
ARM void ActorUnkL2MT::func_ov044_0212c978(void) {}
ARM void ActorUnkL2MT::func_ov044_0212c998(void) {}
ARM void ActorUnkL2MT::func_ov044_0212c9b8(void) {}
