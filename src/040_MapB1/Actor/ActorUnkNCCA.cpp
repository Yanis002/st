//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCCA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNCCA ActorTypeUnkNCCA::gInstance;

ARM ActorTypeUnkNCCA *ActorTypeUnkNCCA::GetInstance() {
    return &ActorTypeUnkNCCA::gInstance;
}

ARM Actor *ActorTypeUnkNCCA::Create() {
    return new(HeapIndex_2) ActorUnkNCCA();
}

ARM ActorTypeUnkNCCA::ActorTypeUnkNCCA() :
    ActorType(ActorId_NCCA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNCCA::ActorUnkNCCA() {}
