//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFBCH.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFBCH ActorTypeUnkFBCH::gInstance;

ARM ActorTypeUnkFBCH *ActorTypeUnkFBCH::GetInstance() {
    return &ActorTypeUnkFBCH::gInstance;
}

ARM Actor *ActorTypeUnkFBCH::Create() {
    return new(HeapIndex_2) ActorUnkFBCH();
}

ARM ActorTypeUnkFBCH::ActorTypeUnkFBCH() :
    ActorType(ActorId_FBCH) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFBCH::ActorUnkFBCH() {}

ARM void ActorUnkFBCH::func_ov062_0215878c(void) {}
ARM void ActorUnkFBCH::func_ov062_021587a0(void) {}
ARM void ActorUnkFBCH::func_ov062_02158890(void) {}
ARM void ActorUnkFBCH::func_ov062_021588a4(void) {}
ARM void ActorUnkFBCH::func_ov062_021589d8(void) {}
ARM void ActorUnkFBCH::func_ov062_021589fc(void) {}
ARM void ActorUnkFBCH::func_ov062_02158a00(void) {}
ARM void ActorUnkFBCH::func_ov062_02158a9c(void) {}
ARM void ActorUnkFBCH::func_ov062_02158ab0(void) {}
ARM void ActorUnkFBCH::func_ov062_02158b00(void) {}
ARM void ActorUnkFBCH::func_ov062_02158b10(void) {}
ARM void ActorUnkFBCH::func_ov062_02158b18(void) {}
ARM void ActorUnkFBCH::func_ov062_02158b34(void) {}
ARM void ActorUnkFBCH::func_ov062_02158b50(void) {}
ARM void ActorUnkFBCH::func_ov062_02158b88(void) {}
ARM void ActorUnkFBCH::func_ov062_02158bc8(void) {}
