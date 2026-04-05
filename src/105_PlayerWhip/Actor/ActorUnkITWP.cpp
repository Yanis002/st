//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkITWP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkITWP ActorTypeUnkITWP::gInstance;

ARM ActorTypeUnkITWP *ActorTypeUnkITWP::GetInstance() {
    return &ActorTypeUnkITWP::gInstance;
}

ARM Actor *ActorTypeUnkITWP::Create() {
    return new(HeapIndex_2) ActorUnkITWP();
}

ARM ActorTypeUnkITWP::ActorTypeUnkITWP() :
    ActorType(ActorId_ITWP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkITWP::ActorUnkITWP() {}
