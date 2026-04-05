//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYIS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYIS ActorTypeUnkSYIS::gInstance;

ARM ActorTypeUnkSYIS *ActorTypeUnkSYIS::GetInstance() {
    return &ActorTypeUnkSYIS::gInstance;
}

ARM Actor *ActorTypeUnkSYIS::Create() {
    return new(HeapIndex_2) ActorUnkSYIS();
}

ARM ActorTypeUnkSYIS::ActorTypeUnkSYIS() :
    ActorType(ActorId_SYIS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYIS::ActorUnkSYIS() {}
