//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWCH.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSWCH ActorTypeUnkSWCH::gInstance;

ARM ActorTypeUnkSWCH *ActorTypeUnkSWCH::GetInstance() {
    return &ActorTypeUnkSWCH::gInstance;
}

ARM Actor *ActorTypeUnkSWCH::Create() {
    return new(HeapIndex_2) ActorUnkSWCH();
}

ARM ActorTypeUnkSWCH::ActorTypeUnkSWCH() :
    ActorType(ActorId_SWCH) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSWCH::ActorUnkSWCH() {}

ARM void ActorUnkSWCH::func_ov031_020f7adc(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7b0c(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7b20(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7b88(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7b98(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7bac(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7bc8(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7bdc(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7c0c(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7c3c(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7d94(void) {}
