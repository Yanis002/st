//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWAWC ActorTypeUnkWAWC::gInstance;

ARM ActorTypeUnkWAWC *ActorTypeUnkWAWC::GetInstance() {
    return &ActorTypeUnkWAWC::gInstance;
}

ARM Actor *ActorTypeUnkWAWC::Create() {
    return new(HeapIndex_2) ActorUnkWAWC();
}

ARM ActorTypeUnkWAWC::ActorTypeUnkWAWC() :
    ActorType(ActorId_WAWC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWAWC::ActorUnkWAWC() {}

ARM void ActorUnkWAWC::func_ov066_0215c0bc(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c0dc(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c120(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c224(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c27c(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c2d0(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c3c4(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c3ec(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c41c(void) {}
ARM void ActorUnkWAWC::func_ov066_0215c430(void) {}
