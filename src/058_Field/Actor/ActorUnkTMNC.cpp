//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTMNC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTMNC ActorTypeUnkTMNC::gInstance;

ARM ActorTypeUnkTMNC *ActorTypeUnkTMNC::GetInstance() {
    return &ActorTypeUnkTMNC::gInstance;
}

ARM Actor *ActorTypeUnkTMNC::Create() {
    return new(HeapIndex_2) ActorUnkTMNC();
}

ARM ActorTypeUnkTMNC::ActorTypeUnkTMNC() :
    ActorType(ActorId_TMNC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTMNC::ActorUnkTMNC() {}

ARM void ActorUnkTMNC::func_ov058_0214dd44(void) {}
ARM void ActorUnkTMNC::func_ov058_0214dde0(void) {}
ARM void ActorUnkTMNC::func_ov058_0214de70(void) {}
ARM void ActorUnkTMNC::func_ov058_0214def0(void) {}
ARM void ActorUnkTMNC::func_ov058_0214df18(void) {}
