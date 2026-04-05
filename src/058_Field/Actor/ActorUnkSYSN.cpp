//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYSN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYSN ActorTypeUnkSYSN::gInstance;

ARM ActorTypeUnkSYSN *ActorTypeUnkSYSN::GetInstance() {
    return &ActorTypeUnkSYSN::gInstance;
}

ARM Actor *ActorTypeUnkSYSN::Create() {
    return new(HeapIndex_2) ActorUnkSYSN();
}

ARM ActorTypeUnkSYSN::ActorTypeUnkSYSN() :
    ActorType(ActorId_SYSN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYSN::ActorUnkSYSN() {}
