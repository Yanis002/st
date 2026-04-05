//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRML1 ActorTypeUnkRML1::gInstance;

ARM ActorTypeUnkRML1 *ActorTypeUnkRML1::GetInstance() {
    return &ActorTypeUnkRML1::gInstance;
}

ARM Actor *ActorTypeUnkRML1::Create() {
    return new(HeapIndex_2) ActorUnkRML1();
}

ARM ActorTypeUnkRML1::ActorTypeUnkRML1() :
    ActorType(ActorId_RML1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRML1::ActorUnkRML1() {}

ARM void ActorUnkRML1::func_ov062_0215804c(void) {}
ARM void ActorUnkRML1::func_ov062_0215806c(void) {}
ARM void ActorUnkRML1::func_ov062_021580bc(void) {}
ARM void ActorUnkRML1::func_ov062_021580dc(void) {}
ARM void ActorUnkRML1::func_ov062_02158104(void) {}
