//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTTUT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTTUT ActorTypeUnkTTUT::gInstance;

ARM ActorTypeUnkTTUT *ActorTypeUnkTTUT::GetInstance() {
    return &ActorTypeUnkTTUT::gInstance;
}

ARM Actor *ActorTypeUnkTTUT::Create() {
    return new(HeapIndex_2) ActorUnkTTUT();
}

ARM ActorTypeUnkTTUT::ActorTypeUnkTTUT() :
    ActorType(ActorId_TTUT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTTUT::ActorUnkTTUT() {}

ARM void ActorUnkTTUT::func_ov091_02175838(void) {}
ARM void ActorUnkTTUT::func_ov091_02175868(void) {}
ARM void ActorUnkTTUT::func_ov091_02175944(void) {}
ARM void ActorUnkTTUT::func_ov091_02175bbc(void) {}
ARM void ActorUnkTTUT::func_ov091_02175c8c(void) {}
ARM void ActorUnkTTUT::func_ov091_02175ca0(void) {}
ARM void ActorUnkTTUT::func_ov091_02175cbc(void) {}
