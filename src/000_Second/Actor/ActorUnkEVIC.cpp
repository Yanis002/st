//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEVIC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEVIC ActorTypeUnkEVIC::gInstance;

ARM ActorTypeUnkEVIC *ActorTypeUnkEVIC::GetInstance() {
    return &ActorTypeUnkEVIC::gInstance;
}

ARM Actor *ActorTypeUnkEVIC::Create() {
    return new(HeapIndex_2) ActorUnkEVIC();
}

ARM ActorTypeUnkEVIC::ActorTypeUnkEVIC() :
    ActorType(ActorId_EVIC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEVIC::ActorUnkEVIC() {}

ARM void ActorUnkEVIC::func_ov000_0209bfe0(void) {}
ARM void ActorUnkEVIC::func_ov000_0209c014(void) {}
ARM void ActorUnkEVIC::func_ov000_0209c030(void) {}
ARM void ActorUnkEVIC::func_ov000_0209c044(void) {}
ARM void ActorUnkEVIC::func_ov000_0209c060(void) {}
