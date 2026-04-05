//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMT1 ActorTypeUnkRMT1::gInstance;

ARM ActorTypeUnkRMT1 *ActorTypeUnkRMT1::GetInstance() {
    return &ActorTypeUnkRMT1::gInstance;
}

ARM Actor *ActorTypeUnkRMT1::Create() {
    return new(HeapIndex_2) ActorUnkRMT1();
}

ARM ActorTypeUnkRMT1::ActorTypeUnkRMT1() :
    ActorType(ActorId_RMT1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMT1::ActorUnkRMT1() {}

ARM void ActorUnkRMT1::func_ov061_0215801c(void) {}
ARM void ActorUnkRMT1::func_ov061_02158090(void) {}
ARM void ActorUnkRMT1::func_ov061_021580a4(void) {}
ARM void ActorUnkRMT1::func_ov061_021580f8(void) {}
ARM void ActorUnkRMT1::func_ov061_0215810c(void) {}
ARM void ActorUnkRMT1::func_ov061_02158120(void) {}
ARM void ActorUnkRMT1::func_ov061_02158170(void) {}
ARM void ActorUnkRMT1::func_ov061_02158194(void) {}
ARM void ActorUnkRMT1::func_ov061_021581a4(void) {}
ARM void ActorUnkRMT1::func_ov061_021581ac(void) {}
ARM void ActorUnkRMT1::func_ov061_021581c8(void) {}
ARM void ActorUnkRMT1::func_ov061_021581f0(void) {}
ARM void ActorUnkRMT1::func_ov061_02158220(void) {}
