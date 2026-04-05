//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML0.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRML0 ActorTypeUnkRML0::gInstance;

ARM ActorTypeUnkRML0 *ActorTypeUnkRML0::GetInstance() {
    return &ActorTypeUnkRML0::gInstance;
}

ARM Actor *ActorTypeUnkRML0::Create() {
    return new(HeapIndex_2) ActorUnkRML0();
}

ARM ActorTypeUnkRML0::ActorTypeUnkRML0() :
    ActorType(ActorId_RML0) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRML0::ActorUnkRML0() {}

ARM void ActorUnkRML0::func_ov062_02157ef8(void) {}
ARM void ActorUnkRML0::func_ov062_02157f18(void) {}
ARM void ActorUnkRML0::func_ov062_02157f48(void) {}
ARM void ActorUnkRML0::func_ov062_02157f98(void) {}
ARM void ActorUnkRML0::func_ov062_02157fb8(void) {}
ARM void ActorUnkRML0::func_ov062_02157fe0(void) {}
