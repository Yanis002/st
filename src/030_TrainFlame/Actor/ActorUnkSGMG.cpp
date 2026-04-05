//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSGMG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSGMG ActorTypeUnkSGMG::gInstance;

ARM ActorTypeUnkSGMG *ActorTypeUnkSGMG::GetInstance() {
    return &ActorTypeUnkSGMG::gInstance;
}

ARM Actor *ActorTypeUnkSGMG::Create() {
    return new(HeapIndex_2) ActorUnkSGMG();
}

ARM ActorTypeUnkSGMG::ActorTypeUnkSGMG() :
    ActorType(ActorId_SGMG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSGMG::ActorUnkSGMG() {}

ARM void ActorUnkSGMG::func_ov030_0214d828(void) {}
ARM void ActorUnkSGMG::func_ov030_0214d890(void) {}
ARM void ActorUnkSGMG::func_ov030_0214d8ac(void) {}
ARM void ActorUnkSGMG::func_ov030_0214d8d0(void) {}
ARM void ActorUnkSGMG::func_ov030_0214d8e0(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dbb4(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dc30(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dc80(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dc90(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dca4(void) {}
