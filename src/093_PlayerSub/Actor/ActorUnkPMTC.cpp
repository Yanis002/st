//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkPMTC ActorTypeUnkPMTC::gInstance;

ARM ActorTypeUnkPMTC *ActorTypeUnkPMTC::GetInstance() {
    return &ActorTypeUnkPMTC::gInstance;
}

ARM Actor *ActorTypeUnkPMTC::Create() {
    return new(HeapIndex_2) ActorUnkPMTC();
}

ARM ActorTypeUnkPMTC::ActorTypeUnkPMTC() :
    ActorType(ActorId_PMTC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPMTC::ActorUnkPMTC() {}

ARM void ActorUnkPMTC::func_ov093_02177b34(void) {}
