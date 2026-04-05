//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMVD ActorTypeUnkRMVD::gInstance;

ARM ActorTypeUnkRMVD *ActorTypeUnkRMVD::GetInstance() {
    return &ActorTypeUnkRMVD::gInstance;
}

ARM Actor *ActorTypeUnkRMVD::Create() {
    return new(HeapIndex_2) ActorUnkRMVD();
}

ARM ActorTypeUnkRMVD::ActorTypeUnkRMVD() :
    ActorType(ActorId_RMVD) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMVD::ActorUnkRMVD() {}

ARM void ActorUnkRMVD::func_ov059_02162770(void) {}
ARM void ActorUnkRMVD::func_ov059_02162830(void) {}
ARM void ActorUnkRMVD::func_ov059_021628d0(void) {}
ARM void ActorUnkRMVD::func_ov059_021628fc(void) {}
ARM void ActorUnkRMVD::func_ov059_0216294c(void) {}
ARM void ActorUnkRMVD::func_ov059_02162954(void) {}
ARM void ActorUnkRMVD::func_ov059_02162984(void) {}
ARM void ActorUnkRMVD::func_ov059_021629bc(void) {}
