//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWY.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWAWY ActorTypeUnkWAWY::gInstance;

ARM ActorTypeUnkWAWY *ActorTypeUnkWAWY::GetInstance() {
    return &ActorTypeUnkWAWY::gInstance;
}

ARM Actor *ActorTypeUnkWAWY::Create() {
    return new(HeapIndex_2) ActorUnkWAWY();
}

ARM ActorTypeUnkWAWY::ActorTypeUnkWAWY() :
    ActorType(ActorId_WAWY) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWAWY::ActorUnkWAWY() {}

ARM void ActorUnkWAWY::func_ov036_0211b898(void) {}
ARM void ActorUnkWAWY::func_ov036_0211b954(void) {}
ARM void ActorUnkWAWY::func_ov036_0211b9bc(void) {}
ARM void ActorUnkWAWY::func_ov036_0211b9e8(void) {}
ARM void ActorUnkWAWY::func_ov036_0211ba38(void) {}
ARM void ActorUnkWAWY::func_ov036_0211ba70(void) {}
ARM void ActorUnkWAWY::func_ov036_0211baa0(void) {}
ARM void ActorUnkWAWY::func_ov036_0211bab4(void) {}
ARM void ActorUnkWAWY::func_ov036_0211bac4(void) {}
