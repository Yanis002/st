//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSSFC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSSFC ActorTypeUnkSSFC::gInstance;

ARM ActorTypeUnkSSFC *ActorTypeUnkSSFC::GetInstance() {
    return &ActorTypeUnkSSFC::gInstance;
}

ARM Actor *ActorTypeUnkSSFC::Create() {
    return new(HeapIndex_2) ActorUnkSSFC();
}

ARM ActorTypeUnkSSFC::ActorTypeUnkSSFC() :
    ActorType(ActorId_SSFC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSSFC::ActorUnkSSFC() {}

ARM void ActorUnkSSFC::func_ov079_02152bac(void) {}
ARM void ActorUnkSSFC::func_ov079_02152be8(void) {}
ARM void ActorUnkSSFC::func_ov079_02152ccc(void) {}
ARM void ActorUnkSSFC::func_ov079_02152e00(void) {}
ARM void ActorUnkSSFC::func_ov079_02152e4c(void) {}
ARM void ActorUnkSSFC::func_ov079_02152ed4(void) {}
ARM void ActorUnkSSFC::func_ov079_02152f24(void) {}
ARM void ActorUnkSSFC::func_ov079_02152f38(void) {}
ARM void ActorUnkSSFC::func_ov079_02152f54(void) {}
