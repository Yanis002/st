//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLZN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCLZN ActorTypeUnkCLZN::gInstance;

ARM ActorTypeUnkCLZN *ActorTypeUnkCLZN::GetInstance() {
    return &ActorTypeUnkCLZN::gInstance;
}

ARM Actor *ActorTypeUnkCLZN::Create() {
    return new(HeapIndex_2) ActorUnkCLZN();
}

ARM ActorTypeUnkCLZN::ActorTypeUnkCLZN() :
    ActorType(ActorId_CLZN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCLZN::ActorUnkCLZN() {}

ARM void ActorUnkCLZN::func_ov021_020f3920(void) {}
ARM void ActorUnkCLZN::func_ov021_020f3940(void) {}
ARM void ActorUnkCLZN::func_ov021_020f3964(void) {}
ARM void ActorUnkCLZN::func_ov021_020f3968(void) {}
ARM void ActorUnkCLZN::func_ov021_020f397c(void) {}
ARM void ActorUnkCLZN::func_ov021_020f3998(void) {}
