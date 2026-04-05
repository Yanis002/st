//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRCFO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRCFO ActorTypeUnkRCFO::gInstance;

ARM ActorTypeUnkRCFO *ActorTypeUnkRCFO::GetInstance() {
    return &ActorTypeUnkRCFO::gInstance;
}

ARM Actor *ActorTypeUnkRCFO::Create() {
    return new(HeapIndex_2) ActorUnkRCFO();
}

ARM ActorTypeUnkRCFO::ActorTypeUnkRCFO() :
    ActorType(ActorId_RCFO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRCFO::ActorUnkRCFO() {}

ARM void ActorUnkRCFO::func_ov033_021193a4(void) {}
ARM void ActorUnkRCFO::func_ov033_02119484(void) {}
ARM void ActorUnkRCFO::func_ov033_021194c0(void) {}
ARM void ActorUnkRCFO::func_ov033_02119504(void) {}
ARM void ActorUnkRCFO::func_ov033_02119540(void) {}
ARM void ActorUnkRCFO::func_ov033_0211961c(void) {}
ARM void ActorUnkRCFO::func_ov033_02119828(void) {}
ARM void ActorUnkRCFO::func_ov033_0211983c(void) {}
