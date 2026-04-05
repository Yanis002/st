//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTCAM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTCAM ActorTypeUnkTCAM::gInstance;

ARM ActorTypeUnkTCAM *ActorTypeUnkTCAM::GetInstance() {
    return &ActorTypeUnkTCAM::gInstance;
}

ARM Actor *ActorTypeUnkTCAM::Create() {
    return new(HeapIndex_2) ActorUnkTCAM();
}

ARM ActorTypeUnkTCAM::ActorTypeUnkTCAM() :
    ActorType(ActorId_TCAM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTCAM::ActorUnkTCAM() {}

ARM void ActorUnkTCAM::func_ov093_02177280(void) {}
ARM void ActorUnkTCAM::func_ov093_021772a0(void) {}
ARM void ActorUnkTCAM::func_ov093_021772bc(void) {}
ARM void ActorUnkTCAM::func_ov093_0217733c(void) {}
ARM void ActorUnkTCAM::func_ov093_02177474(void) {}
ARM void ActorUnkTCAM::func_ov093_0217747c(void) {}
ARM void ActorUnkTCAM::func_ov093_0217748c(void) {}
ARM void ActorUnkTCAM::func_ov093_02177528(void) {}
ARM void ActorUnkTCAM::func_ov093_0217753c(void) {}
ARM void ActorUnkTCAM::func_ov093_02177558(void) {}
