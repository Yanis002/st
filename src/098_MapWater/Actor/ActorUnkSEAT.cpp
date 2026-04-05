//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSEAT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSEAT ActorTypeUnkSEAT::gInstance;

ARM ActorTypeUnkSEAT *ActorTypeUnkSEAT::GetInstance() {
    return &ActorTypeUnkSEAT::gInstance;
}

ARM Actor *ActorTypeUnkSEAT::Create() {
    return new(HeapIndex_2) ActorUnkSEAT();
}

ARM ActorTypeUnkSEAT::ActorTypeUnkSEAT() :
    ActorType(ActorId_SEAT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSEAT::ActorUnkSEAT() {}

ARM void ActorUnkSEAT::func_ov098_02181fc8(void) {}
ARM void ActorUnkSEAT::func_ov098_021820f0(void) {}
ARM void ActorUnkSEAT::func_ov098_02182110(void) {}
ARM void ActorUnkSEAT::func_ov098_0218212c(void) {}
ARM void ActorUnkSEAT::func_ov098_02182140(void) {}
ARM void ActorUnkSEAT::func_ov098_02182160(void) {}
ARM void ActorUnkSEAT::func_ov098_02182180(void) {}
