//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTERY.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTERY ActorTypeUnkTERY::gInstance;

ARM ActorTypeUnkTERY *ActorTypeUnkTERY::GetInstance() {
    return &ActorTypeUnkTERY::gInstance;
}

ARM Actor *ActorTypeUnkTERY::Create() {
    return new(HeapIndex_2) ActorUnkTERY();
}

ARM ActorTypeUnkTERY::ActorTypeUnkTERY() :
    ActorType(ActorId_Beedle) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTERY::ActorUnkTERY() {}

ARM void ActorUnkTERY::func_ov036_0211be6c(void) {}
ARM void ActorUnkTERY::func_ov036_0211bea0(void) {}
ARM void ActorUnkTERY::func_ov036_0211becc(void) {}
ARM void ActorUnkTERY::func_ov036_0211bf88(void) {}
ARM void ActorUnkTERY::func_ov036_0211bf9c(void) {}
ARM void ActorUnkTERY::func_ov036_0211c000(void) {}
ARM void ActorUnkTERY::func_ov036_0211c02c(void) {}
ARM void ActorUnkTERY::func_ov036_0211c0e4(void) {}
ARM void ActorUnkTERY::func_ov036_0211c0ec(void) {}
ARM void ActorUnkTERY::func_ov036_0211c108(void) {}
ARM void ActorUnkTERY::func_ov036_0211c140(void) {}
ARM void ActorUnkTERY::func_ov036_0211c170(void) {}
ARM void ActorUnkTERY::func_ov036_0211c184(void) {}
ARM void ActorUnkTERY::func_ov036_0211c194(void) {}
