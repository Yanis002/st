//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNPWC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNPWC ActorTypeUnkNPWC::gInstance;

ARM ActorTypeUnkNPWC *ActorTypeUnkNPWC::GetInstance() {
    return &ActorTypeUnkNPWC::gInstance;
}

ARM Actor *ActorTypeUnkNPWC::Create() {
    return new(HeapIndex_2) ActorUnkNPWC();
}

ARM ActorTypeUnkNPWC::ActorTypeUnkNPWC() :
    ActorType(ActorId_NPWC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNPWC::ActorUnkNPWC() {}

ARM void ActorUnkNPWC::func_ov083_0215c378(void) {}
ARM void ActorUnkNPWC::func_ov083_0215c3b4(void) {}
ARM void ActorUnkNPWC::func_ov083_0215c458(void) {}
ARM void ActorUnkNPWC::func_ov083_0215c478(void) {}
ARM void ActorUnkNPWC::func_ov083_0215c4a0(void) {}
