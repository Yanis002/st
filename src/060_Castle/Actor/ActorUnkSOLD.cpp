//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOLD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSOLD ActorTypeUnkSOLD::gInstance;

ARM ActorTypeUnkSOLD *ActorTypeUnkSOLD::GetInstance() {
    return &ActorTypeUnkSOLD::gInstance;
}

ARM Actor *ActorTypeUnkSOLD::Create() {
    return new(HeapIndex_2) ActorUnkSOLD();
}

ARM ActorTypeUnkSOLD::ActorTypeUnkSOLD() :
    ActorType(ActorId_Soldier) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSOLD::ActorUnkSOLD() {}
