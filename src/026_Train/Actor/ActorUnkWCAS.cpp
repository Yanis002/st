//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWCAS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWCAS ActorTypeUnkWCAS::gInstance;

ARM ActorTypeUnkWCAS *ActorTypeUnkWCAS::GetInstance() {
    return &ActorTypeUnkWCAS::gInstance;
}

ARM Actor *ActorTypeUnkWCAS::Create() {
    return new(HeapIndex_2) ActorUnkWCAS();
}

ARM ActorTypeUnkWCAS::ActorTypeUnkWCAS() :
    ActorType(ActorId_WCAS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWCAS::ActorUnkWCAS() {}
