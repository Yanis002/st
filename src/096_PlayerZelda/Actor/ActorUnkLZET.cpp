//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLZET.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkLZET ActorTypeUnkLZET::gInstance;

ARM ActorTypeUnkLZET *ActorTypeUnkLZET::GetInstance() {
    return &ActorTypeUnkLZET::gInstance;
}

ARM Actor *ActorTypeUnkLZET::Create() {
    return new(HeapIndex_2) ActorUnkLZET();
}

ARM ActorTypeUnkLZET::ActorTypeUnkLZET() :
    ActorType(ActorId_LZET) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkLZET::ActorUnkLZET() {}

ARM void ActorUnkLZET::func_ov096_0217a6f4(void) {}
ARM void ActorUnkLZET::func_ov096_0217a708(void) {}
ARM void ActorUnkLZET::func_ov096_0217a724(void) {}
