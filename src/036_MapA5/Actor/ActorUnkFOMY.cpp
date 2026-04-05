//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMY.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFOMY ActorTypeUnkFOMY::gInstance;

ARM ActorTypeUnkFOMY *ActorTypeUnkFOMY::GetInstance() {
    return &ActorTypeUnkFOMY::gInstance;
}

ARM Actor *ActorTypeUnkFOMY::Create() {
    return new(HeapIndex_2) ActorUnkFOMY();
}

ARM ActorTypeUnkFOMY::ActorTypeUnkFOMY() :
    ActorType(ActorId_FOMY) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFOMY::ActorUnkFOMY() {}

ARM void ActorUnkFOMY::func_ov036_0211b2d0(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b38c(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b3f4(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b420(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b484(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b4bc(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b4ec(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b500(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b510(void) {}
