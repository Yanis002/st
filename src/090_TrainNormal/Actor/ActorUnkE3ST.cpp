//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3ST.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkE3ST ActorTypeUnkE3ST::gInstance;

ARM ActorTypeUnkE3ST *ActorTypeUnkE3ST::GetInstance() {
    return &ActorTypeUnkE3ST::gInstance;
}

ARM Actor *ActorTypeUnkE3ST::Create() {
    return new(HeapIndex_2) ActorUnkE3ST();
}

ARM ActorTypeUnkE3ST::ActorTypeUnkE3ST() :
    ActorType(ActorId_E3ST) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkE3ST::ActorUnkE3ST() {}

ARM void ActorUnkE3ST::func_ov090_021714a0(void) {}
ARM void ActorUnkE3ST::func_ov090_021714e0(void) {}
ARM void ActorUnkE3ST::func_ov090_021714f4(void) {}
ARM void ActorUnkE3ST::func_ov090_02171510(void) {}
