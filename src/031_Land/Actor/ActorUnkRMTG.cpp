//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMTG ActorTypeUnkRMTG::gInstance;

ARM ActorTypeUnkRMTG *ActorTypeUnkRMTG::GetInstance() {
    return &ActorTypeUnkRMTG::gInstance;
}

ARM Actor *ActorTypeUnkRMTG::Create() {
    return new(HeapIndex_2) ActorUnkRMTG();
}

ARM ActorTypeUnkRMTG::ActorTypeUnkRMTG() :
    ActorType(ActorId_RMTG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMTG::ActorUnkRMTG() {}

ARM void ActorUnkRMTG::func_ov031_020ef874(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef8a0(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef958(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef990(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef9b0(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef9d0(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef9f8(void) {}
