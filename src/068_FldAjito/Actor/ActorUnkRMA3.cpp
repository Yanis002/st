//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMA3 ActorTypeUnkRMA3::gInstance;

ARM ActorTypeUnkRMA3 *ActorTypeUnkRMA3::GetInstance() {
    return &ActorTypeUnkRMA3::gInstance;
}

ARM Actor *ActorTypeUnkRMA3::Create() {
    return new(HeapIndex_2) ActorUnkRMA3();
}

ARM ActorTypeUnkRMA3::ActorTypeUnkRMA3() :
    ActorType(ActorId_RMA3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMA3::ActorUnkRMA3() {}

ARM void ActorUnkRMA3::func_ov068_02160820(void) {}
ARM void ActorUnkRMA3::func_ov068_02160840(void) {}
ARM void ActorUnkRMA3::func_ov068_02160868(void) {}
ARM void ActorUnkRMA3::func_ov068_0216086c(void) {}
ARM void ActorUnkRMA3::func_ov068_021608bc(void) {}
ARM void ActorUnkRMA3::func_ov068_021608dc(void) {}
ARM void ActorUnkRMA3::func_ov068_02160904(void) {}
