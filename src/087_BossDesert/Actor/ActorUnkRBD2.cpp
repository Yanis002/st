//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBD2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBD2 ActorTypeUnkRBD2::gInstance;

ARM ActorTypeUnkRBD2 *ActorTypeUnkRBD2::GetInstance() {
    return &ActorTypeUnkRBD2::gInstance;
}

ARM Actor *ActorTypeUnkRBD2::Create() {
    return new(HeapIndex_2) ActorUnkRBD2();
}

ARM ActorTypeUnkRBD2::ActorTypeUnkRBD2() :
    ActorType(ActorId_RBD2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBD2::ActorUnkRBD2() {}

ARM void ActorUnkRBD2::func_ov087_02161400(void) {}
ARM void ActorUnkRBD2::func_ov087_021615bc(void) {}
ARM void ActorUnkRBD2::func_ov087_021616cc(void) {}
ARM void ActorUnkRBD2::func_ov087_021616d0(void) {}
ARM void ActorUnkRBD2::func_ov087_0216174c(void) {}
ARM void ActorUnkRBD2::func_ov087_0216176c(void) {}
ARM void ActorUnkRBD2::func_ov087_021617e8(void) {}
ARM void ActorUnkRBD2::func_ov087_02161828(void) {}
ARM void ActorUnkRBD2::func_ov087_02161880(void) {}
ARM void ActorUnkRBD2::func_ov087_0216193c(void) {}
ARM void ActorUnkRBD2::func_ov087_0216198c(void) {}
ARM void ActorUnkRBD2::func_ov087_021619cc(void) {}
