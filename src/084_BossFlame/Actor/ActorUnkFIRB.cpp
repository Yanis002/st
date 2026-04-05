//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFIRB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFIRB ActorTypeUnkFIRB::gInstance;

ARM ActorTypeUnkFIRB *ActorTypeUnkFIRB::GetInstance() {
    return &ActorTypeUnkFIRB::gInstance;
}

ARM Actor *ActorTypeUnkFIRB::Create() {
    return new(HeapIndex_2) ActorUnkFIRB();
}

ARM ActorTypeUnkFIRB::ActorTypeUnkFIRB() :
    ActorType(ActorId_FIRB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFIRB::ActorUnkFIRB() {}

ARM void ActorUnkFIRB::func_ov084_0215a400(void) {}
ARM void ActorUnkFIRB::func_ov084_0215a564(void) {}
ARM void ActorUnkFIRB::func_ov084_0215a59c(void) {}
ARM void ActorUnkFIRB::func_ov084_0215a5c0(void) {}
ARM void ActorUnkFIRB::func_ov084_0215a774(void) {}
ARM void ActorUnkFIRB::func_ov084_0215a7a8(void) {}
ARM void ActorUnkFIRB::func_ov084_0215a880(void) {}
ARM void ActorUnkFIRB::func_ov084_0215ab68(void) {}
ARM void ActorUnkFIRB::func_ov084_0215ab70(void) {}
ARM void ActorUnkFIRB::func_ov084_0215aba0(void) {}
ARM void ActorUnkFIRB::func_ov084_0215adf8(void) {}
ARM void ActorUnkFIRB::func_ov084_0215ae60(void) {}
ARM void ActorUnkFIRB::func_ov084_0215aed0(void) {}
