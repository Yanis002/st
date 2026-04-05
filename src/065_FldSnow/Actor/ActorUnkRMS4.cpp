//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS4.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMS4 ActorTypeUnkRMS4::gInstance;

ARM ActorTypeUnkRMS4 *ActorTypeUnkRMS4::GetInstance() {
    return &ActorTypeUnkRMS4::gInstance;
}

ARM Actor *ActorTypeUnkRMS4::Create() {
    return new(HeapIndex_2) ActorUnkRMS4();
}

ARM ActorTypeUnkRMS4::ActorTypeUnkRMS4() :
    ActorType(ActorId_RMS4) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMS4::ActorUnkRMS4() {}

ARM void ActorUnkRMS4::func_ov065_02159278(void) {}
ARM void ActorUnkRMS4::func_ov065_02159298(void) {}
ARM void ActorUnkRMS4::func_ov065_021592e8(void) {}
ARM void ActorUnkRMS4::func_ov065_02159308(void) {}
ARM void ActorUnkRMS4::func_ov065_02159330(void) {}
