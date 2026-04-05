//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMS1 ActorTypeUnkRMS1::gInstance;

ARM ActorTypeUnkRMS1 *ActorTypeUnkRMS1::GetInstance() {
    return &ActorTypeUnkRMS1::gInstance;
}

ARM Actor *ActorTypeUnkRMS1::Create() {
    return new(HeapIndex_2) ActorUnkRMS1();
}

ARM ActorTypeUnkRMS1::ActorTypeUnkRMS1() :
    ActorType(ActorId_RMS1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMS1::ActorUnkRMS1() {}

ARM void ActorUnkRMS1::func_ov065_02158f0c(void) {}
ARM void ActorUnkRMS1::func_ov065_02158f2c(void) {}
ARM void ActorUnkRMS1::func_ov065_02158f7c(void) {}
ARM void ActorUnkRMS1::func_ov065_02158f9c(void) {}
ARM void ActorUnkRMS1::func_ov065_02158fc4(void) {}
