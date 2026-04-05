//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkIBSP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkIBSP ActorTypeUnkIBSP::gInstance;

ARM ActorTypeUnkIBSP *ActorTypeUnkIBSP::GetInstance() {
    return &ActorTypeUnkIBSP::gInstance;
}

ARM Actor *ActorTypeUnkIBSP::Create() {
    return new(HeapIndex_2) ActorUnkIBSP();
}

ARM ActorTypeUnkIBSP::ActorTypeUnkIBSP() :
    ActorType(ActorId_IBSP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkIBSP::ActorUnkIBSP() {}

ARM void ActorUnkIBSP::func_ov044_0212b788(void) {}
ARM void ActorUnkIBSP::func_ov044_0212b7e4(void) {}
ARM void ActorUnkIBSP::func_ov044_0212b814(void) {}
ARM void ActorUnkIBSP::func_ov044_0212b84c(void) {}
ARM void ActorUnkIBSP::func_ov044_0212b8a0(void) {}
ARM void ActorUnkIBSP::func_ov044_0212b918(void) {}
ARM void ActorUnkIBSP::func_ov044_0212bb74(void) {}
ARM void ActorUnkIBSP::func_ov044_0212bbbc(void) {}
ARM void ActorUnkIBSP::func_ov044_0212bbd0(void) {}
ARM void ActorUnkIBSP::func_ov044_0212bc18(void) {}
ARM void ActorUnkIBSP::func_ov044_0212bcbc(void) {}
ARM void ActorUnkIBSP::func_ov044_0212bd3c(void) {}
