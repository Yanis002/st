//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYFO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYFO ActorTypeUnkSYFO::gInstance;

ARM ActorTypeUnkSYFO *ActorTypeUnkSYFO::GetInstance() {
    return &ActorTypeUnkSYFO::gInstance;
}

ARM Actor *ActorTypeUnkSYFO::Create() {
    return new(HeapIndex_2) ActorUnkSYFO();
}

ARM ActorTypeUnkSYFO::ActorTypeUnkSYFO() :
    ActorType(ActorId_SYFO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYFO::ActorUnkSYFO() {}
