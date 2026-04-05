//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSIRO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSIRO ActorTypeUnkSIRO::gInstance;

ARM ActorTypeUnkSIRO *ActorTypeUnkSIRO::GetInstance() {
    return &ActorTypeUnkSIRO::gInstance;
}

ARM Actor *ActorTypeUnkSIRO::Create() {
    return new(HeapIndex_2) ActorUnkSIRO();
}

ARM ActorTypeUnkSIRO::ActorTypeUnkSIRO() :
    ActorType(ActorId_SIRO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSIRO::ActorUnkSIRO() {}
