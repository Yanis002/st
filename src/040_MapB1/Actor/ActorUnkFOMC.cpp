//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOMC ActorTypeUnkFOMC::gInstance;

ARM ActorTypeUnkFOMC *ActorTypeUnkFOMC::GetInstance() {
    return &ActorTypeUnkFOMC::gInstance;
}

ARM Actor *ActorTypeUnkFOMC::Create() {
    return new(HeapIndex_2) ActorUnkFOMC();
}

ARM ActorTypeUnkFOMC::ActorTypeUnkFOMC() :
    ActorType(ActorId_FOMC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOMC::ActorUnkFOMC() {}
