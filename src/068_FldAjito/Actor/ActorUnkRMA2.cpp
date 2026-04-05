//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMA2 ActorTypeUnkRMA2::gInstance;

ARM ActorTypeUnkRMA2 *ActorTypeUnkRMA2::GetInstance() {
    return &ActorTypeUnkRMA2::gInstance;
}

ARM Actor *ActorTypeUnkRMA2::Create() {
    return new(HeapIndex_2) ActorUnkRMA2();
}

ARM ActorTypeUnkRMA2::ActorTypeUnkRMA2() :
    ActorType(ActorId_RMA2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMA2::ActorUnkRMA2() {}

ARM void ActorUnkRMA2::func_ov068_02160580(void) {}
ARM void ActorUnkRMA2::func_ov068_021605a0(void) {}
ARM void ActorUnkRMA2::func_ov068_021605c8(void) {}
ARM void ActorUnkRMA2::func_ov068_021605cc(void) {}
ARM void ActorUnkRMA2::func_ov068_0216061c(void) {}
ARM void ActorUnkRMA2::func_ov068_0216063c(void) {}
ARM void ActorUnkRMA2::func_ov068_02160664(void) {}
