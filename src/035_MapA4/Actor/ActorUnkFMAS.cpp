//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFMAS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFMAS ActorTypeUnkFMAS::gInstance;

ARM ActorTypeUnkFMAS *ActorTypeUnkFMAS::GetInstance() {
    return &ActorTypeUnkFMAS::gInstance;
}

ARM Actor *ActorTypeUnkFMAS::Create() {
    return new(HeapIndex_2) ActorUnkFMAS();
}

ARM ActorTypeUnkFMAS::ActorTypeUnkFMAS() :
    ActorType(ActorId_FMAS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFMAS::ActorUnkFMAS() {}
