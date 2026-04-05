//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT0.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMT0 ActorTypeUnkRMT0::gInstance;

ARM ActorTypeUnkRMT0 *ActorTypeUnkRMT0::GetInstance() {
    return &ActorTypeUnkRMT0::gInstance;
}

ARM Actor *ActorTypeUnkRMT0::Create() {
    return new(HeapIndex_2) ActorUnkRMT0();
}

ARM ActorTypeUnkRMT0::ActorTypeUnkRMT0() :
    ActorType(ActorId_RMT0) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMT0::ActorUnkRMT0() {}

ARM void ActorUnkRMT0::func_ov061_02157ef8(void) {}
ARM void ActorUnkRMT0::func_ov061_02157f18(void) {}
ARM void ActorUnkRMT0::func_ov061_02157f68(void) {}
ARM void ActorUnkRMT0::func_ov061_02157f88(void) {}
ARM void ActorUnkRMT0::func_ov061_02157fb0(void) {}
