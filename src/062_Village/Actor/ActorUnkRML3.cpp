//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML3.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRML3 ActorTypeUnkRML3::gInstance;

ARM ActorTypeUnkRML3 *ActorTypeUnkRML3::GetInstance() {
    return &ActorTypeUnkRML3::gInstance;
}

ARM Actor *ActorTypeUnkRML3::Create() {
    return new(HeapIndex_2) ActorUnkRML3();
}

ARM ActorTypeUnkRML3::ActorTypeUnkRML3() :
    ActorType(ActorId_RML3) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRML3::ActorUnkRML3() {}

ARM void ActorUnkRML3::func_ov062_02158294(void) {}
ARM void ActorUnkRML3::func_ov062_021582b4(void) {}
ARM void ActorUnkRML3::func_ov062_02158304(void) {}
ARM void ActorUnkRML3::func_ov062_02158324(void) {}
ARM void ActorUnkRML3::func_ov062_0215834c(void) {}
