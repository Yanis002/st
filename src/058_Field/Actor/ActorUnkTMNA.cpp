//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTMNA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTMNA ActorTypeUnkTMNA::gInstance;

ARM ActorTypeUnkTMNA *ActorTypeUnkTMNA::GetInstance() {
    return &ActorTypeUnkTMNA::gInstance;
}

ARM Actor *ActorTypeUnkTMNA::Create() {
    return new(HeapIndex_2) ActorUnkTMNA();
}

ARM ActorTypeUnkTMNA::ActorTypeUnkTMNA() :
    ActorType(ActorId_TMNA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTMNA::ActorUnkTMNA() {}

ARM void ActorUnkTMNA::func_ov058_0214d8ac(void) {}
ARM void ActorUnkTMNA::func_ov058_0214d9ec(void) {}
ARM void ActorUnkTMNA::func_ov058_0214daa8(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dab4(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dad4(void) {}
ARM void ActorUnkTMNA::func_ov058_0214db68(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dbc8(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dbe4(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dc30(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dc58(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dc88(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dca8(void) {}
ARM void ActorUnkTMNA::func_ov058_0214dcbc(void) {}
