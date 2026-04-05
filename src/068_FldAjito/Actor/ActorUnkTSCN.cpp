//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTSCN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTSCN ActorTypeUnkTSCN::gInstance;

ARM ActorTypeUnkTSCN *ActorTypeUnkTSCN::GetInstance() {
    return &ActorTypeUnkTSCN::gInstance;
}

ARM Actor *ActorTypeUnkTSCN::Create() {
    return new(HeapIndex_2) ActorUnkTSCN();
}

ARM ActorTypeUnkTSCN::ActorTypeUnkTSCN() :
    ActorType(ActorId_TSCN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTSCN::ActorUnkTSCN() {}

ARM void ActorUnkTSCN::func_ov068_0215a89c(void) {}
ARM void ActorUnkTSCN::func_ov068_0215a8c4(void) {}
ARM void ActorUnkTSCN::func_ov068_0215a8e0(void) {}
ARM void ActorUnkTSCN::func_ov068_0215a9d4(void) {}
ARM void ActorUnkTSCN::func_ov068_0215a9e8(void) {}
ARM void ActorUnkTSCN::func_ov068_0215aa04(void) {}
