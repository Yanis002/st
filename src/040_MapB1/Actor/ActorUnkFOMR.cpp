//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOMR ActorTypeUnkFOMR::gInstance;

ARM ActorTypeUnkFOMR *ActorTypeUnkFOMR::GetInstance() {
    return &ActorTypeUnkFOMR::gInstance;
}

ARM Actor *ActorTypeUnkFOMR::Create() {
    return new(HeapIndex_2) ActorUnkFOMR();
}

ARM ActorTypeUnkFOMR::ActorTypeUnkFOMR() :
    ActorType(ActorId_FOMR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOMR::ActorUnkFOMR() {}
