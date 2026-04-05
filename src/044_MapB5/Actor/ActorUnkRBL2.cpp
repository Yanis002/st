//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBL2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBL2 ActorTypeUnkRBL2::gInstance;

ARM ActorTypeUnkRBL2 *ActorTypeUnkRBL2::GetInstance() {
    return &ActorTypeUnkRBL2::gInstance;
}

ARM Actor *ActorTypeUnkRBL2::Create() {
    return new(HeapIndex_2) ActorUnkRBL2();
}

ARM ActorTypeUnkRBL2::ActorTypeUnkRBL2() :
    ActorType(ActorId_RBL2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBL2::ActorUnkRBL2() {}

ARM void ActorUnkRBL2::func_ov044_0212bda0(void) {}
ARM void ActorUnkRBL2::func_ov044_0212be20(void) {}
ARM void ActorUnkRBL2::func_ov044_0212bea8(void) {}
ARM void ActorUnkRBL2::func_ov044_0212bf34(void) {}
ARM void ActorUnkRBL2::func_ov044_0212bfc0(void) {}
ARM void ActorUnkRBL2::func_ov044_0212c04c(void) {}
ARM void ActorUnkRBL2::func_ov044_0212c050(void) {}
ARM void ActorUnkRBL2::func_ov044_0212c14c(void) {}
ARM void ActorUnkRBL2::func_ov044_0212c16c(void) {}
ARM void ActorUnkRBL2::func_ov044_0212c194(void) {}
