//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAMA ActorTypeUnkCAMA::gInstance;

ARM ActorTypeUnkCAMA *ActorTypeUnkCAMA::GetInstance() {
    return &ActorTypeUnkCAMA::gInstance;
}

ARM Actor *ActorTypeUnkCAMA::Create() {
    return new(HeapIndex_2) ActorUnkCAMA();
}

ARM ActorTypeUnkCAMA::ActorTypeUnkCAMA() :
    ActorType(ActorId_CAMA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAMA::ActorUnkCAMA() {}
