//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRPMT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRPMT ActorTypeUnkRPMT::gInstance;

ARM ActorTypeUnkRPMT *ActorTypeUnkRPMT::GetInstance() {
    return &ActorTypeUnkRPMT::gInstance;
}

ARM Actor *ActorTypeUnkRPMT::Create() {
    return new(HeapIndex_2) ActorUnkRPMT();
}

ARM ActorTypeUnkRPMT::ActorTypeUnkRPMT() :
    ActorType(ActorId_RPMT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRPMT::ActorUnkRPMT() {}

ARM void ActorUnkRPMT::func_ov041_0212a7f0(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a848(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a850(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a8c8(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a90c(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a94c(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a984(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a988(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a9b8(void) {}
ARM void ActorUnkRPMT::func_ov041_0212ab18(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b238(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b3ac(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b744(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b898(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b89c(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b924(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b954(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b968(void) {}
