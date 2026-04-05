//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFR2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFR2 ActorTypeUnkEFR2::gInstance;

ARM ActorTypeUnkEFR2 *ActorTypeUnkEFR2::GetInstance() {
    return &ActorTypeUnkEFR2::gInstance;
}

ARM Actor *ActorTypeUnkEFR2::Create() {
    return new(HeapIndex_2) ActorUnkEFR2();
}

ARM ActorTypeUnkEFR2::ActorTypeUnkEFR2() :
    ActorType(ActorId_EFR2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFR2::ActorUnkEFR2() {}

ARM void ActorUnkEFR2::func_ov094_02170758(void) {}
ARM void ActorUnkEFR2::func_ov094_02170778(void) {}
ARM void ActorUnkEFR2::func_ov094_02170814(void) {}
ARM void ActorUnkEFR2::func_ov094_02170830(void) {}
ARM void ActorUnkEFR2::func_ov094_02170860(void) {}
ARM void ActorUnkEFR2::func_ov094_02170898(void) {}
