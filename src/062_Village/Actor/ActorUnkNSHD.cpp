//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNSHD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNSHD ActorTypeUnkNSHD::gInstance;

ARM ActorTypeUnkNSHD *ActorTypeUnkNSHD::GetInstance() {
    return &ActorTypeUnkNSHD::gInstance;
}

ARM Actor *ActorTypeUnkNSHD::Create() {
    return new(HeapIndex_2) ActorUnkNSHD();
}

ARM ActorTypeUnkNSHD::ActorTypeUnkNSHD() :
    ActorType(ActorId_NormalShield) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNSHD::ActorUnkNSHD() {}

ARM void ActorUnkNSHD::func_ov062_02158c48(void) {}
ARM void ActorUnkNSHD::func_ov062_02158cc8(void) {}
ARM void ActorUnkNSHD::func_ov062_02158df4(void) {}
ARM void ActorUnkNSHD::func_ov062_02158e38(void) {}
ARM void ActorUnkNSHD::func_ov062_02158e4c(void) {}
ARM void ActorUnkNSHD::func_ov062_02158f48(void) {}
ARM void ActorUnkNSHD::func_ov062_02158f68(void) {}
ARM void ActorUnkNSHD::func_ov062_02158f90(void) {}
