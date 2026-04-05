//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYFI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYFI ActorTypeUnkSYFI::gInstance;

ARM ActorTypeUnkSYFI *ActorTypeUnkSYFI::GetInstance() {
    return &ActorTypeUnkSYFI::gInstance;
}

ARM Actor *ActorTypeUnkSYFI::Create() {
    return new(HeapIndex_2) ActorUnkSYFI();
}

ARM ActorTypeUnkSYFI::ActorTypeUnkSYFI() :
    ActorType(ActorId_SYFI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYFI::ActorUnkSYFI() {}
