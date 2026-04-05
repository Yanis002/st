//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkQKTG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkQKTG ActorTypeUnkQKTG::gInstance;

ARM ActorTypeUnkQKTG *ActorTypeUnkQKTG::GetInstance() {
    return &ActorTypeUnkQKTG::gInstance;
}

ARM Actor *ActorTypeUnkQKTG::Create() {
    return new(HeapIndex_2) ActorUnkQKTG();
}

ARM ActorTypeUnkQKTG::ActorTypeUnkQKTG() :
    ActorType(ActorId_QKTG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkQKTG::ActorUnkQKTG() {}

ARM void ActorUnkQKTG::func_ov086_0215dcfc(void) {}
ARM void ActorUnkQKTG::func_ov086_0215dd28(void) {}
ARM void ActorUnkQKTG::func_ov086_0215dd68(void) {}
ARM void ActorUnkQKTG::func_ov086_0215de08(void) {}
ARM void ActorUnkQKTG::func_ov086_0215de1c(void) {}
ARM void ActorUnkQKTG::func_ov086_0215def4(void) {}
ARM void ActorUnkQKTG::func_ov086_0215df08(void) {}
