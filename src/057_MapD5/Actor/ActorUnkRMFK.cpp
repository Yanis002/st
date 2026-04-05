//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMFK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMFK ActorTypeUnkRMFK::gInstance;

ARM ActorTypeUnkRMFK *ActorTypeUnkRMFK::GetInstance() {
    return &ActorTypeUnkRMFK::gInstance;
}

ARM Actor *ActorTypeUnkRMFK::Create() {
    return new(HeapIndex_2) ActorUnkRMFK();
}

ARM ActorTypeUnkRMFK::ActorTypeUnkRMFK() :
    ActorType(ActorId_RMFK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMFK::ActorUnkRMFK() {}

ARM void ActorUnkRMFK::func_ov057_0213a1d4(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a1e8(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a3d0(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a43c(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a44c(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a540(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a544(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a558(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a640(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a6b8(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a6f8(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a75c(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a79c(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a7e4(void) {}
