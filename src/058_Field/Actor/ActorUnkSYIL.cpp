//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYIL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYIL ActorTypeUnkSYIL::gInstance;

ARM ActorTypeUnkSYIL *ActorTypeUnkSYIL::GetInstance() {
    return &ActorTypeUnkSYIL::gInstance;
}

ARM Actor *ActorTypeUnkSYIL::Create() {
    return new(HeapIndex_2) ActorUnkSYIL();
}

ARM ActorTypeUnkSYIL::ActorTypeUnkSYIL() :
    ActorType(ActorId_SYIL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYIL::ActorUnkSYIL() {}
