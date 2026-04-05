//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMW1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMW1 ActorTypeUnkRMW1::gInstance;

ARM ActorTypeUnkRMW1 *ActorTypeUnkRMW1::GetInstance() {
    return &ActorTypeUnkRMW1::gInstance;
}

ARM Actor *ActorTypeUnkRMW1::Create() {
    return new(HeapIndex_2) ActorUnkRMW1();
}

ARM ActorTypeUnkRMW1::ActorTypeUnkRMW1() :
    ActorType(ActorId_RMW1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMW1::ActorUnkRMW1() {}

ARM void ActorUnkRMW1::func_ov066_0215c49c(void) {}
ARM void ActorUnkRMW1::func_ov066_0215c4bc(void) {}
ARM void ActorUnkRMW1::func_ov066_0215c50c(void) {}
ARM void ActorUnkRMW1::func_ov066_0215c52c(void) {}
ARM void ActorUnkRMW1::func_ov066_0215c554(void) {}
