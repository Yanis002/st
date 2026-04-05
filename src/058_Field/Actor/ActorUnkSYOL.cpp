//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYOL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYOL ActorTypeUnkSYOL::gInstance;

ARM ActorTypeUnkSYOL *ActorTypeUnkSYOL::GetInstance() {
    return &ActorTypeUnkSYOL::gInstance;
}

ARM Actor *ActorTypeUnkSYOL::Create() {
    return new(HeapIndex_2) ActorUnkSYOL();
}

ARM ActorTypeUnkSYOL::ActorTypeUnkSYOL() :
    ActorType(ActorId_SYOL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYOL::ActorUnkSYOL() {}
