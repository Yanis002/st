//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBMOC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBMOC ActorTypeUnkBMOC::gInstance;

ARM ActorTypeUnkBMOC *ActorTypeUnkBMOC::GetInstance() {
    return &ActorTypeUnkBMOC::gInstance;
}

ARM Actor *ActorTypeUnkBMOC::Create() {
    return new(HeapIndex_2) ActorUnkBMOC();
}

ARM ActorTypeUnkBMOC::ActorTypeUnkBMOC() :
    ActorType(ActorId_BMOC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBMOC::ActorUnkBMOC() {}

ARM void ActorUnkBMOC::func_ov091_0216e72c(void) {}
ARM void ActorUnkBMOC::func_ov091_0216e730(void) {}
ARM void ActorUnkBMOC::func_ov091_0216e858(void) {}
ARM void ActorUnkBMOC::func_ov091_0216e9a8(void) {}
ARM void ActorUnkBMOC::func_ov091_0216ec60(void) {}
ARM void ActorUnkBMOC::func_ov091_0216ece0(void) {}
ARM void ActorUnkBMOC::func_ov091_0216edec(void) {}
ARM void ActorUnkBMOC::func_ov091_0216ee1c(void) {}
ARM void ActorUnkBMOC::func_ov091_0216eeb4(void) {}
ARM void ActorUnkBMOC::func_ov091_0216eee4(void) {}
ARM void ActorUnkBMOC::func_ov091_0216ef1c(void) {}
