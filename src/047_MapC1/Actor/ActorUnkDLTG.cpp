//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDLTG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDLTG ActorTypeUnkDLTG::gInstance;

ARM ActorTypeUnkDLTG *ActorTypeUnkDLTG::GetInstance() {
    return &ActorTypeUnkDLTG::gInstance;
}

ARM Actor *ActorTypeUnkDLTG::Create() {
    return new(HeapIndex_2) ActorUnkDLTG();
}

ARM ActorTypeUnkDLTG::ActorTypeUnkDLTG() :
    ActorType(ActorId_DLTG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDLTG::ActorUnkDLTG() {}

ARM void ActorUnkDLTG::func_ov047_02135738(void) {}
ARM void ActorUnkDLTG::func_ov047_02135764(void) {}
ARM void ActorUnkDLTG::func_ov047_021357ac(void) {}
ARM void ActorUnkDLTG::func_ov047_021357fc(void) {}
ARM void ActorUnkDLTG::func_ov047_02135878(void) {}
ARM void ActorUnkDLTG::func_ov047_021358a4(void) {}
