//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYOS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYOS ActorTypeUnkSYOS::gInstance;

ARM ActorTypeUnkSYOS *ActorTypeUnkSYOS::GetInstance() {
    return &ActorTypeUnkSYOS::gInstance;
}

ARM Actor *ActorTypeUnkSYOS::Create() {
    return new(HeapIndex_2) ActorUnkSYOS();
}

ARM ActorTypeUnkSYOS::ActorTypeUnkSYOS() :
    ActorType(ActorId_SYOS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYOS::ActorUnkSYOS() {}
