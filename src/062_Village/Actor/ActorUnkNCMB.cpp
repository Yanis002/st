//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCMB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNCMB ActorTypeUnkNCMB::gInstance;

ARM ActorTypeUnkNCMB *ActorTypeUnkNCMB::GetInstance() {
    return &ActorTypeUnkNCMB::gInstance;
}

ARM Actor *ActorTypeUnkNCMB::Create() {
    return new(HeapIndex_2) ActorUnkNCMB();
}

ARM ActorTypeUnkNCMB::ActorTypeUnkNCMB() :
    ActorType(ActorId_NCMB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNCMB::ActorUnkNCMB() {}
