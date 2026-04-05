//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOLB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSOLB ActorTypeUnkSOLB::gInstance;

ARM ActorTypeUnkSOLB *ActorTypeUnkSOLB::GetInstance() {
    return &ActorTypeUnkSOLB::gInstance;
}

ARM Actor *ActorTypeUnkSOLB::Create() {
    return new(HeapIndex_2) ActorUnkSOLB();
}

ARM ActorTypeUnkSOLB::ActorTypeUnkSOLB() :
    ActorType(ActorId_SoldierBoy) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSOLB::ActorUnkSOLB() {}
