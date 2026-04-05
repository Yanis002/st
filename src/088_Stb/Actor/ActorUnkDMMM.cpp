//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMMM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMMM ActorTypeUnkDMMM::gInstance;

ARM ActorTypeUnkDMMM *ActorTypeUnkDMMM::GetInstance() {
    return &ActorTypeUnkDMMM::gInstance;
}

ARM Actor *ActorTypeUnkDMMM::Create() {
    return new(HeapIndex_2) ActorUnkDMMM();
}

ARM ActorTypeUnkDMMM::ActorTypeUnkDMMM() :
    ActorType(ActorId_DMMM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMMM::ActorUnkDMMM() {}

ARM void ActorUnkDMMM::func_ov088_02171dc8(void) {}
ARM void ActorUnkDMMM::func_ov088_02171e3c(void) {}
ARM void ActorUnkDMMM::func_ov088_02171e90(void) {}
ARM void ActorUnkDMMM::func_ov088_02171ea0(void) {}
ARM void ActorUnkDMMM::func_ov088_02171eb4(void) {}
ARM void ActorUnkDMMM::func_ov088_02171ec8(void) {}
ARM void ActorUnkDMMM::func_ov088_02171f18(void) {}
ARM void ActorUnkDMMM::func_ov088_02171f24(void) {}
ARM void ActorUnkDMMM::func_ov088_02171f4c(void) {}
ARM void ActorUnkDMMM::func_ov088_02171f7c(void) {}
