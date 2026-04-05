//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkROCK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkROCK ActorTypeUnkROCK::gInstance;

ARM ActorTypeUnkROCK *ActorTypeUnkROCK::GetInstance() {
    return &ActorTypeUnkROCK::gInstance;
}

ARM Actor *ActorTypeUnkROCK::Create() {
    return new(HeapIndex_2) ActorUnkROCK();
}

ARM ActorTypeUnkROCK::ActorTypeUnkROCK() :
    ActorType(ActorId_ROCK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkROCK::ActorUnkROCK() {}

ARM void ActorUnkROCK::func_ov031_020e88e0(void) {}
ARM void ActorUnkROCK::func_ov031_020e897c(void) {}
ARM void ActorUnkROCK::func_ov031_020e89ac(void) {}
ARM void ActorUnkROCK::func_ov031_020e8a48(void) {}
ARM void ActorUnkROCK::func_ov031_020e8acc(void) {}
ARM void ActorUnkROCK::func_ov031_020e8afc(void) {}
ARM void ActorUnkROCK::func_ov031_020e8ba0(void) {}
ARM void ActorUnkROCK::func_ov031_020e8c08(void) {}
ARM void ActorUnkROCK::func_ov031_020e8c4c(void) {}
ARM void ActorUnkROCK::func_ov031_020e8c74(void) {}
ARM void ActorUnkROCK::func_ov031_020e8ca4(void) {}
