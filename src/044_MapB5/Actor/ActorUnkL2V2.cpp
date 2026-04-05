//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkL2V2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkL2V2 ActorTypeUnkL2V2::gInstance;

ARM ActorTypeUnkL2V2 *ActorTypeUnkL2V2::GetInstance() {
    return &ActorTypeUnkL2V2::gInstance;
}

ARM Actor *ActorTypeUnkL2V2::Create() {
    return new(HeapIndex_2) ActorUnkL2V2();
}

ARM ActorTypeUnkL2V2::ActorTypeUnkL2V2() :
    ActorType(ActorId_L2V2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkL2V2::ActorUnkL2V2() {}

ARM void ActorUnkL2V2::func_ov044_0212c69c(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c760(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c7d4(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c7e8(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c7fc(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c81c(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c844(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c874(void) {}
