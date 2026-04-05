//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkPMTB ActorTypeUnkPMTB::gInstance;

ARM ActorTypeUnkPMTB *ActorTypeUnkPMTB::GetInstance() {
    return &ActorTypeUnkPMTB::gInstance;
}

ARM Actor *ActorTypeUnkPMTB::Create() {
    return new(HeapIndex_2) ActorUnkPMTB();
}

ARM ActorTypeUnkPMTB::ActorTypeUnkPMTB() :
    ActorType(ActorId_PMTB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPMTB::ActorUnkPMTB() {}

ARM void ActorUnkPMTB::func_ov093_02177a8c(void) {}
