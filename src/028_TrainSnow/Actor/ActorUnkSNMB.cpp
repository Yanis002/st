//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSNMB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSNMB ActorTypeUnkSNMB::gInstance;

ARM ActorTypeUnkSNMB *ActorTypeUnkSNMB::GetInstance() {
    return &ActorTypeUnkSNMB::gInstance;
}

ARM Actor *ActorTypeUnkSNMB::Create() {
    return new(HeapIndex_2) ActorUnkSNMB();
}

ARM ActorTypeUnkSNMB::ActorTypeUnkSNMB() :
    ActorType(ActorId_SNMB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSNMB::ActorUnkSNMB() {}

ARM void ActorUnkSNMB::func_ov028_021431dc(void) {}
ARM void ActorUnkSNMB::func_ov028_02143290(void) {}
ARM void ActorUnkSNMB::func_ov028_021432b4(void) {}
ARM void ActorUnkSNMB::func_ov028_021432e4(void) {}
ARM void ActorUnkSNMB::func_ov028_02143440(void) {}
ARM void ActorUnkSNMB::func_ov028_021434f0(void) {}
ARM void ActorUnkSNMB::func_ov028_02143630(void) {}
ARM void ActorUnkSNMB::func_ov028_021437a8(void) {}
ARM void ActorUnkSNMB::func_ov028_0214383c(void) {}
ARM void ActorUnkSNMB::func_ov028_0214385c(void) {}
