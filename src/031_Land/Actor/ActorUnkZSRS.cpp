//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZSRS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkZSRS ActorTypeUnkZSRS::gInstance;

THUMB ActorTypeUnkZSRS *ActorTypeUnkZSRS::GetInstance() {
    return &ActorTypeUnkZSRS::gInstance;
}

THUMB Actor *ActorTypeUnkZSRS::Create() {
    return new(HeapIndex_2) ActorUnkZSRS();
}

THUMB ActorTypeUnkZSRS::ActorTypeUnkZSRS() :
    ActorType(ActorId_ZSRS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkZSRS::ActorUnkZSRS() {}
