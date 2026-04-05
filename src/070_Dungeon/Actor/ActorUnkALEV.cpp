//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkALEV.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkALEV ActorTypeUnkALEV::gInstance;

ARM ActorTypeUnkALEV *ActorTypeUnkALEV::GetInstance() {
    return &ActorTypeUnkALEV::gInstance;
}

ARM Actor *ActorTypeUnkALEV::Create() {
    return new(HeapIndex_2) ActorUnkALEV();
}

ARM ActorTypeUnkALEV::ActorTypeUnkALEV() :
    ActorType(ActorId_ALEV) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkALEV::ActorUnkALEV() {}

ARM void ActorUnkALEV::func_ov070_0213f800(void) {}
ARM void ActorUnkALEV::func_ov070_0213f828(void) {}
ARM void ActorUnkALEV::func_ov070_0213f848(void) {}
ARM void ActorUnkALEV::func_ov070_0213f858(void) {}
ARM void ActorUnkALEV::func_ov070_0213f86c(void) {}
ARM void ActorUnkALEV::func_ov070_0213f8dc(void) {}
ARM void ActorUnkALEV::func_ov070_0213f92c(void) {}
ARM void ActorUnkALEV::func_ov070_0213f94c(void) {}
ARM void ActorUnkALEV::func_ov070_0213f974(void) {}
THUMB void ActorUnkALEV::func_ov070_0213f988(void) {}
ARM void ActorUnkALEV::func_ov070_0213f9dc(void) {}
ARM void ActorUnkALEV::func_ov070_0213f9f0(void) {}
ARM void ActorUnkALEV::func_ov070_0213fa30(void) {}
ARM void ActorUnkALEV::func_ov070_0213fa38(void) {}
ARM void ActorUnkALEV::func_ov070_0213fb14(void) {}
ARM void ActorUnkALEV::func_ov070_0213fbc4(void) {}
ARM void ActorUnkALEV::func_ov070_0213fdb4(void) {}
ARM void ActorUnkALEV::func_ov070_0213fdd0(void) {}
ARM void ActorUnkALEV::func_ov070_0213fdec(void) {}
ARM void ActorUnkALEV::func_ov070_0213fe30(void) {}
ARM void ActorUnkALEV::func_ov070_0213fe74(void) {}
ARM void ActorUnkALEV::func_ov070_0213fee8(void) {}
ARM void ActorUnkALEV::func_ov070_0213ffa4(void) {}
ARM void ActorUnkALEV::func_ov070_0213ffb0(void) {}
ARM void ActorUnkALEV::func_ov070_0213ffc0(void) {}
ARM void ActorUnkALEV::func_ov070_0213ffe0(void) {}
ARM void ActorUnkALEV::func_ov070_0214000c(void) {}
ARM void ActorUnkALEV::func_ov070_02140010(void) {}
ARM void ActorUnkALEV::func_ov070_02140030(void) {}
