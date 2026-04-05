//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOMS ActorTypeUnkFOMS::gInstance;

ARM ActorTypeUnkFOMS *ActorTypeUnkFOMS::GetInstance() {
    return &ActorTypeUnkFOMS::gInstance;
}

ARM Actor *ActorTypeUnkFOMS::Create() {
    return new(HeapIndex_2) ActorUnkFOMS();
}

ARM ActorTypeUnkFOMS::ActorTypeUnkFOMS() :
    ActorType(ActorId_FOMS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOMS::ActorUnkFOMS() {}
