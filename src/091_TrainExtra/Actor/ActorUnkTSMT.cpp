//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTSMT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTSMT ActorTypeUnkTSMT::gInstance;

ARM ActorTypeUnkTSMT *ActorTypeUnkTSMT::GetInstance() {
    return &ActorTypeUnkTSMT::gInstance;
}

ARM Actor *ActorTypeUnkTSMT::Create() {
    return new(HeapIndex_2) ActorUnkTSMT();
}

ARM ActorTypeUnkTSMT::ActorTypeUnkTSMT() :
    ActorType(ActorId_TSMT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTSMT::ActorUnkTSMT() {}

ARM void ActorUnkTSMT::func_ov091_0216ef88(void) {}
ARM void ActorUnkTSMT::func_ov091_0216efc4(void) {}
ARM void ActorUnkTSMT::func_ov091_0216eff4(void) {}
ARM void ActorUnkTSMT::func_ov091_0216f024(void) {}
ARM void ActorUnkTSMT::func_ov091_0216f034(void) {}
ARM void ActorUnkTSMT::func_ov091_0216f048(void) {}
ARM void ActorUnkTSMT::func_ov091_0216f064(void) {}
ARM void ActorUnkTSMT::func_ov091_0216f088(void) {}
