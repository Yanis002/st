//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMS3 ActorTypeUnkRMS3::gInstance;

ARM ActorTypeUnkRMS3 *ActorTypeUnkRMS3::GetInstance() {
    return &ActorTypeUnkRMS3::gInstance;
}

ARM Actor *ActorTypeUnkRMS3::Create() {
    return new(HeapIndex_2) ActorUnkRMS3();
}

ARM ActorTypeUnkRMS3::ActorTypeUnkRMS3() :
    ActorType(ActorId_RMS3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMS3::ActorUnkRMS3() {}

ARM void ActorUnkRMS3::func_ov065_02159154(void) {}
ARM void ActorUnkRMS3::func_ov065_02159174(void) {}
ARM void ActorUnkRMS3::func_ov065_021591c4(void) {}
ARM void ActorUnkRMS3::func_ov065_021591e4(void) {}
ARM void ActorUnkRMS3::func_ov065_0215920c(void) {}
