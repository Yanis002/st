//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWDS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSWDS ActorTypeUnkSWDS::gInstance;

ARM ActorTypeUnkSWDS *ActorTypeUnkSWDS::GetInstance() {
    return &ActorTypeUnkSWDS::gInstance;
}

ARM Actor *ActorTypeUnkSWDS::Create() {
    return new(HeapIndex_2) ActorUnkSWDS();
}

ARM ActorTypeUnkSWDS::ActorTypeUnkSWDS() :
    ActorType(ActorId_SWDS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSWDS::ActorUnkSWDS() {}

ARM void ActorUnkSWDS::func_ov070_02143a20(void) {}
ARM void ActorUnkSWDS::func_ov070_02143a50(void) {}
ARM void ActorUnkSWDS::func_ov070_02143adc(void) {}
ARM void ActorUnkSWDS::func_ov070_02143bd4(void) {}
ARM void ActorUnkSWDS::func_ov070_02143be8(void) {}
ARM void ActorUnkSWDS::func_ov070_02143c48(void) {}
ARM void ActorUnkSWDS::func_ov070_02143c5c(void) {}
ARM void ActorUnkSWDS::func_ov070_02143c78(void) {}
