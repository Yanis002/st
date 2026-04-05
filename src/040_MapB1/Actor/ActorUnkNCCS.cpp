//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCCS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNCCS ActorTypeUnkNCCS::gInstance;

ARM ActorTypeUnkNCCS *ActorTypeUnkNCCS::GetInstance() {
    return &ActorTypeUnkNCCS::gInstance;
}

ARM Actor *ActorTypeUnkNCCS::Create() {
    return new(HeapIndex_2) ActorUnkNCCS();
}

ARM ActorTypeUnkNCCS::ActorTypeUnkNCCS() :
    ActorType(ActorId_NCCS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNCCS::ActorUnkNCCS() {}
