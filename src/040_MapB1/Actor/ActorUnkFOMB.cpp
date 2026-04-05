//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOMB ActorTypeUnkFOMB::gInstance;

ARM ActorTypeUnkFOMB *ActorTypeUnkFOMB::GetInstance() {
    return &ActorTypeUnkFOMB::gInstance;
}

ARM Actor *ActorTypeUnkFOMB::Create() {
    return new(HeapIndex_2) ActorUnkFOMB();
}

ARM ActorTypeUnkFOMB::ActorTypeUnkFOMB() :
    ActorType(ActorId_FOMB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOMB::ActorUnkFOMB() {}
