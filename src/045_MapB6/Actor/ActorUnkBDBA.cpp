//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBDBA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBDBA ActorTypeUnkBDBA::gInstance;

ARM ActorTypeUnkBDBA *ActorTypeUnkBDBA::GetInstance() {
    return &ActorTypeUnkBDBA::gInstance;
}

ARM Actor *ActorTypeUnkBDBA::Create() {
    return new(HeapIndex_2) ActorUnkBDBA();
}

ARM ActorTypeUnkBDBA::ActorTypeUnkBDBA() :
    ActorType(ActorId_BDBA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBDBA::ActorUnkBDBA() {}

ARM void ActorUnkBDBA::func_ov045_02127940(void) {}
ARM void ActorUnkBDBA::func_ov045_02127a70(void) {}
ARM void ActorUnkBDBA::func_ov045_02127a84(void) {}
ARM void ActorUnkBDBA::func_ov045_02127aac(void) {}
ARM void ActorUnkBDBA::func_ov045_02127adc(void) {}
ARM void ActorUnkBDBA::func_ov045_02127b00(void) {}
ARM void ActorUnkBDBA::func_ov045_02127b3c(void) {}
ARM void ActorUnkBDBA::func_ov045_02127bbc(void) {}
ARM void ActorUnkBDBA::func_ov045_02127f04(void) {}
ARM void ActorUnkBDBA::func_ov045_02128078(void) {}
ARM void ActorUnkBDBA::func_ov045_02128134(void) {}
ARM void ActorUnkBDBA::func_ov045_021281d8(void) {}
ARM void ActorUnkBDBA::func_ov045_021281ec(void) {}
ARM void ActorUnkBDBA::func_ov045_02128254(void) {}
ARM void ActorUnkBDBA::func_ov045_02128264(void) {}
ARM void ActorUnkBDBA::func_ov045_021282d0(void) {}
ARM void ActorUnkBDBA::func_ov045_021282ec(void) {}
