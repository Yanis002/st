//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMLF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMLF ActorTypeUnkRMLF::gInstance;

ARM ActorTypeUnkRMLF *ActorTypeUnkRMLF::GetInstance() {
    return &ActorTypeUnkRMLF::gInstance;
}

ARM Actor *ActorTypeUnkRMLF::Create() {
    return new(HeapIndex_2) ActorUnkRMLF();
}

ARM ActorTypeUnkRMLF::ActorTypeUnkRMLF() :
    ActorType(ActorId_RMLF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMLF::ActorUnkRMLF() {}

ARM void ActorUnkRMLF::func_ov062_02159a4c(void) {}
ARM void ActorUnkRMLF::func_ov062_02159a6c(void) {}
ARM void ActorUnkRMLF::func_ov062_02159abc(void) {}
ARM void ActorUnkRMLF::func_ov062_02159adc(void) {}
ARM void ActorUnkRMLF::func_ov062_02159b04(void) {}
