//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAWB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAWB ActorTypeUnkCAWB::gInstance;

ARM ActorTypeUnkCAWB *ActorTypeUnkCAWB::GetInstance() {
    return &ActorTypeUnkCAWB::gInstance;
}

ARM Actor *ActorTypeUnkCAWB::Create() {
    return new(HeapIndex_2) ActorUnkCAWB();
}

ARM ActorTypeUnkCAWB::ActorTypeUnkCAWB() :
    ActorType(ActorId_CAWB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAWB::ActorUnkCAWB() {}
