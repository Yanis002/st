//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLVOF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkLVOF ActorTypeUnkLVOF::gInstance;

ARM ActorTypeUnkLVOF *ActorTypeUnkLVOF::GetInstance() {
    return &ActorTypeUnkLVOF::gInstance;
}

ARM Actor *ActorTypeUnkLVOF::Create() {
    return new(HeapIndex_2) ActorUnkLVOF();
}

ARM ActorTypeUnkLVOF::ActorTypeUnkLVOF() :
    ActorType(ActorId_LVOF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkLVOF::ActorUnkLVOF() {}

ARM void ActorUnkLVOF::func_ov021_020f3b00(void) {}
ARM void ActorUnkLVOF::func_ov021_020f3c8c(void) {}
ARM void ActorUnkLVOF::func_ov021_020f3ca0(void) {}
ARM void ActorUnkLVOF::func_ov021_020f403c(void) {}
ARM void ActorUnkLVOF::func_ov021_020f4238(void) {}
ARM void ActorUnkLVOF::func_ov021_020f424c(void) {}
ARM void ActorUnkLVOF::func_ov021_020f4330(void) {}
ARM void ActorUnkLVOF::func_ov021_020f4360(void) {}
ARM void ActorUnkLVOF::func_ov021_020f43ec(void) {}
ARM void ActorUnkLVOF::func_ov021_020f4458(void) {}
ARM void ActorUnkLVOF::func_ov021_020f4514(void) {}
ARM void ActorUnkLVOF::func_ov021_020f45f8(void) {}
ARM void ActorUnkLVOF::func_ov021_020f4624(void) {}
ARM void ActorUnkLVOF::func_ov021_020f4660(void) {}
ARM void ActorUnkLVOF::func_ov021_020f467c(void) {}
ARM void ActorUnkLVOF::func_ov021_020f46c8(void) {}
