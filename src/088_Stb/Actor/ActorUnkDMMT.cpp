//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMMT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMMT ActorTypeUnkDMMT::gInstance;

ARM ActorTypeUnkDMMT *ActorTypeUnkDMMT::GetInstance() {
    return &ActorTypeUnkDMMT::gInstance;
}

ARM Actor *ActorTypeUnkDMMT::Create() {
    return new(HeapIndex_2) ActorUnkDMMT();
}

ARM ActorTypeUnkDMMT::ActorTypeUnkDMMT() :
    ActorType(ActorId_DMMT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMMT::ActorUnkDMMT() {}

ARM void ActorUnkDMMT::func_ov088_02170934(void) {}
ARM void ActorUnkDMMT::func_ov088_021709c4(void) {}
ARM void ActorUnkDMMT::func_ov088_021709d8(void) {}
ARM void ActorUnkDMMT::func_ov088_02170b2c(void) {}
ARM void ActorUnkDMMT::func_ov088_02170b68(void) {}
ARM void ActorUnkDMMT::func_ov088_02170b70(void) {}
ARM void ActorUnkDMMT::func_ov088_02170b80(void) {}
ARM void ActorUnkDMMT::func_ov088_02170b94(void) {}
ARM void ActorUnkDMMT::func_ov088_02170ba8(void) {}
ARM void ActorUnkDMMT::func_ov088_02170bf8(void) {}
ARM void ActorUnkDMMT::func_ov088_02170c18(void) {}
ARM void ActorUnkDMMT::func_ov088_02170c34(void) {}
ARM void ActorUnkDMMT::func_ov088_02170c5c(void) {}
ARM void ActorUnkDMMT::func_ov088_02170c8c(void) {}
ARM void ActorUnkDMMT::func_ov088_02170cb4(void) {}
ARM void ActorUnkDMMT::func_ov088_02170cd4(void) {}
ARM void ActorUnkDMMT::func_ov088_02170ce8(void) {}
ARM void ActorUnkDMMT::func_ov088_02170d14(void) {}
ARM void ActorUnkDMMT::func_ov088_02170d34(void) {}
