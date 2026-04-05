//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNAVI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNAVI ActorTypeUnkNAVI::gInstance;

ARM ActorTypeUnkNAVI *ActorTypeUnkNAVI::GetInstance() {
    return &ActorTypeUnkNAVI::gInstance;
}

ARM Actor *ActorTypeUnkNAVI::Create() {
    return new(HeapIndex_2) ActorUnkNAVI();
}

ARM ActorTypeUnkNAVI::ActorTypeUnkNAVI() :
    ActorType(ActorId_NAVI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNAVI::ActorUnkNAVI() {}

ARM void ActorUnkNAVI::func_ov052_02134e10(void) {}
ARM void ActorUnkNAVI::func_ov052_02134f8c(void) {}
ARM void ActorUnkNAVI::func_ov052_02134fa0(void) {}
ARM void ActorUnkNAVI::func_ov052_02134fb4(void) {}
ARM void ActorUnkNAVI::func_ov052_02135018(void) {}
ARM void ActorUnkNAVI::func_ov052_02135084(void) {}
ARM void ActorUnkNAVI::func_ov052_021350a4(void) {}
ARM void ActorUnkNAVI::func_ov052_02135100(void) {}
ARM void ActorUnkNAVI::func_ov052_021352b0(void) {}
ARM void ActorUnkNAVI::func_ov052_02135310(void) {}
ARM void ActorUnkNAVI::func_ov052_021353b0(void) {}
ARM void ActorUnkNAVI::func_ov052_021355f8(void) {}
ARM void ActorUnkNAVI::func_ov052_02135674(void) {}
ARM void ActorUnkNAVI::func_ov052_02135830(void) {}
ARM void ActorUnkNAVI::func_ov052_02135854(void) {}
ARM void ActorUnkNAVI::func_ov052_02135990(void) {}
ARM void ActorUnkNAVI::func_ov052_021359b0(void) {}
ARM void ActorUnkNAVI::func_ov052_021359c4(void) {}
ARM void ActorUnkNAVI::func_ov052_021359dc(void) {}
ARM void ActorUnkNAVI::func_ov052_02135a0c(void) {}
ARM void ActorUnkNAVI::func_ov052_02135a44(void) {}
ARM void ActorUnkNAVI::func_ov052_02135a5c(void) {}
ARM void ActorUnkNAVI::func_ov052_02135a7c(void) {}
ARM void ActorUnkNAVI::func_ov052_02135aac(void) {}
ARM void ActorUnkNAVI::func_ov052_02135ab8(void) {}
ARM void ActorUnkNAVI::func_ov052_02135ad8(void) {}
ARM void ActorUnkNAVI::func_ov052_02135af8(void) {}
ARM void ActorUnkNAVI::func_ov052_02135b0c(void) {}
ARM void ActorUnkNAVI::func_ov052_02135b28(void) {}
ARM void ActorUnkNAVI::func_ov052_02135b50(void) {}
