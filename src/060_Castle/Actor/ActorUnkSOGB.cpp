//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOGB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSOGB ActorTypeUnkSOGB::gInstance;

ARM ActorTypeUnkSOGB *ActorTypeUnkSOGB::GetInstance() {
    return &ActorTypeUnkSOGB::gInstance;
}

ARM Actor *ActorTypeUnkSOGB::Create() {
    return new(HeapIndex_2) ActorUnkSOGB();
}

ARM ActorTypeUnkSOGB::ActorTypeUnkSOGB() :
    ActorType(ActorId_SOGB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSOGB::ActorUnkSOGB() {}
