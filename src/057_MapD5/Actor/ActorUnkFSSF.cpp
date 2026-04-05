//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFSSF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFSSF ActorTypeUnkFSSF::gInstance;

ARM ActorTypeUnkFSSF *ActorTypeUnkFSSF::GetInstance() {
    return &ActorTypeUnkFSSF::gInstance;
}

ARM Actor *ActorTypeUnkFSSF::Create() {
    return new(HeapIndex_2) ActorUnkFSSF();
}

ARM ActorTypeUnkFSSF::ActorTypeUnkFSSF() :
    ActorType(ActorId_FSSF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFSSF::ActorUnkFSSF() {}

ARM void ActorUnkFSSF::func_ov057_02139eb8(void) {}
ARM void ActorUnkFSSF::func_ov057_02139ef4(void) {}
ARM void ActorUnkFSSF::func_ov057_02139f08(void) {}
ARM void ActorUnkFSSF::func_ov057_02139f24(void) {}
ARM void ActorUnkFSSF::func_ov057_02139fc4(void) {}
ARM void ActorUnkFSSF::func_ov057_0213a0c0(void) {}
ARM void ActorUnkFSSF::func_ov057_0213a0cc(void) {}
ARM void ActorUnkFSSF::func_ov057_0213a124(void) {}
ARM void ActorUnkFSSF::func_ov057_0213a168(void) {}
