//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMZS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMZS ActorTypeUnkDMZS::gInstance;

ARM ActorTypeUnkDMZS *ActorTypeUnkDMZS::GetInstance() {
    return &ActorTypeUnkDMZS::gInstance;
}

ARM Actor *ActorTypeUnkDMZS::Create() {
    return new(HeapIndex_2) ActorUnkDMZS();
}

ARM ActorTypeUnkDMZS::ActorTypeUnkDMZS() :
    ActorType(ActorId_DMZS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMZS::ActorUnkDMZS() {}

ARM void ActorUnkDMZS::func_ov088_0216c3c4(void) {}
ARM void ActorUnkDMZS::func_ov088_0216c420(void) {}
ARM void ActorUnkDMZS::func_ov088_0216c444(void) {}
ARM void ActorUnkDMZS::func_ov088_0216c470(void) {}
ARM void ActorUnkDMZS::func_ov088_0216c4d0(void) {}
ARM void ActorUnkDMZS::func_ov088_0216c6b0(void) {}
