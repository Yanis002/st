//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSIRS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSIRS ActorTypeUnkSIRS::gInstance;

ARM ActorTypeUnkSIRS *ActorTypeUnkSIRS::GetInstance() {
    return &ActorTypeUnkSIRS::gInstance;
}

ARM Actor *ActorTypeUnkSIRS::Create() {
    return new(HeapIndex_2) ActorUnkSIRS();
}

ARM ActorTypeUnkSIRS::ActorTypeUnkSIRS() :
    ActorType(ActorId_SIRS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSIRS::ActorUnkSIRS() {}

ARM void ActorUnkSIRS::func_ov039_0211a01c(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a28c(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a3ac(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a404(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a460(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a510(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a564(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a630(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a774(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a7e0(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a800(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a828(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a8b8(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a950(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a970(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a9a0(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a9d8(void) {}
ARM void ActorUnkSIRS::func_ov039_0211a9ec(void) {}
ARM void ActorUnkSIRS::func_ov039_0211aa00(void) {}
ARM void ActorUnkSIRS::func_ov039_0211aa14(void) {}
ARM void ActorUnkSIRS::func_ov039_0211aa28(void) {}
ARM void ActorUnkSIRS::func_ov039_0211aa60(void) {}
ARM void ActorUnkSIRS::func_ov039_0211aa88(void) {}
ARM void ActorUnkSIRS::func_ov039_0211aab4(void) {}
ARM void ActorUnkSIRS::func_ov039_0211aad4(void) {}
