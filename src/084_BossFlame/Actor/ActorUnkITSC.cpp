//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkITSC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkITSC ActorTypeUnkITSC::gInstance;

ARM ActorTypeUnkITSC *ActorTypeUnkITSC::GetInstance() {
    return &ActorTypeUnkITSC::gInstance;
}

ARM Actor *ActorTypeUnkITSC::Create() {
    return new(HeapIndex_2) ActorUnkITSC();
}

ARM ActorTypeUnkITSC::ActorTypeUnkITSC() :
    ActorType(ActorId_ITSC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkITSC::ActorUnkITSC() {}

ARM void ActorUnkITSC::func_ov084_02159d14(void) {}
ARM void ActorUnkITSC::func_ov084_02159d80(void) {}
ARM void ActorUnkITSC::func_ov084_02159da8(void) {}
ARM void ActorUnkITSC::func_ov084_02159dd8(void) {}
ARM void ActorUnkITSC::func_ov084_02159dfc(void) {}
ARM void ActorUnkITSC::func_ov084_0215a0dc(void) {}
ARM void ActorUnkITSC::func_ov084_0215a118(void) {}
ARM void ActorUnkITSC::func_ov084_0215a280(void) {}
ARM void ActorUnkITSC::func_ov084_0215a394(void) {}
