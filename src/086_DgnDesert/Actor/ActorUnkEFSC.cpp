//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFSC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFSC ActorTypeUnkEFSC::gInstance;

ARM ActorTypeUnkEFSC *ActorTypeUnkEFSC::GetInstance() {
    return &ActorTypeUnkEFSC::gInstance;
}

ARM Actor *ActorTypeUnkEFSC::Create() {
    return new(HeapIndex_2) ActorUnkEFSC();
}

ARM ActorTypeUnkEFSC::ActorTypeUnkEFSC() :
    ActorType(ActorId_EFSC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFSC::ActorUnkEFSC() {}

ARM void ActorUnkEFSC::func_ov086_0215b85c(void) {}
ARM void ActorUnkEFSC::func_ov086_0215b870(void) {}
ARM void ActorUnkEFSC::func_ov086_0215b96c(void) {}
ARM void ActorUnkEFSC::func_ov086_0215b9d4(void) {}
ARM void ActorUnkEFSC::func_ov086_0215ba40(void) {}
ARM void ActorUnkEFSC::func_ov086_0215ba54(void) {}
ARM void ActorUnkEFSC::func_ov086_0215baac(void) {}
ARM void ActorUnkEFSC::func_ov086_0215badc(void) {}
ARM void ActorUnkEFSC::func_ov086_0215bb04(void) {}
ARM void ActorUnkEFSC::func_ov086_0215bb20(void) {}
