//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSFR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDSFR ActorTypeUnkDSFR::gInstance;

ARM ActorTypeUnkDSFR *ActorTypeUnkDSFR::GetInstance() {
    return &ActorTypeUnkDSFR::gInstance;
}

ARM Actor *ActorTypeUnkDSFR::Create() {
    return new(HeapIndex_2) ActorUnkDSFR();
}

ARM ActorTypeUnkDSFR::ActorTypeUnkDSFR() :
    ActorType(ActorId_DSFR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDSFR::ActorUnkDSFR() {}

ARM void ActorUnkDSFR::func_ov077_02158bd0(void) {}
ARM void ActorUnkDSFR::func_ov077_02158bf0(void) {}
ARM void ActorUnkDSFR::func_ov077_02158c40(void) {}
ARM void ActorUnkDSFR::func_ov077_02158c60(void) {}
ARM void ActorUnkDSFR::func_ov077_02158c88(void) {}
