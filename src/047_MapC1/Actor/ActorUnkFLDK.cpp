//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLDK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFLDK ActorTypeUnkFLDK::gInstance;

ARM ActorTypeUnkFLDK *ActorTypeUnkFLDK::GetInstance() {
    return &ActorTypeUnkFLDK::gInstance;
}

ARM Actor *ActorTypeUnkFLDK::Create() {
    return new(HeapIndex_2) ActorUnkFLDK();
}

ARM ActorTypeUnkFLDK::ActorTypeUnkFLDK() :
    ActorType(ActorId_FLDK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFLDK::ActorUnkFLDK() {}

ARM void ActorUnkFLDK::func_ov047_02135460(void) {}
ARM void ActorUnkFLDK::func_ov047_021354a4(void) {}
ARM void ActorUnkFLDK::func_ov047_02135570(void) {}
ARM void ActorUnkFLDK::func_ov047_021355f4(void) {}
ARM void ActorUnkFLDK::func_ov047_02135614(void) {}
ARM void ActorUnkFLDK::func_ov047_0213563c(void) {}
ARM void ActorUnkFLDK::func_ov047_02135650(void) {}
ARM void ActorUnkFLDK::func_ov047_021356b0(void) {}
