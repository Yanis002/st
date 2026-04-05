//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYWL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYWL ActorTypeUnkSYWL::gInstance;

ARM ActorTypeUnkSYWL *ActorTypeUnkSYWL::GetInstance() {
    return &ActorTypeUnkSYWL::gInstance;
}

ARM Actor *ActorTypeUnkSYWL::Create() {
    return new(HeapIndex_2) ActorUnkSYWL();
}

ARM ActorTypeUnkSYWL::ActorTypeUnkSYWL() :
    ActorType(ActorId_SYWL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYWL::ActorUnkSYWL() {}
