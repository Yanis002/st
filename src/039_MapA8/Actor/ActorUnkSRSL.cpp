//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSRSL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSRSL ActorTypeUnkSRSL::gInstance;

ARM ActorTypeUnkSRSL *ActorTypeUnkSRSL::GetInstance() {
    return &ActorTypeUnkSRSL::gInstance;
}

ARM Actor *ActorTypeUnkSRSL::Create() {
    return new(HeapIndex_2) ActorUnkSRSL();
}

ARM ActorTypeUnkSRSL::ActorTypeUnkSRSL() :
    ActorType(ActorId_SRSL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSRSL::ActorUnkSRSL() {}
