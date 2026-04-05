//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOMA ActorTypeUnkFOMA::gInstance;

ARM ActorTypeUnkFOMA *ActorTypeUnkFOMA::GetInstance() {
    return &ActorTypeUnkFOMA::gInstance;
}

ARM Actor *ActorTypeUnkFOMA::Create() {
    return new(HeapIndex_2) ActorUnkFOMA();
}

ARM ActorTypeUnkFOMA::ActorTypeUnkFOMA() :
    ActorType(ActorId_FOMA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOMA::ActorUnkFOMA() {}
