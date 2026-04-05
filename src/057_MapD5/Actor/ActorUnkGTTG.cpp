//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGTTG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGTTG ActorTypeUnkGTTG::gInstance;

ARM ActorTypeUnkGTTG *ActorTypeUnkGTTG::GetInstance() {
    return &ActorTypeUnkGTTG::gInstance;
}

ARM Actor *ActorTypeUnkGTTG::Create() {
    return new(HeapIndex_2) ActorUnkGTTG();
}

ARM ActorTypeUnkGTTG::ActorTypeUnkGTTG() :
    ActorType(ActorId_GTTG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGTTG::ActorUnkGTTG() {}

ARM void ActorUnkGTTG::func_ov057_0213a868(void) {}
ARM void ActorUnkGTTG::func_ov057_0213a8b8(void) {}
ARM void ActorUnkGTTG::func_ov057_0213a9a0(void) {}
ARM void ActorUnkGTTG::func_ov057_0213a9c0(void) {}
ARM void ActorUnkGTTG::func_ov057_0213a9e8(void) {}
