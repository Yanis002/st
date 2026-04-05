//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMVT ActorTypeUnkRMVT::gInstance;

ARM ActorTypeUnkRMVT *ActorTypeUnkRMVT::GetInstance() {
    return &ActorTypeUnkRMVT::gInstance;
}

ARM Actor *ActorTypeUnkRMVT::Create() {
    return new(HeapIndex_2) ActorUnkRMVT();
}

ARM ActorTypeUnkRMVT::ActorTypeUnkRMVT() :
    ActorType(ActorId_RMVT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMVT::ActorUnkRMVT() {}

ARM void ActorUnkRMVT::func_ov059_021615ac(void) {}
ARM void ActorUnkRMVT::func_ov059_0216169c(void) {}
ARM void ActorUnkRMVT::func_ov059_021616b8(void) {}
ARM void ActorUnkRMVT::func_ov059_021616cc(void) {}
ARM void ActorUnkRMVT::func_ov059_02161850(void) {}
ARM void ActorUnkRMVT::func_ov059_02161854(void) {}
ARM void ActorUnkRMVT::func_ov059_02161868(void) {}
ARM void ActorUnkRMVT::func_ov059_021618ec(void) {}
ARM void ActorUnkRMVT::func_ov059_021619e0(void) {}
ARM void ActorUnkRMVT::func_ov059_021619f8(void) {}
ARM void ActorUnkRMVT::func_ov059_02161a70(void) {}
ARM void ActorUnkRMVT::func_ov059_02161aa8(void) {}
ARM void ActorUnkRMVT::func_ov059_02161ae8(void) {}
ARM void ActorUnkRMVT::func_ov059_02161afc(void) {}
ARM void ActorUnkRMVT::func_ov059_02161b1c(void) {}
ARM void ActorUnkRMVT::func_ov059_02161b5c(void) {}
ARM void ActorUnkRMVT::func_ov059_02161b60(void) {}
ARM void ActorUnkRMVT::func_ov059_02161b64(void) {}
ARM void ActorUnkRMVT::func_ov059_02161b78(void) {}
ARM void ActorUnkRMVT::func_ov059_02161b84(void) {}
ARM void ActorUnkRMVT::func_ov059_02161ba4(void) {}
