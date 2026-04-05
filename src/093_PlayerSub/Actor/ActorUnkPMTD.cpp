//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkPMTD ActorTypeUnkPMTD::gInstance;

ARM ActorTypeUnkPMTD *ActorTypeUnkPMTD::GetInstance() {
    return &ActorTypeUnkPMTD::gInstance;
}

ARM Actor *ActorTypeUnkPMTD::Create() {
    return new(HeapIndex_2) ActorUnkPMTD();
}

ARM ActorTypeUnkPMTD::ActorTypeUnkPMTD() :
    ActorType(ActorId_PMTD) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPMTD::ActorUnkPMTD() {}

ARM void ActorUnkPMTD::func_ov093_02177be0(void) {}
