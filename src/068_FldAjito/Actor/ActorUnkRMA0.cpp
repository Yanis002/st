//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA0.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMA0 ActorTypeUnkRMA0::gInstance;

ARM ActorTypeUnkRMA0 *ActorTypeUnkRMA0::GetInstance() {
    return &ActorTypeUnkRMA0::gInstance;
}

ARM Actor *ActorTypeUnkRMA0::Create() {
    return new(HeapIndex_2) ActorUnkRMA0();
}

ARM ActorTypeUnkRMA0::ActorTypeUnkRMA0() :
    ActorType(ActorId_RMA0) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMA0::ActorUnkRMA0() {}

ARM void ActorUnkRMA0::func_ov068_021606d0(void) {}
ARM void ActorUnkRMA0::func_ov068_021606f0(void) {}
ARM void ActorUnkRMA0::func_ov068_02160718(void) {}
ARM void ActorUnkRMA0::func_ov068_0216071c(void) {}
ARM void ActorUnkRMA0::func_ov068_0216076c(void) {}
ARM void ActorUnkRMA0::func_ov068_0216078c(void) {}
ARM void ActorUnkRMA0::func_ov068_021607b4(void) {}
