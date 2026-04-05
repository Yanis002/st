//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMFT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMFT ActorTypeUnkDMFT::gInstance;

ARM ActorTypeUnkDMFT *ActorTypeUnkDMFT::GetInstance() {
    return &ActorTypeUnkDMFT::gInstance;
}

ARM Actor *ActorTypeUnkDMFT::Create() {
    return new(HeapIndex_2) ActorUnkDMFT();
}

ARM ActorTypeUnkDMFT::ActorTypeUnkDMFT() :
    ActorType(ActorId_DMFT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMFT::ActorUnkDMFT() {}

ARM void ActorUnkDMFT::func_ov067_0215a038(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a11c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a14c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a184(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a1d0(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a218(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a22c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a2b0(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a324(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a328(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a3b4(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a428(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a4e0(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a54c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a614(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a64c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a6fc(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a7ac(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a7dc(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a828(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a87c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215aab4(void) {}
ARM void ActorUnkDMFT::func_ov067_0215ab40(void) {}
