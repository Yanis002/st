//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLAVA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkLAVA ActorTypeUnkLAVA::gInstance;

ARM ActorTypeUnkLAVA *ActorTypeUnkLAVA::GetInstance() {
    return &ActorTypeUnkLAVA::gInstance;
}

ARM Actor *ActorTypeUnkLAVA::Create() {
    return new(HeapIndex_2) ActorUnkLAVA();
}

ARM ActorTypeUnkLAVA::ActorTypeUnkLAVA() :
    ActorType(ActorId_LAVA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkLAVA::ActorUnkLAVA() {}

ARM void ActorUnkLAVA::func_ov084_0215dfcc(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e178(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e18c(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e334(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e498(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e4ac(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e54c(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e5d0(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e64c(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e670(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e674(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e7fc(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e988(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e9e0(void) {}
ARM void ActorUnkLAVA::func_ov084_0215e9fc(void) {}
ARM void ActorUnkLAVA::func_ov084_0215ea14(void) {}
ARM void ActorUnkLAVA::func_ov084_0215ea70(void) {}
ARM void ActorUnkLAVA::func_ov084_0215ea8c(void) {}
ARM void ActorUnkLAVA::func_ov084_0215eae4(void) {}
ARM void ActorUnkLAVA::func_ov084_0215eb44(void) {}
