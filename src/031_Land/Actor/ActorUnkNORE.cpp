//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNORE.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNORE ActorTypeUnkNORE::gInstance;

ARM ActorTypeUnkNORE *ActorTypeUnkNORE::GetInstance() {
    return &ActorTypeUnkNORE::gInstance;
}

ARM Actor *ActorTypeUnkNORE::Create() {
    return new(HeapIndex_2) ActorUnkNORE();
}

ARM ActorTypeUnkNORE::ActorTypeUnkNORE() :
    ActorType(ActorId_NORE) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNORE::ActorUnkNORE() {}

ARM void ActorUnkNORE::func_ov031_020f7f6c(void) {}
ARM void ActorUnkNORE::func_ov031_020f7f8c(void) {}
ARM void ActorUnkNORE::func_ov031_020f7fe0(void) {}
ARM void ActorUnkNORE::func_ov031_020f7ff4(void) {}
ARM void ActorUnkNORE::func_ov031_020f8010(void) {}
