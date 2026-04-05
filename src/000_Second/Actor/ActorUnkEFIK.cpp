//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFIK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFIK ActorTypeUnkEFIK::gInstance;

ARM ActorTypeUnkEFIK *ActorTypeUnkEFIK::GetInstance() {
    return &ActorTypeUnkEFIK::gInstance;
}

ARM Actor *ActorTypeUnkEFIK::Create() {
    return new(HeapIndex_2) ActorUnkEFIK();
}

ARM ActorTypeUnkEFIK::ActorTypeUnkEFIK() :
    ActorType(ActorId_EFIK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFIK::ActorUnkEFIK() {}

ARM void ActorUnkEFIK::func_ov000_0209c0cc(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c100(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c140(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c2d0(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c2e4(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c2ec(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c30c(void) {}
