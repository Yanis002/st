//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkVLCR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkVLCR ActorTypeUnkVLCR::gInstance;

ARM ActorTypeUnkVLCR *ActorTypeUnkVLCR::GetInstance() {
    return &ActorTypeUnkVLCR::gInstance;
}

ARM Actor *ActorTypeUnkVLCR::Create() {
    return new(HeapIndex_2) ActorUnkVLCR();
}

ARM ActorTypeUnkVLCR::ActorTypeUnkVLCR() :
    ActorType(ActorId_VLCR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkVLCR::ActorUnkVLCR() {}

ARM void ActorUnkVLCR::func_ov094_02168a30(void) {}
ARM void ActorUnkVLCR::func_ov094_02168bb0(void) {}
ARM void ActorUnkVLCR::func_ov094_02168d64(void) {}
ARM void ActorUnkVLCR::func_ov094_02168d74(void) {}
ARM void ActorUnkVLCR::func_ov094_02168db0(void) {}
ARM void ActorUnkVLCR::func_ov094_02168e60(void) {}
ARM void ActorUnkVLCR::func_ov094_02169064(void) {}
ARM void ActorUnkVLCR::func_ov094_0216918c(void) {}
ARM void ActorUnkVLCR::func_ov094_021691d8(void) {}
ARM void ActorUnkVLCR::func_ov094_02169344(void) {}
ARM void ActorUnkVLCR::func_ov094_02169384(void) {}
ARM void ActorUnkVLCR::func_ov094_021693bc(void) {}
ARM void ActorUnkVLCR::func_ov094_021693c8(void) {}
ARM void ActorUnkVLCR::func_ov094_02169494(void) {}
ARM void ActorUnkVLCR::func_ov094_021694a0(void) {}
ARM void ActorUnkVLCR::func_ov094_021694e0(void) {}
ARM void ActorUnkVLCR::func_ov094_02169528(void) {}
