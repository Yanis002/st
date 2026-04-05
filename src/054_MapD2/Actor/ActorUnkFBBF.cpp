//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFBBF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFBBF ActorTypeUnkFBBF::gInstance;

ARM ActorTypeUnkFBBF *ActorTypeUnkFBBF::GetInstance() {
    return &ActorTypeUnkFBBF::gInstance;
}

ARM Actor *ActorTypeUnkFBBF::Create() {
    return new(HeapIndex_2) ActorUnkFBBF();
}

ARM ActorTypeUnkFBBF::ActorTypeUnkFBBF() :
    ActorType(ActorId_FBBF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFBBF::ActorUnkFBBF() {}

ARM void ActorUnkFBBF::func_ov054_0213d674(void) {}
ARM void ActorUnkFBBF::func_ov054_0213d6b0(void) {}
ARM void ActorUnkFBBF::func_ov054_0213d6e4(void) {}
ARM void ActorUnkFBBF::func_ov054_0213d720(void) {}
ARM void ActorUnkFBBF::func_ov054_0213d798(void) {}
ARM void ActorUnkFBBF::func_ov054_0213d8e0(void) {}
