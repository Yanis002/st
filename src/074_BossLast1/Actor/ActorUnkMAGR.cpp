//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMAGR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMAGR ActorTypeUnkMAGR::gInstance;

ARM ActorTypeUnkMAGR *ActorTypeUnkMAGR::GetInstance() {
    return &ActorTypeUnkMAGR::gInstance;
}

ARM Actor *ActorTypeUnkMAGR::Create() {
    return new(HeapIndex_2) ActorUnkMAGR();
}

ARM ActorTypeUnkMAGR::ActorTypeUnkMAGR() :
    ActorType(ActorId_MAGR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMAGR::ActorUnkMAGR() {}

ARM void ActorUnkMAGR::func_ov074_02151b6c(void) {}
ARM void ActorUnkMAGR::func_ov074_02151b80(void) {}
ARM void ActorUnkMAGR::func_ov074_02151dc4(void) {}
ARM void ActorUnkMAGR::func_ov074_0215200c(void) {}
ARM void ActorUnkMAGR::func_ov074_02152258(void) {}
ARM void ActorUnkMAGR::func_ov074_0215234c(void) {}
ARM void ActorUnkMAGR::func_ov074_02152360(void) {}
ARM void ActorUnkMAGR::func_ov074_0215237c(void) {}
ARM void ActorUnkMAGR::func_ov074_02152540(void) {}
ARM void ActorUnkMAGR::func_ov074_021525dc(void) {}
ARM void ActorUnkMAGR::func_ov074_021525f0(void) {}
ARM void ActorUnkMAGR::func_ov074_0215260c(void) {}
ARM void ActorUnkMAGR::func_ov074_02152668(void) {}
ARM void ActorUnkMAGR::func_ov074_02152780(void) {}
ARM void ActorUnkMAGR::func_ov074_021527c8(void) {}
ARM void ActorUnkMAGR::func_ov074_02152818(void) {}
ARM void ActorUnkMAGR::func_ov074_021529d0(void) {}
ARM void ActorUnkMAGR::func_ov074_02152a90(void) {}
ARM void ActorUnkMAGR::func_ov074_02152ae0(void) {}
ARM void ActorUnkMAGR::func_ov074_02152b74(void) {}
ARM void ActorUnkMAGR::func_ov074_02152c3c(void) {}
ARM void ActorUnkMAGR::func_ov074_02152c74(void) {}
ARM void ActorUnkMAGR::func_ov074_02152c88(void) {}
ARM void ActorUnkMAGR::func_ov074_02152df0(void) {}
ARM void ActorUnkMAGR::func_ov074_02152e38(void) {}
