//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMY.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAMY ActorTypeUnkCAMY::gInstance;

ARM ActorTypeUnkCAMY *ActorTypeUnkCAMY::GetInstance() {
    return &ActorTypeUnkCAMY::gInstance;
}

ARM Actor *ActorTypeUnkCAMY::Create() {
    return new(HeapIndex_2) ActorUnkCAMY();
}

ARM ActorTypeUnkCAMY::ActorTypeUnkCAMY() :
    ActorType(ActorId_CAMY) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAMY::ActorUnkCAMY() {}

ARM void ActorUnkCAMY::func_ov036_0211b008(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b0c4(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b11c(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b148(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b1ac(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b1e4(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b214(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b228(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b238(void) {}
