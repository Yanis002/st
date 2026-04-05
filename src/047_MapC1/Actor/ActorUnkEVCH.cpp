//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEVCH.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEVCH ActorTypeUnkEVCH::gInstance;

ARM ActorTypeUnkEVCH *ActorTypeUnkEVCH::GetInstance() {
    return &ActorTypeUnkEVCH::gInstance;
}

ARM Actor *ActorTypeUnkEVCH::Create() {
    return new(HeapIndex_2) ActorUnkEVCH();
}

ARM ActorTypeUnkEVCH::ActorTypeUnkEVCH() :
    ActorType(ActorId_EVCH) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEVCH::ActorUnkEVCH() {}

ARM void ActorUnkEVCH::func_ov047_02135204(void) {}
ARM void ActorUnkEVCH::func_ov047_02135224(void) {}
ARM void ActorUnkEVCH::func_ov047_0213522c(void) {}
ARM void ActorUnkEVCH::func_ov047_02135268(void) {}
ARM void ActorUnkEVCH::func_ov047_021352e4(void) {}
ARM void ActorUnkEVCH::func_ov047_021352f8(void) {}
ARM void ActorUnkEVCH::func_ov047_021353c4(void) {}
ARM void ActorUnkEVCH::func_ov047_021353d8(void) {}
ARM void ActorUnkEVCH::func_ov047_021353f4(void) {}
