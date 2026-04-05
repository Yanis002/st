//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCWA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNCWA ActorTypeUnkNCWA::gInstance;

ARM ActorTypeUnkNCWA *ActorTypeUnkNCWA::GetInstance() {
    return &ActorTypeUnkNCWA::gInstance;
}

ARM Actor *ActorTypeUnkNCWA::Create() {
    return new(HeapIndex_2) ActorUnkNCWA();
}

ARM ActorTypeUnkNCWA::ActorTypeUnkNCWA() :
    ActorType(ActorId_NCWA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNCWA::ActorUnkNCWA() {}

ARM void ActorUnkNCWA::func_ov062_0215a084(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a0a4(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a220(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a238(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a28c(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a380(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a3a8(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a3d8(void) {}
