//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOFA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOFA ActorTypeUnkFOFA::gInstance;

ARM ActorTypeUnkFOFA *ActorTypeUnkFOFA::GetInstance() {
    return &ActorTypeUnkFOFA::gInstance;
}

ARM Actor *ActorTypeUnkFOFA::Create() {
    return new(HeapIndex_2) ActorUnkFOFA();
}

ARM ActorTypeUnkFOFA::ActorTypeUnkFOFA() :
    ActorType(ActorId_FOFA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOFA::ActorUnkFOFA() {}

ARM void ActorUnkFOFA::func_ov021_020f3a14(void) {}
ARM void ActorUnkFOFA::func_ov021_020f3a34(void) {}
ARM void ActorUnkFOFA::func_ov021_020f3a60(void) {}
ARM void ActorUnkFOFA::func_ov021_020f3a74(void) {}
ARM void ActorUnkFOFA::func_ov021_020f3a90(void) {}
