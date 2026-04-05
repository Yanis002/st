//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTSLB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTSLB ActorTypeUnkTSLB::gInstance;

ARM ActorTypeUnkTSLB *ActorTypeUnkTSLB::GetInstance() {
    return &ActorTypeUnkTSLB::gInstance;
}

ARM Actor *ActorTypeUnkTSLB::Create() {
    return new(HeapIndex_2) ActorUnkTSLB();
}

ARM ActorTypeUnkTSLB::ActorTypeUnkTSLB() :
    ActorType(ActorId_TSLB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTSLB::ActorUnkTSLB() {}

ARM void ActorUnkTSLB::func_ov062_0215a7d8(void) {}
ARM void ActorUnkTSLB::func_ov062_0215aa1c(void) {}
ARM void ActorUnkTSLB::func_ov062_0215aa30(void) {}
ARM void ActorUnkTSLB::func_ov062_0215aa44(void) {}
ARM void ActorUnkTSLB::func_ov062_0215aaa8(void) {}
ARM void ActorUnkTSLB::func_ov062_0215ab14(void) {}
ARM void ActorUnkTSLB::func_ov062_0215ab98(void) {}
ARM void ActorUnkTSLB::func_ov062_0215ae34(void) {}
ARM void ActorUnkTSLB::func_ov062_0215aec4(void) {}
ARM void ActorUnkTSLB::func_ov062_0215af7c(void) {}
ARM void ActorUnkTSLB::func_ov062_0215b04c(void) {}
ARM void ActorUnkTSLB::func_ov062_0215b050(void) {}
ARM void ActorUnkTSLB::func_ov062_0215b054(void) {}
ARM void ActorUnkTSLB::func_ov062_0215b08c(void) {}
ARM void ActorUnkTSLB::func_ov062_0215b0c4(void) {}
ARM void ActorUnkTSLB::func_ov062_0215b324(void) {}
ARM void ActorUnkTSLB::func_ov062_0215b330(void) {}
