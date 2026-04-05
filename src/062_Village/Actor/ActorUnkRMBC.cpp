//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMBC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMBC ActorTypeUnkRMBC::gInstance;

ARM ActorTypeUnkRMBC *ActorTypeUnkRMBC::GetInstance() {
    return &ActorTypeUnkRMBC::gInstance;
}

ARM Actor *ActorTypeUnkRMBC::Create() {
    return new(HeapIndex_2) ActorUnkRMBC();
}

ARM ActorTypeUnkRMBC::ActorTypeUnkRMBC() :
    ActorType(ActorId_RMBC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMBC::ActorUnkRMBC() {}

ARM void ActorUnkRMBC::func_ov062_0215a444(void) {}
ARM void ActorUnkRMBC::func_ov062_0215a464(void) {}
ARM void ActorUnkRMBC::func_ov062_0215a4b4(void) {}
ARM void ActorUnkRMBC::func_ov062_0215a4d4(void) {}
ARM void ActorUnkRMBC::func_ov062_0215a4fc(void) {}
