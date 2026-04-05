//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOCP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGOCP ActorTypeUnkGOCP::gInstance;

ARM ActorTypeUnkGOCP *ActorTypeUnkGOCP::GetInstance() {
    return &ActorTypeUnkGOCP::gInstance;
}

ARM Actor *ActorTypeUnkGOCP::Create() {
    return new(HeapIndex_2) ActorUnkGOCP();
}

ARM ActorTypeUnkGOCP::ActorTypeUnkGOCP() :
    ActorType(ActorId_GOCP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGOCP::ActorUnkGOCP() {}
