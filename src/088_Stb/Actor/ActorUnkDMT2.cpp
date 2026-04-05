//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMT2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMT2 ActorTypeUnkDMT2::gInstance;

ARM ActorTypeUnkDMT2 *ActorTypeUnkDMT2::GetInstance() {
    return &ActorTypeUnkDMT2::gInstance;
}

ARM Actor *ActorTypeUnkDMT2::Create() {
    return new(HeapIndex_2) ActorUnkDMT2();
}

ARM ActorTypeUnkDMT2::ActorTypeUnkDMT2() :
    ActorType(ActorId_DMT2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMT2::ActorUnkDMT2() {}

ARM void ActorUnkDMT2::func_ov088_0216cd30(void) {}
ARM void ActorUnkDMT2::func_ov088_0216cd80(void) {}
ARM void ActorUnkDMT2::func_ov088_0216cd90(void) {}
ARM void ActorUnkDMT2::func_ov088_0216cea4(void) {}
ARM void ActorUnkDMT2::func_ov088_0216cef4(void) {}
ARM void ActorUnkDMT2::func_ov088_0216cf4c(void) {}
ARM void ActorUnkDMT2::func_ov088_0216cf50(void) {}
ARM void ActorUnkDMT2::func_ov088_0216d290(void) {}
ARM void ActorUnkDMT2::func_ov088_0216d2a4(void) {}
ARM void ActorUnkDMT2::func_ov088_0216d300(void) {}
ARM void ActorUnkDMT2::func_ov088_0216d308(void) {}
ARM void ActorUnkDMT2::func_ov088_0216d310(void) {}
