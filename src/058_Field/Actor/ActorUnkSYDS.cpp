//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYDS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYDS ActorTypeUnkSYDS::gInstance;

ARM ActorTypeUnkSYDS *ActorTypeUnkSYDS::GetInstance() {
    return &ActorTypeUnkSYDS::gInstance;
}

ARM Actor *ActorTypeUnkSYDS::Create() {
    return new(HeapIndex_2) ActorUnkSYDS();
}

ARM ActorTypeUnkSYDS::ActorTypeUnkSYDS() :
    ActorType(ActorId_SYDS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYDS::ActorUnkSYDS() {}
