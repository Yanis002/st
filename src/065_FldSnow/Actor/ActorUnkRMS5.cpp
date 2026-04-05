//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS5.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMS5 ActorTypeUnkRMS5::gInstance;

ARM ActorTypeUnkRMS5 *ActorTypeUnkRMS5::GetInstance() {
    return &ActorTypeUnkRMS5::gInstance;
}

ARM Actor *ActorTypeUnkRMS5::Create() {
    return new(HeapIndex_2) ActorUnkRMS5();
}

ARM ActorTypeUnkRMS5::ActorTypeUnkRMS5() :
    ActorType(ActorId_RMS5) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMS5::ActorUnkRMS5() {}

ARM void ActorUnkRMS5::func_ov065_0215939c(void) {}
ARM void ActorUnkRMS5::func_ov065_021593bc(void) {}
ARM void ActorUnkRMS5::func_ov065_0215940c(void) {}
ARM void ActorUnkRMS5::func_ov065_0215942c(void) {}
ARM void ActorUnkRMS5::func_ov065_02159454(void) {}
