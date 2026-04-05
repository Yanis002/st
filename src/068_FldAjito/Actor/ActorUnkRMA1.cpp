//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMA1 ActorTypeUnkRMA1::gInstance;

ARM ActorTypeUnkRMA1 *ActorTypeUnkRMA1::GetInstance() {
    return &ActorTypeUnkRMA1::gInstance;
}

ARM Actor *ActorTypeUnkRMA1::Create() {
    return new(HeapIndex_2) ActorUnkRMA1();
}

ARM ActorTypeUnkRMA1::ActorTypeUnkRMA1() :
    ActorType(ActorId_RMA1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMA1::ActorUnkRMA1() {}

ARM void ActorUnkRMA1::func_ov068_02160430(void) {}
ARM void ActorUnkRMA1::func_ov068_02160450(void) {}
ARM void ActorUnkRMA1::func_ov068_02160478(void) {}
ARM void ActorUnkRMA1::func_ov068_0216047c(void) {}
ARM void ActorUnkRMA1::func_ov068_021604cc(void) {}
ARM void ActorUnkRMA1::func_ov068_021604ec(void) {}
ARM void ActorUnkRMA1::func_ov068_02160514(void) {}
