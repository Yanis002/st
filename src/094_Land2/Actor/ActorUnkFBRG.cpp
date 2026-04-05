//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFBRG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFBRG ActorTypeUnkFBRG::gInstance;

ARM ActorTypeUnkFBRG *ActorTypeUnkFBRG::GetInstance() {
    return &ActorTypeUnkFBRG::gInstance;
}

ARM Actor *ActorTypeUnkFBRG::Create() {
    return new(HeapIndex_2) ActorUnkFBRG();
}

ARM ActorTypeUnkFBRG::ActorTypeUnkFBRG() :
    ActorType(ActorId_FBRG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFBRG::ActorUnkFBRG() {}

ARM void ActorUnkFBRG::func_ov094_0216ded4(void) {}
ARM void ActorUnkFBRG::func_ov094_0216df94(void) {}
ARM void ActorUnkFBRG::func_ov094_0216dfa8(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e290(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e2a4(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e2ac(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e2d4(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e2f4(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e300(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e31c(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e34c(void) {}
ARM void ActorUnkFBRG::func_ov094_0216e384(void) {}
