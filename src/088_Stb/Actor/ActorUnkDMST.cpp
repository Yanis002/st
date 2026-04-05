//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMST.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMST ActorTypeUnkDMST::gInstance;

ARM ActorTypeUnkDMST *ActorTypeUnkDMST::GetInstance() {
    return &ActorTypeUnkDMST::gInstance;
}

ARM Actor *ActorTypeUnkDMST::Create() {
    return new(HeapIndex_2) ActorUnkDMST();
}

ARM ActorTypeUnkDMST::ActorTypeUnkDMST() :
    ActorType(ActorId_DMST) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMST::ActorUnkDMST() {}

ARM void ActorUnkDMST::func_ov088_02171200(void) {}
ARM void ActorUnkDMST::func_ov088_02171274(void) {}
ARM void ActorUnkDMST::func_ov088_021712c8(void) {}
ARM void ActorUnkDMST::func_ov088_021712d8(void) {}
ARM void ActorUnkDMST::func_ov088_021712ec(void) {}
ARM void ActorUnkDMST::func_ov088_02171300(void) {}
ARM void ActorUnkDMST::func_ov088_02171350(void) {}
ARM void ActorUnkDMST::func_ov088_0217135c(void) {}
ARM void ActorUnkDMST::func_ov088_02171384(void) {}
ARM void ActorUnkDMST::func_ov088_021713b4(void) {}
