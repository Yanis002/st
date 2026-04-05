//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYSL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYSL ActorTypeUnkSYSL::gInstance;

ARM ActorTypeUnkSYSL *ActorTypeUnkSYSL::GetInstance() {
    return &ActorTypeUnkSYSL::gInstance;
}

ARM Actor *ActorTypeUnkSYSL::Create() {
    return new(HeapIndex_2) ActorUnkSYSL();
}

ARM ActorTypeUnkSYSL::ActorTypeUnkSYSL() :
    ActorType(ActorId_SYSL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYSL::ActorUnkSYSL() {}
