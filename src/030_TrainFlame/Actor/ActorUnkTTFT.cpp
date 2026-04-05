//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTTFT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTTFT ActorTypeUnkTTFT::gInstance;

ARM ActorTypeUnkTTFT *ActorTypeUnkTTFT::GetInstance() {
    return &ActorTypeUnkTTFT::gInstance;
}

ARM Actor *ActorTypeUnkTTFT::Create() {
    return new(HeapIndex_2) ActorUnkTTFT();
}

ARM ActorTypeUnkTTFT::ActorTypeUnkTTFT() :
    ActorType(ActorId_TTFT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTTFT::ActorUnkTTFT() {}

ARM void ActorUnkTTFT::func_ov030_0214d6c0(void) {}
ARM void ActorUnkTTFT::func_ov030_0214d710(void) {}
ARM void ActorUnkTTFT::func_ov030_0214d724(void) {}
ARM void ActorUnkTTFT::func_ov030_0214d78c(void) {}
ARM void ActorUnkTTFT::func_ov030_0214d7a0(void) {}
ARM void ActorUnkTTFT::func_ov030_0214d7bc(void) {}
