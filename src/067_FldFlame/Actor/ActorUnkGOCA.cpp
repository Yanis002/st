//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOCA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGOCA ActorTypeUnkGOCA::gInstance;

ARM ActorTypeUnkGOCA *ActorTypeUnkGOCA::GetInstance() {
    return &ActorTypeUnkGOCA::gInstance;
}

ARM Actor *ActorTypeUnkGOCA::Create() {
    return new(HeapIndex_2) ActorUnkGOCA();
}

ARM ActorTypeUnkGOCA::ActorTypeUnkGOCA() :
    ActorType(ActorId_GOCA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGOCA::ActorUnkGOCA() {}
