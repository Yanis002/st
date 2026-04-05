//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYKCP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkYKCP ActorTypeUnkYKCP::gInstance;

ARM ActorTypeUnkYKCP *ActorTypeUnkYKCP::GetInstance() {
    return &ActorTypeUnkYKCP::gInstance;
}

ARM Actor *ActorTypeUnkYKCP::Create() {
    return new(HeapIndex_2) ActorUnkYKCP();
}

ARM ActorTypeUnkYKCP::ActorTypeUnkYKCP() :
    ActorType(ActorId_YKCP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkYKCP::ActorUnkYKCP() {}
