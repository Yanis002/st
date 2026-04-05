//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMEQ.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMEQ ActorTypeUnkDMEQ::gInstance;

ARM ActorTypeUnkDMEQ *ActorTypeUnkDMEQ::GetInstance() {
    return &ActorTypeUnkDMEQ::gInstance;
}

ARM Actor *ActorTypeUnkDMEQ::Create() {
    return new(HeapIndex_2) ActorUnkDMEQ();
}

ARM ActorTypeUnkDMEQ::ActorTypeUnkDMEQ() :
    ActorType(ActorId_DMEQ) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMEQ::ActorUnkDMEQ() {}

ARM void ActorUnkDMEQ::func_ov088_0216e2b8(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e2ec(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e300(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e31c(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e718(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e738(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e824(void) {}
