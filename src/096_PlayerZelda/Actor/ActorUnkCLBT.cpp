//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLBT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCLBT ActorTypeUnkCLBT::gInstance;

ARM ActorTypeUnkCLBT *ActorTypeUnkCLBT::GetInstance() {
    return &ActorTypeUnkCLBT::gInstance;
}

ARM Actor *ActorTypeUnkCLBT::Create() {
    return new(HeapIndex_2) ActorUnkCLBT();
}

ARM ActorTypeUnkCLBT::ActorTypeUnkCLBT() :
    ActorType(ActorId_CLBT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCLBT::ActorUnkCLBT() {}

ARM void ActorUnkCLBT::func_ov096_0217a790(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a7cc(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a80c(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a858(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a894(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a8cc(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a910(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a948(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a9e4(void) {}
ARM void ActorUnkCLBT::func_ov096_0217ab28(void) {}
ARM void ActorUnkCLBT::func_ov096_0217ab3c(void) {}
ARM void ActorUnkCLBT::func_ov096_0217ab58(void) {}
ARM void ActorUnkCLBT::func_ov096_0217ab6c(void) {}
ARM void ActorUnkCLBT::func_ov096_0217ab7c(void) {}
