//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMNCB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMNCB ActorTypeUnkMNCB::gInstance;

ARM ActorTypeUnkMNCB *ActorTypeUnkMNCB::GetInstance() {
    return &ActorTypeUnkMNCB::gInstance;
}

ARM Actor *ActorTypeUnkMNCB::Create() {
    return new(HeapIndex_2) ActorUnkMNCB();
}

ARM ActorTypeUnkMNCB::ActorTypeUnkMNCB() :
    ActorType(ActorId_MNCB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMNCB::ActorUnkMNCB() {}

ARM void ActorUnkMNCB::func_ov094_0216fb00(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fbc0(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fbd4(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fbdc(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fc74(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fc7c(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fd58(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fe34(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fe70(void) {}
ARM void ActorUnkMNCB::func_ov094_0216ffe8(void) {}
ARM void ActorUnkMNCB::func_ov094_02170374(void) {}
ARM void ActorUnkMNCB::func_ov094_02170584(void) {}
ARM void ActorUnkMNCB::func_ov094_021705d4(void) {}
ARM void ActorUnkMNCB::func_ov094_02170658(void) {}
ARM void ActorUnkMNCB::func_ov094_021706e4(void) {}
