//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWPCH.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWPCH ActorTypeUnkWPCH::gInstance;

ARM ActorTypeUnkWPCH *ActorTypeUnkWPCH::GetInstance() {
    return &ActorTypeUnkWPCH::gInstance;
}

ARM Actor *ActorTypeUnkWPCH::Create() {
    return new(HeapIndex_2) ActorUnkWPCH();
}

ARM ActorTypeUnkWPCH::ActorTypeUnkWPCH() :
    ActorType(ActorId_WPCH) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWPCH::ActorUnkWPCH() {}

ARM void ActorUnkWPCH::func_ov058_0214d4c0(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d500(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d508(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d540(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d558(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d570(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d684(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d694(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d6a8(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d6c4(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d6e8(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d6fc(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d70c(void) {}
