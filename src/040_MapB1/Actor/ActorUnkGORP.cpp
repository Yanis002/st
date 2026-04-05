//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGORP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGORP ActorTypeUnkGORP::gInstance;

ARM ActorTypeUnkGORP *ActorTypeUnkGORP::GetInstance() {
    return &ActorTypeUnkGORP::gInstance;
}

ARM Actor *ActorTypeUnkGORP::Create() {
    return new(HeapIndex_2) ActorUnkGORP();
}

ARM ActorTypeUnkGORP::ActorTypeUnkGORP() :
    ActorType(ActorId_GORP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGORP::ActorUnkGORP() {}
