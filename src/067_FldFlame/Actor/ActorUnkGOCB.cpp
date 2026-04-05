//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOCB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGOCB ActorTypeUnkGOCB::gInstance;

ARM ActorTypeUnkGOCB *ActorTypeUnkGOCB::GetInstance() {
    return &ActorTypeUnkGOCB::gInstance;
}

ARM Actor *ActorTypeUnkGOCB::Create() {
    return new(HeapIndex_2) ActorUnkGOCB();
}

ARM ActorTypeUnkGOCB::ActorTypeUnkGOCB() :
    ActorType(ActorId_GOCB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGOCB::ActorUnkGOCB() {}
