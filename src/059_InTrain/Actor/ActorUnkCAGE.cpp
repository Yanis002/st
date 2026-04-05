//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAGE.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAGE ActorTypeUnkCAGE::gInstance;

ARM ActorTypeUnkCAGE *ActorTypeUnkCAGE::GetInstance() {
    return &ActorTypeUnkCAGE::gInstance;
}

ARM Actor *ActorTypeUnkCAGE::Create() {
    return new(HeapIndex_2) ActorUnkCAGE();
}

ARM ActorTypeUnkCAGE::ActorTypeUnkCAGE() :
    ActorType(ActorId_CAGE) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAGE::ActorUnkCAGE() {}

ARM void ActorUnkCAGE::func_ov059_02160e84(void) {}
ARM void ActorUnkCAGE::func_ov059_02160f64(void) {}
ARM void ActorUnkCAGE::func_ov059_02160f94(void) {}
ARM void ActorUnkCAGE::func_ov059_02160fd0(void) {}
ARM void ActorUnkCAGE::func_ov059_02161034(void) {}
ARM void ActorUnkCAGE::func_ov059_02161048(void) {}
ARM void ActorUnkCAGE::func_ov059_0216105c(void) {}
ARM void ActorUnkCAGE::func_ov059_02161060(void) {}
ARM void ActorUnkCAGE::func_ov059_02161080(void) {}
ARM void ActorUnkCAGE::func_ov059_021610e4(void) {}
ARM void ActorUnkCAGE::func_ov059_021610e8(void) {}
ARM void ActorUnkCAGE::func_ov059_021610ec(void) {}
ARM void ActorUnkCAGE::func_ov059_02161164(void) {}
ARM void ActorUnkCAGE::func_ov059_02161210(void) {}
ARM void ActorUnkCAGE::func_ov059_02161224(void) {}
ARM void ActorUnkCAGE::func_ov059_02161390(void) {}
ARM void ActorUnkCAGE::func_ov059_021613bc(void) {}
ARM void ActorUnkCAGE::func_ov059_02161448(void) {}
ARM void ActorUnkCAGE::func_ov059_02161470(void) {}
ARM void ActorUnkCAGE::func_ov059_02161498(void) {}
ARM void ActorUnkCAGE::func_ov059_021614c8(void) {}
ARM void ActorUnkCAGE::func_ov059_021614dc(void) {}
ARM void ActorUnkCAGE::func_ov059_021614fc(void) {}
ARM void ActorUnkCAGE::func_ov059_02161518(void) {}
