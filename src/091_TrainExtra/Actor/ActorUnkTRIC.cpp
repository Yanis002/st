//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRIC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTRIC ActorTypeUnkTRIC::gInstance;

ARM ActorTypeUnkTRIC *ActorTypeUnkTRIC::GetInstance() {
    return &ActorTypeUnkTRIC::gInstance;
}

ARM Actor *ActorTypeUnkTRIC::Create() {
    return new(HeapIndex_2) ActorUnkTRIC();
}

ARM ActorTypeUnkTRIC::ActorTypeUnkTRIC() :
    ActorType(ActorId_TRIC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTRIC::ActorUnkTRIC() {}

ARM void ActorUnkTRIC::func_ov091_02175d74(void) {}
ARM void ActorUnkTRIC::func_ov091_02175e78(void) {}
ARM void ActorUnkTRIC::func_ov091_02175f14(void) {}
ARM void ActorUnkTRIC::func_ov091_02175f64(void) {}
ARM void ActorUnkTRIC::func_ov091_0217610c(void) {}
ARM void ActorUnkTRIC::func_ov091_02176144(void) {}
ARM void ActorUnkTRIC::func_ov091_02176158(void) {}
ARM void ActorUnkTRIC::func_ov091_02176198(void) {}
ARM void ActorUnkTRIC::func_ov091_02176224(void) {}
ARM void ActorUnkTRIC::func_ov091_02176238(void) {}
ARM void ActorUnkTRIC::func_ov091_02176304(void) {}
ARM void ActorUnkTRIC::func_ov091_02176318(void) {}
ARM void ActorUnkTRIC::func_ov091_0217637c(void) {}
ARM void ActorUnkTRIC::func_ov091_021763b4(void) {}
ARM void ActorUnkTRIC::func_ov091_02176410(void) {}
ARM void ActorUnkTRIC::func_ov091_0217646c(void) {}
ARM void ActorUnkTRIC::func_ov091_021765f8(void) {}
ARM void ActorUnkTRIC::func_ov091_0217669c(void) {}
ARM void ActorUnkTRIC::func_ov091_021766e8(void) {}
ARM void ActorUnkTRIC::func_ov091_02176704(void) {}
ARM void ActorUnkTRIC::func_ov091_02176728(void) {}
ARM void ActorUnkTRIC::func_ov091_021767d4(void) {}
ARM void ActorUnkTRIC::func_ov091_02176804(void) {}
