//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTFAT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTFAT ActorTypeUnkTFAT::gInstance;

ARM ActorTypeUnkTFAT *ActorTypeUnkTFAT::GetInstance() {
    return &ActorTypeUnkTFAT::gInstance;
}

ARM Actor *ActorTypeUnkTFAT::Create() {
    return new(HeapIndex_2) ActorUnkTFAT();
}

ARM ActorTypeUnkTFAT::ActorTypeUnkTFAT() :
    ActorType(ActorId_TFAT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTFAT::ActorUnkTFAT() {}

ARM void ActorUnkTFAT::func_ov026_02116648(void) {}
ARM void ActorUnkTFAT::func_ov026_02116668(void) {}
ARM void ActorUnkTFAT::func_ov026_0211667c(void) {}
ARM void ActorUnkTFAT::func_ov026_02116680(void) {}
ARM void ActorUnkTFAT::func_ov026_0211670c(void) {}
ARM void ActorUnkTFAT::func_ov026_02116720(void) {}
ARM void ActorUnkTFAT::func_ov026_02116728(void) {}
ARM void ActorUnkTFAT::func_ov026_02116780(void) {}
ARM void ActorUnkTFAT::func_ov026_02116794(void) {}
ARM void ActorUnkTFAT::func_ov026_021167b0(void) {}
