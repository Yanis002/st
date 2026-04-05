//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMST.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMST ActorTypeUnkRMST::gInstance;

ARM ActorTypeUnkRMST *ActorTypeUnkRMST::GetInstance() {
    return &ActorTypeUnkRMST::gInstance;
}

ARM Actor *ActorTypeUnkRMST::Create() {
    return new(HeapIndex_2) ActorUnkRMST();
}

ARM ActorTypeUnkRMST::ActorTypeUnkRMST() :
    ActorType(ActorId_RMST) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMST::ActorUnkRMST() {}

ARM void ActorUnkRMST::func_ov036_0211de80(void) {}
ARM void ActorUnkRMST::func_ov036_0211dea0(void) {}
ARM void ActorUnkRMST::func_ov036_0211def0(void) {}
ARM void ActorUnkRMST::func_ov036_0211df10(void) {}
