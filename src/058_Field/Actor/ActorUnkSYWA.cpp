//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYWA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYWA ActorTypeUnkSYWA::gInstance;

ARM ActorTypeUnkSYWA *ActorTypeUnkSYWA::GetInstance() {
    return &ActorTypeUnkSYWA::gInstance;
}

ARM Actor *ActorTypeUnkSYWA::Create() {
    return new(HeapIndex_2) ActorUnkSYWA();
}

ARM ActorTypeUnkSYWA::ActorTypeUnkSYWA() :
    ActorType(ActorId_SYWA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYWA::ActorUnkSYWA() {}
