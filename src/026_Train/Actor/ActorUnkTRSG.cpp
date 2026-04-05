//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRSG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTRSG ActorTypeUnkTRSG::gInstance;

ARM ActorTypeUnkTRSG *ActorTypeUnkTRSG::GetInstance() {
    return &ActorTypeUnkTRSG::gInstance;
}

ARM Actor *ActorTypeUnkTRSG::Create() {
    return new(HeapIndex_2) ActorUnkTRSG();
}

ARM ActorTypeUnkTRSG::ActorTypeUnkTRSG() :
    ActorType(ActorId_TRSG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTRSG::ActorUnkTRSG() {}

ARM void ActorUnkTRSG::func_ov026_02123674(void) {}
ARM void ActorUnkTRSG::func_ov026_0212369c(void) {}
ARM void ActorUnkTRSG::func_ov026_02123700(void) {}
ARM void ActorUnkTRSG::func_ov026_02123730(void) {}
ARM void ActorUnkTRSG::func_ov026_0212386c(void) {}
ARM void ActorUnkTRSG::func_ov026_02123a60(void) {}
ARM void ActorUnkTRSG::func_ov026_02123a74(void) {}
ARM void ActorUnkTRSG::func_ov026_02123a90(void) {}
