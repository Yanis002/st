//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT4.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMT4 ActorTypeUnkRMT4::gInstance;

ARM ActorTypeUnkRMT4 *ActorTypeUnkRMT4::GetInstance() {
    return &ActorTypeUnkRMT4::gInstance;
}

ARM Actor *ActorTypeUnkRMT4::Create() {
    return new(HeapIndex_2) ActorUnkRMT4();
}

ARM ActorTypeUnkRMT4::ActorTypeUnkRMT4() :
    ActorType(ActorId_RMT4) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMT4::ActorUnkRMT4() {}

ARM void ActorUnkRMT4::func_ov061_021584d4(void) {}
ARM void ActorUnkRMT4::func_ov061_021584f4(void) {}
ARM void ActorUnkRMT4::func_ov061_02158544(void) {}
ARM void ActorUnkRMT4::func_ov061_02158564(void) {}
ARM void ActorUnkRMT4::func_ov061_0215858c(void) {}
