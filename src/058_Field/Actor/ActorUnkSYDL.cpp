//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYDL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYDL ActorTypeUnkSYDL::gInstance;

ARM ActorTypeUnkSYDL *ActorTypeUnkSYDL::GetInstance() {
    return &ActorTypeUnkSYDL::gInstance;
}

ARM Actor *ActorTypeUnkSYDL::Create() {
    return new(HeapIndex_2) ActorUnkSYDL();
}

ARM ActorTypeUnkSYDL::ActorTypeUnkSYDL() :
    ActorType(ActorId_SYDL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYDL::ActorUnkSYDL() {}
