//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBPAP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBPAP ActorTypeUnkBPAP::gInstance;

ARM ActorTypeUnkBPAP *ActorTypeUnkBPAP::GetInstance() {
    return &ActorTypeUnkBPAP::gInstance;
}

ARM Actor *ActorTypeUnkBPAP::Create() {
    return new(HeapIndex_2) ActorUnkBPAP();
}

ARM ActorTypeUnkBPAP::ActorTypeUnkBPAP() :
    ActorType(ActorId_BPAP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBPAP::ActorUnkBPAP() {}

ARM void ActorUnkBPAP::func_ov021_020f3838(void) {}
ARM void ActorUnkBPAP::func_ov021_020f3858(void) {}
ARM void ActorUnkBPAP::func_ov021_020f3884(void) {}
ARM void ActorUnkBPAP::func_ov021_020f3898(void) {}
ARM void ActorUnkBPAP::func_ov021_020f38b4(void) {}
