//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYUKY.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkYUKY ActorTypeUnkYUKY::gInstance;

ARM ActorTypeUnkYUKY *ActorTypeUnkYUKY::GetInstance() {
    return &ActorTypeUnkYUKY::gInstance;
}

ARM Actor *ActorTypeUnkYUKY::Create() {
    return new(HeapIndex_2) ActorUnkYUKY();
}

ARM ActorTypeUnkYUKY::ActorTypeUnkYUKY() :
    ActorType(ActorId_YUKY) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkYUKY::ActorUnkYUKY() {}

ARM void ActorUnkYUKY::func_ov036_0211b5ac(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b668(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b6cc(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b6f8(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b770(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b7a8(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b7d8(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b7ec(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b7fc(void) {}
