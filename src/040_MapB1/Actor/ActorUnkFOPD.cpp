//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOPD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOPD ActorTypeUnkFOPD::gInstance;

ARM ActorTypeUnkFOPD *ActorTypeUnkFOPD::GetInstance() {
    return &ActorTypeUnkFOPD::gInstance;
}

ARM Actor *ActorTypeUnkFOPD::Create() {
    return new(HeapIndex_2) ActorUnkFOPD();
}

ARM ActorTypeUnkFOPD::ActorTypeUnkFOPD() :
    ActorType(ActorId_FOPD) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOPD::ActorUnkFOPD() {}
