//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSEFS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSEFS ActorTypeUnkSEFS::gInstance;

ARM ActorTypeUnkSEFS *ActorTypeUnkSEFS::GetInstance() {
    return &ActorTypeUnkSEFS::gInstance;
}

ARM Actor *ActorTypeUnkSEFS::Create() {
    return new(HeapIndex_2) ActorUnkSEFS();
}

ARM ActorTypeUnkSEFS::ActorTypeUnkSEFS() :
    ActorType(ActorId_SEFS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSEFS::ActorUnkSEFS() {}

ARM void ActorUnkSEFS::func_ov091_0216c0a8(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c230(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c2c8(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c368(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c3b4(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c50c(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c634(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c734(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c798(void) {}
ARM void ActorUnkSEFS::func_ov091_0216c7d4(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d090(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d1a8(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d570(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d654(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d868(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d8ac(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d8e4(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d8f0(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d9b0(void) {}
ARM void ActorUnkSEFS::func_ov091_0216d9b4(void) {}
