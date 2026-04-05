//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWBEF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWBEF ActorTypeUnkWBEF::gInstance;

ARM ActorTypeUnkWBEF *ActorTypeUnkWBEF::GetInstance() {
    return &ActorTypeUnkWBEF::gInstance;
}

ARM Actor *ActorTypeUnkWBEF::Create() {
    return new(HeapIndex_2) ActorUnkWBEF();
}

ARM ActorTypeUnkWBEF::ActorTypeUnkWBEF() :
    ActorType(ActorId_WBEF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWBEF::ActorUnkWBEF() {}

ARM void ActorUnkWBEF::func_ov083_0215b108(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b210(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b25c(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b280(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b2cc(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b2f0(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b330(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b368(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b498(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b4c0(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b51c(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b540(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b58c(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b59c(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b614(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b690(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b6b0(void) {}
ARM void ActorUnkWBEF::func_ov083_0215b6d8(void) {}
