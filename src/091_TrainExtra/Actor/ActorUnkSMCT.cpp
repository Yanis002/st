//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSMCT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSMCT ActorTypeUnkSMCT::gInstance;

ARM ActorTypeUnkSMCT *ActorTypeUnkSMCT::GetInstance() {
    return &ActorTypeUnkSMCT::gInstance;
}

ARM Actor *ActorTypeUnkSMCT::Create() {
    return new(HeapIndex_2) ActorUnkSMCT();
}

ARM ActorTypeUnkSMCT::ActorTypeUnkSMCT() :
    ActorType(ActorId_SMCT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSMCT::ActorUnkSMCT() {}

ARM void ActorUnkSMCT::func_ov091_02169c58(void) {}
ARM void ActorUnkSMCT::func_ov091_02169c9c(void) {}
ARM void ActorUnkSMCT::func_ov091_02169cd8(void) {}
ARM void ActorUnkSMCT::func_ov091_02169d80(void) {}
ARM void ActorUnkSMCT::func_ov091_02169da0(void) {}
ARM void ActorUnkSMCT::func_ov091_02169dc8(void) {}
