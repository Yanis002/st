//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKOAT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkKOAT ActorTypeUnkKOAT::gInstance;

ARM ActorTypeUnkKOAT *ActorTypeUnkKOAT::GetInstance() {
    return &ActorTypeUnkKOAT::gInstance;
}

ARM Actor *ActorTypeUnkKOAT::Create() {
    return new(HeapIndex_2) ActorUnkKOAT();
}

ARM ActorTypeUnkKOAT::ActorTypeUnkKOAT() :
    ActorType(ActorId_KOAT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkKOAT::ActorUnkKOAT() {}

ARM void ActorUnkKOAT::func_ov058_02141e54(void) {}
ARM void ActorUnkKOAT::func_ov058_02141fc0(void) {}
ARM void ActorUnkKOAT::func_ov058_021420b4(void) {}
ARM void ActorUnkKOAT::func_ov058_021420dc(void) {}
ARM void ActorUnkKOAT::func_ov058_0214210c(void) {}
ARM void ActorUnkKOAT::func_ov058_02142228(void) {}
ARM void ActorUnkKOAT::func_ov058_021422f0(void) {}
ARM void ActorUnkKOAT::func_ov058_02142368(void) {}
