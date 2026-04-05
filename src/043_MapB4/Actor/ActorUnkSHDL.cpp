//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSHDL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSHDL ActorTypeUnkSHDL::gInstance;

THUMB ActorTypeUnkSHDL *ActorTypeUnkSHDL::GetInstance() {
    return &ActorTypeUnkSHDL::gInstance;
}

THUMB Actor *ActorTypeUnkSHDL::Create() {
    return new(HeapIndex_2) ActorUnkSHDL();
}

THUMB ActorTypeUnkSHDL::ActorTypeUnkSHDL() :
    ActorType(ActorId_SHDL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSHDL::ActorUnkSHDL() {}

THUMB void ActorUnkSHDL::func_ov043_02128b44(void) {}
THUMB void ActorUnkSHDL::func_ov043_02128d94(void) {}
THUMB void ActorUnkSHDL::func_ov043_021290c0(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129230(void) {}
THUMB void ActorUnkSHDL::func_ov043_0212946c(void) {}
THUMB void ActorUnkSHDL::func_ov043_021294b0(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129614(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129690(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129710(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129724(void) {}
THUMB void ActorUnkSHDL::func_ov043_021297d4(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129ac0(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129ae8(void) {}
THUMB void ActorUnkSHDL::func_ov043_02129af8(void) {}
