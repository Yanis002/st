//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3LV.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkE3LV ActorTypeUnkE3LV::gInstance;

ARM ActorTypeUnkE3LV *ActorTypeUnkE3LV::GetInstance() {
    return &ActorTypeUnkE3LV::gInstance;
}

ARM Actor *ActorTypeUnkE3LV::Create() {
    return new(HeapIndex_2) ActorUnkE3LV();
}

ARM ActorTypeUnkE3LV::ActorTypeUnkE3LV() :
    ActorType(ActorId_E3LV) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkE3LV::ActorUnkE3LV() {}

ARM void ActorUnkE3LV::func_ov099_02181c1c(void) {}
ARM void ActorUnkE3LV::func_ov099_02181d2c(void) {}
ARM void ActorUnkE3LV::func_ov099_02181dd8(void) {}
ARM void ActorUnkE3LV::func_ov099_02181e04(void) {}
ARM void ActorUnkE3LV::func_ov099_02181e18(void) {}
ARM void ActorUnkE3LV::func_ov099_02181e38(void) {}
ARM void ActorUnkE3LV::func_ov099_02181e68(void) {}
