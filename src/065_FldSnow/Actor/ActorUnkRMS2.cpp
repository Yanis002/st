//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMS2 ActorTypeUnkRMS2::gInstance;

ARM ActorTypeUnkRMS2 *ActorTypeUnkRMS2::GetInstance() {
    return &ActorTypeUnkRMS2::gInstance;
}

ARM Actor *ActorTypeUnkRMS2::Create() {
    return new(HeapIndex_2) ActorUnkRMS2();
}

ARM ActorTypeUnkRMS2::ActorTypeUnkRMS2() :
    ActorType(ActorId_RMS2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMS2::ActorUnkRMS2() {}

ARM void ActorUnkRMS2::func_ov065_02159030(void) {}
ARM void ActorUnkRMS2::func_ov065_02159050(void) {}
ARM void ActorUnkRMS2::func_ov065_021590a0(void) {}
ARM void ActorUnkRMS2::func_ov065_021590c0(void) {}
ARM void ActorUnkRMS2::func_ov065_021590e8(void) {}
