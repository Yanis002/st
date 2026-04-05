//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDGPC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDGPC ActorTypeUnkDGPC::gInstance;

ARM ActorTypeUnkDGPC *ActorTypeUnkDGPC::GetInstance() {
    return &ActorTypeUnkDGPC::gInstance;
}

ARM Actor *ActorTypeUnkDGPC::Create() {
    return new(HeapIndex_2) ActorUnkDGPC();
}

ARM ActorTypeUnkDGPC::ActorTypeUnkDGPC() :
    ActorType(ActorId_DGPC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDGPC::ActorUnkDGPC() {}

ARM void ActorUnkDGPC::func_ov073_02163280(void) {}
ARM void ActorUnkDGPC::func_ov073_021632cc(void) {}
ARM void ActorUnkDGPC::func_ov073_0216330c(void) {}
ARM void ActorUnkDGPC::func_ov073_0216333c(void) {}
ARM void ActorUnkDGPC::func_ov073_02163350(void) {}
ARM void ActorUnkDGPC::func_ov073_02163368(void) {}
ARM void ActorUnkDGPC::func_ov073_02163388(void) {}
ARM void ActorUnkDGPC::func_ov073_021633c0(void) {}
ARM void ActorUnkDGPC::func_ov073_021633c8(void) {}
ARM void ActorUnkDGPC::func_ov073_02163430(void) {}
ARM void ActorUnkDGPC::func_ov073_02163458(void) {}
