//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCCB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNCCB ActorTypeUnkNCCB::gInstance;

ARM ActorTypeUnkNCCB *ActorTypeUnkNCCB::GetInstance() {
    return &ActorTypeUnkNCCB::gInstance;
}

ARM Actor *ActorTypeUnkNCCB::Create() {
    return new(HeapIndex_2) ActorUnkNCCB();
}

ARM ActorTypeUnkNCCB::ActorTypeUnkNCCB() :
    ActorType(ActorId_NCCB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNCCB::ActorUnkNCCB() {}

ARM void ActorUnkNCCB::func_ov062_02159c40(void) {}
ARM void ActorUnkNCCB::func_ov062_02159c60(void) {}
ARM void ActorUnkNCCB::func_ov062_02159cac(void) {}
ARM void ActorUnkNCCB::func_ov062_02159db0(void) {}
ARM void ActorUnkNCCB::func_ov062_02159e2c(void) {}
ARM void ActorUnkNCCB::func_ov062_02159e80(void) {}
ARM void ActorUnkNCCB::func_ov062_02159f74(void) {}
ARM void ActorUnkNCCB::func_ov062_02159f9c(void) {}
ARM void ActorUnkNCCB::func_ov062_02159fcc(void) {}
ARM void ActorUnkNCCB::func_ov062_02159fe0(void) {}
