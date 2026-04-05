//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWAWB ActorTypeUnkWAWB::gInstance;

ARM ActorTypeUnkWAWB *ActorTypeUnkWAWB::GetInstance() {
    return &ActorTypeUnkWAWB::gInstance;
}

ARM Actor *ActorTypeUnkWAWB::Create() {
    return new(HeapIndex_2) ActorUnkWAWB();
}

ARM ActorTypeUnkWAWB::ActorTypeUnkWAWB() :
    ActorType(ActorId_WAWB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWAWB::ActorUnkWAWB() {}

ARM void ActorUnkWAWB::func_ov066_0215bb44(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bb64(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bbb0(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bd1c(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bd90(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bde4(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bed8(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bee0(void) {}
ARM void ActorUnkWAWB::func_ov066_0215beec(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bf14(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bf44(void) {}
ARM void ActorUnkWAWB::func_ov066_0215bf58(void) {}
