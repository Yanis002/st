//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGORM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGORM ActorTypeUnkGORM::gInstance;

ARM ActorTypeUnkGORM *ActorTypeUnkGORM::GetInstance() {
    return &ActorTypeUnkGORM::gInstance;
}

ARM Actor *ActorTypeUnkGORM::Create() {
    return new(HeapIndex_2) ActorUnkGORM();
}

ARM ActorTypeUnkGORM::ActorTypeUnkGORM() :
    ActorType(ActorId_GORM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGORM::ActorUnkGORM() {}
