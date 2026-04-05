//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkHYSW.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkHYSW ActorTypeUnkHYSW::gInstance;

ARM ActorTypeUnkHYSW *ActorTypeUnkHYSW::GetInstance() {
    return &ActorTypeUnkHYSW::gInstance;
}

ARM Actor *ActorTypeUnkHYSW::Create() {
    return new(HeapIndex_2) ActorUnkHYSW();
}

ARM ActorTypeUnkHYSW::ActorTypeUnkHYSW() :
    ActorType(ActorId_HYSW) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkHYSW::ActorUnkHYSW() {}

ARM void ActorUnkHYSW::func_ov057_0213aa54(void) {}
ARM void ActorUnkHYSW::func_ov057_0213aa74(void) {}
ARM void ActorUnkHYSW::func_ov057_0213aab8(void) {}
ARM void ActorUnkHYSW::func_ov057_0213ab2c(void) {}
ARM void ActorUnkHYSW::func_ov057_0213ab40(void) {}
ARM void ActorUnkHYSW::func_ov057_0213abac(void) {}
ARM void ActorUnkHYSW::func_ov057_0213abc0(void) {}
ARM void ActorUnkHYSW::func_ov057_0213abdc(void) {}
