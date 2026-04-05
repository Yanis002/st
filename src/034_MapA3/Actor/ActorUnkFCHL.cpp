//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFCHL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFCHL ActorTypeUnkFCHL::gInstance;

ARM ActorTypeUnkFCHL *ActorTypeUnkFCHL::GetInstance() {
    return &ActorTypeUnkFCHL::gInstance;
}

ARM Actor *ActorTypeUnkFCHL::Create() {
    return new(HeapIndex_2) ActorUnkFCHL();
}

ARM ActorTypeUnkFCHL::ActorTypeUnkFCHL() :
    ActorType(ActorId_FCHL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFCHL::ActorUnkFCHL() {}

ARM void ActorUnkFCHL::func_ov034_02119efc(void) {}
ARM void ActorUnkFCHL::func_ov034_02119ff0(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a004(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a208(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a21c(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a23c(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a258(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a288(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a2c0(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a2d4(void) {}
