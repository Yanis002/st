//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRRL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTRRL ActorTypeUnkTRRL::gInstance;

ARM ActorTypeUnkTRRL *ActorTypeUnkTRRL::GetInstance() {
    return &ActorTypeUnkTRRL::gInstance;
}

ARM Actor *ActorTypeUnkTRRL::Create() {
    return new(HeapIndex_2) ActorUnkTRRL();
}

ARM ActorTypeUnkTRRL::ActorTypeUnkTRRL() :
    ActorType(ActorId_TRRL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTRRL::ActorUnkTRRL() {}

ARM void ActorUnkTRRL::func_ov034_0211e364(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e510(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e564(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e5c0(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e790(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e7fc(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e818(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e81c(void) {}
ARM void ActorUnkTRRL::func_ov034_0211e840(void) {}
