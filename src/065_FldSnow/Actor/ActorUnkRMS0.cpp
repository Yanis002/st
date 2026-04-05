//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS0.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMS0 ActorTypeUnkRMS0::gInstance;

ARM ActorTypeUnkRMS0 *ActorTypeUnkRMS0::GetInstance() {
    return &ActorTypeUnkRMS0::gInstance;
}

ARM Actor *ActorTypeUnkRMS0::Create() {
    return new(HeapIndex_2) ActorUnkRMS0();
}

ARM ActorTypeUnkRMS0::ActorTypeUnkRMS0() :
    ActorType(ActorId_RMS0) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMS0::ActorUnkRMS0() {}

ARM void ActorUnkRMS0::func_ov065_02158de8(void) {}
ARM void ActorUnkRMS0::func_ov065_02158e08(void) {}
ARM void ActorUnkRMS0::func_ov065_02158e58(void) {}
ARM void ActorUnkRMS0::func_ov065_02158e78(void) {}
ARM void ActorUnkRMS0::func_ov065_02158ea0(void) {}
