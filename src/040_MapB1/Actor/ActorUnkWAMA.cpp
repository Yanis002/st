//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAMA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWAMA ActorTypeUnkWAMA::gInstance;

ARM ActorTypeUnkWAMA *ActorTypeUnkWAMA::GetInstance() {
    return &ActorTypeUnkWAMA::gInstance;
}

ARM Actor *ActorTypeUnkWAMA::Create() {
    return new(HeapIndex_2) ActorUnkWAMA();
}

ARM ActorTypeUnkWAMA::ActorTypeUnkWAMA() :
    ActorType(ActorId_WAMA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWAMA::ActorUnkWAMA() {}
