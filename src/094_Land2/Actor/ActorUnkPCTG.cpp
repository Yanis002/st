//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPCTG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkPCTG ActorTypeUnkPCTG::gInstance;

ARM ActorTypeUnkPCTG *ActorTypeUnkPCTG::GetInstance() {
    return &ActorTypeUnkPCTG::gInstance;
}

ARM Actor *ActorTypeUnkPCTG::Create() {
    return new(HeapIndex_2) ActorUnkPCTG();
}

ARM ActorTypeUnkPCTG::ActorTypeUnkPCTG() :
    ActorType(ActorId_PCTG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPCTG::ActorUnkPCTG() {}

ARM void ActorUnkPCTG::func_ov094_0216b384(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b43c(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b45c(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b484(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b69c(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b6dc(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b714(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b718(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b858(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b890(void) {}
ARM void ActorUnkPCTG::func_ov094_0216be38(void) {}
ARM void ActorUnkPCTG::func_ov094_0216bf58(void) {}
ARM void ActorUnkPCTG::func_ov094_0216bfa4(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c1c8(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c34c(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c36c(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c398(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c3ac(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c3e4(void) {}
