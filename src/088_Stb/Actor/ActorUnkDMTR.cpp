//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMTR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMTR ActorTypeUnkDMTR::gInstance;

ARM ActorTypeUnkDMTR *ActorTypeUnkDMTR::GetInstance() {
    return &ActorTypeUnkDMTR::gInstance;
}

ARM Actor *ActorTypeUnkDMTR::Create() {
    return new(HeapIndex_2) ActorUnkDMTR();
}

ARM ActorTypeUnkDMTR::ActorTypeUnkDMTR() :
    ActorType(ActorId_DMTR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMTR::ActorUnkDMTR() {}

ARM void ActorUnkDMTR::func_ov088_0216c720(void) {}
ARM void ActorUnkDMTR::func_ov088_0216c74c(void) {}
ARM void ActorUnkDMTR::func_ov088_0216c818(void) {}
ARM void ActorUnkDMTR::func_ov088_0216cb08(void) {}
ARM void ActorUnkDMTR::func_ov088_0216cb78(void) {}
ARM void ActorUnkDMTR::func_ov088_0216cbf0(void) {}
ARM void ActorUnkDMTR::func_ov088_0216ccc0(void) {}
