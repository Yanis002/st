//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMVF ActorTypeUnkRMVF::gInstance;

ARM ActorTypeUnkRMVF *ActorTypeUnkRMVF::GetInstance() {
    return &ActorTypeUnkRMVF::gInstance;
}

ARM Actor *ActorTypeUnkRMVF::Create() {
    return new(HeapIndex_2) ActorUnkRMVF();
}

ARM ActorTypeUnkRMVF::ActorTypeUnkRMVF() :
    ActorType(ActorId_RMVF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMVF::ActorUnkRMVF() {}

ARM void ActorUnkRMVF::func_ov059_02161c24(void) {}
ARM void ActorUnkRMVF::func_ov059_02161ce4(void) {}
ARM void ActorUnkRMVF::func_ov059_02161cf8(void) {}
ARM void ActorUnkRMVF::func_ov059_02161d98(void) {}
ARM void ActorUnkRMVF::func_ov059_02161dc4(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e14(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e1c(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e40(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e50(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e58(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e74(void) {}
ARM void ActorUnkRMVF::func_ov059_02161ea4(void) {}
ARM void ActorUnkRMVF::func_ov059_02161edc(void) {}
