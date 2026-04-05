//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM4.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMM4 ActorTypeUnkRMM4::gInstance;

ARM ActorTypeUnkRMM4 *ActorTypeUnkRMM4::GetInstance() {
    return &ActorTypeUnkRMM4::gInstance;
}

ARM Actor *ActorTypeUnkRMM4::Create() {
    return new(HeapIndex_2) ActorUnkRMM4();
}

ARM ActorTypeUnkRMM4::ActorTypeUnkRMM4() :
    ActorType(ActorId_RMM4) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMM4::ActorUnkRMM4() {}

ARM void ActorUnkRMM4::func_ov039_0211ab80(void) {}
ARM void ActorUnkRMM4::func_ov039_0211acd0(void) {}
ARM void ActorUnkRMM4::func_ov039_0211ace4(void) {}
ARM void ActorUnkRMM4::func_ov039_0211ad08(void) {}
ARM void ActorUnkRMM4::func_ov039_0211ad1c(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b078(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b104(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b1ac(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b1c0(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b1e0(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b264(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b310(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b440(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b45c(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b4a4(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b4f4(void) {}
