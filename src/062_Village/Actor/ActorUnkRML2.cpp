//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML2.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRML2 ActorTypeUnkRML2::gInstance;

ARM ActorTypeUnkRML2 *ActorTypeUnkRML2::GetInstance() {
    return &ActorTypeUnkRML2::gInstance;
}

ARM Actor *ActorTypeUnkRML2::Create() {
    return new(HeapIndex_2) ActorUnkRML2();
}

ARM ActorTypeUnkRML2::ActorTypeUnkRML2() :
    ActorType(ActorId_RML2) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRML2::ActorUnkRML2() {}

ARM void ActorUnkRML2::func_ov062_02158170(void) {}
ARM void ActorUnkRML2::func_ov062_02158190(void) {}
ARM void ActorUnkRML2::func_ov062_021581e0(void) {}
ARM void ActorUnkRML2::func_ov062_02158200(void) {}
ARM void ActorUnkRML2::func_ov062_02158228(void) {}
