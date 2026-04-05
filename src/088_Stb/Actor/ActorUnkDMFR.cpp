//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMFR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMFR ActorTypeUnkDMFR::gInstance;

ARM ActorTypeUnkDMFR *ActorTypeUnkDMFR::GetInstance() {
    return &ActorTypeUnkDMFR::gInstance;
}

ARM Actor *ActorTypeUnkDMFR::Create() {
    return new(HeapIndex_2) ActorUnkDMFR();
}

ARM ActorTypeUnkDMFR::ActorTypeUnkDMFR() :
    ActorType(ActorId_DMFR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMFR::ActorUnkDMFR() {}

ARM void ActorUnkDMFR::func_ov088_0217061c(void) {}
ARM void ActorUnkDMFR::func_ov088_02170690(void) {}
ARM void ActorUnkDMFR::func_ov088_021706a4(void) {}
ARM void ActorUnkDMFR::func_ov088_021706f8(void) {}
ARM void ActorUnkDMFR::func_ov088_02170708(void) {}
ARM void ActorUnkDMFR::func_ov088_0217071c(void) {}
ARM void ActorUnkDMFR::func_ov088_02170730(void) {}
ARM void ActorUnkDMFR::func_ov088_02170780(void) {}
ARM void ActorUnkDMFR::func_ov088_021707a4(void) {}
ARM void ActorUnkDMFR::func_ov088_021707b4(void) {}
ARM void ActorUnkDMFR::func_ov088_021707bc(void) {}
ARM void ActorUnkDMFR::func_ov088_021707d8(void) {}
ARM void ActorUnkDMFR::func_ov088_02170800(void) {}
ARM void ActorUnkDMFR::func_ov088_02170830(void) {}
ARM void ActorUnkDMFR::func_ov088_02170844(void) {}
ARM void ActorUnkDMFR::func_ov088_02170870(void) {}
ARM void ActorUnkDMFR::func_ov088_02170890(void) {}
