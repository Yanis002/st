//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWAWA ActorTypeUnkWAWA::gInstance;

ARM ActorTypeUnkWAWA *ActorTypeUnkWAWA::GetInstance() {
    return &ActorTypeUnkWAWA::gInstance;
}

ARM Actor *ActorTypeUnkWAWA::Create() {
    return new(HeapIndex_2) ActorUnkWAWA();
}

ARM ActorTypeUnkWAWA::ActorTypeUnkWAWA() :
    ActorType(ActorId_WAWA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWAWA::ActorUnkWAWA() {}
