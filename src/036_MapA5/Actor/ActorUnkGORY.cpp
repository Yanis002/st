//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGORY.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGORY ActorTypeUnkGORY::gInstance;

ARM ActorTypeUnkGORY *ActorTypeUnkGORY::GetInstance() {
    return &ActorTypeUnkGORY::gInstance;
}

ARM Actor *ActorTypeUnkGORY::Create() {
    return new(HeapIndex_2) ActorUnkGORY();
}

ARM ActorTypeUnkGORY::ActorTypeUnkGORY() :
    ActorType(ActorId_GORY) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGORY::ActorUnkGORY() {}

ARM void ActorUnkGORY::func_ov036_0211bb64(void) {}
ARM void ActorUnkGORY::func_ov036_0211bc20(void) {}
ARM void ActorUnkGORY::func_ov036_0211bc84(void) {}
ARM void ActorUnkGORY::func_ov036_0211bcb0(void) {}
ARM void ActorUnkGORY::func_ov036_0211bd44(void) {}
ARM void ActorUnkGORY::func_ov036_0211bd7c(void) {}
ARM void ActorUnkGORY::func_ov036_0211bdac(void) {}
ARM void ActorUnkGORY::func_ov036_0211bdc0(void) {}
ARM void ActorUnkGORY::func_ov036_0211bdd0(void) {}
