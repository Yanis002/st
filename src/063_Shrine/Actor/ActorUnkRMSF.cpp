//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMSF ActorTypeUnkRMSF::gInstance;

ARM ActorTypeUnkRMSF *ActorTypeUnkRMSF::GetInstance() {
    return &ActorTypeUnkRMSF::gInstance;
}

ARM Actor *ActorTypeUnkRMSF::Create() {
    return new(HeapIndex_2) ActorUnkRMSF();
}

ARM ActorTypeUnkRMSF::ActorTypeUnkRMSF() :
    ActorType(ActorId_RMSF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMSF::ActorUnkRMSF() {}

ARM void ActorUnkRMSF::func_ov063_0215c230(void) {}
ARM void ActorUnkRMSF::func_ov063_0215c250(void) {}
ARM void ActorUnkRMSF::func_ov063_0215c290(void) {}
ARM void ActorUnkRMSF::func_ov063_0215c2d0(void) {}
ARM void ActorUnkRMSF::func_ov063_0215c2f8(void) {}
ARM void ActorUnkRMSF::func_ov063_0215c328(void) {}
