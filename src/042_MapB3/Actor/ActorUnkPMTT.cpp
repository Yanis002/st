//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTT.hpp"
#include "System/SysNew.hpp"
#include "versions.h"

#if IS_JP

extern ActorTypeUnkPMTT ActorTypeUnkPMTT::gInstance;

ARM ActorTypeUnkPMTT *ActorTypeUnkPMTT::GetInstance() {
    return &ActorTypeUnkPMTT::gInstance;
}

ARM Actor *ActorTypeUnkPMTT::Create() {
    return new(HeapIndex_2) ActorUnkPMTT();
}

ARM ActorTypeUnkPMTT::ActorTypeUnkPMTT() :
    ActorType(ActorId_PMTT) {}

ARM void ActorUnkPMTT::func_ov042_0212d8a4(void) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPMTT::ActorUnkPMTT() {}

ARM void ActorUnkPMTT::func_ov042_0212d904(void) {}
ARM void ActorUnkPMTT::func_ov042_0212d930(void) {}
ARM void ActorUnkPMTT::func_ov042_0212d944(void) {}
ARM void ActorUnkPMTT::func_ov042_0212dc78(void) {}
ARM void ActorUnkPMTT::func_ov042_0212dc8c(void) {}
ARM void ActorUnkPMTT::func_ov042_0212de64(void) {}
ARM void ActorUnkPMTT::func_ov042_0212df28(void) {}
ARM void ActorUnkPMTT::func_ov042_0212df3c(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e080(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e144(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e19c(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e1f4(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e2a0(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e414(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e4d8(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e4dc(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e4f8(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e514(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e53c(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e56c(void) {}

#endif
