//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMVS ActorTypeUnkRMVS::gInstance;

ARM ActorTypeUnkRMVS *ActorTypeUnkRMVS::GetInstance() {
    return &ActorTypeUnkRMVS::gInstance;
}

ARM Actor *ActorTypeUnkRMVS::Create() {
    return new(HeapIndex_2) ActorUnkRMVS();
}

ARM ActorTypeUnkRMVS::ActorTypeUnkRMVS() :
    ActorType(ActorId_RMVS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMVS::ActorUnkRMVS() {}

ARM void ActorUnkRMVS::func_ov059_02161f48(void) {}
ARM void ActorUnkRMVS::func_ov059_02162008(void) {}
ARM void ActorUnkRMVS::func_ov059_021620a8(void) {}
ARM void ActorUnkRMVS::func_ov059_021620d4(void) {}
ARM void ActorUnkRMVS::func_ov059_02162124(void) {}
ARM void ActorUnkRMVS::func_ov059_0216212c(void) {}
ARM void ActorUnkRMVS::func_ov059_0216215c(void) {}
ARM void ActorUnkRMVS::func_ov059_02162194(void) {}
