//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLBRC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkLBRC ActorTypeUnkLBRC::gInstance;

ARM ActorTypeUnkLBRC *ActorTypeUnkLBRC::GetInstance() {
    return &ActorTypeUnkLBRC::gInstance;
}

ARM Actor *ActorTypeUnkLBRC::Create() {
    return new(HeapIndex_2) ActorUnkLBRC();
}

ARM ActorTypeUnkLBRC::ActorTypeUnkLBRC() :
    ActorType(ActorId_LBRC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkLBRC::ActorUnkLBRC() {}

ARM void ActorUnkLBRC::func_ov084_021608ac(void) {}
ARM void ActorUnkLBRC::func_ov084_02160ac8(void) {}
ARM void ActorUnkLBRC::func_ov084_02160cd4(void) {}
ARM void ActorUnkLBRC::func_ov084_02160cec(void) {}
ARM void ActorUnkLBRC::func_ov084_02160cf0(void) {}
ARM void ActorUnkLBRC::func_ov084_02160d2c(void) {}
ARM void ActorUnkLBRC::func_ov084_02160e14(void) {}
ARM void ActorUnkLBRC::func_ov084_02160f84(void) {}
ARM void ActorUnkLBRC::func_ov084_02161030(void) {}
ARM void ActorUnkLBRC::func_ov084_02161070(void) {}
ARM void ActorUnkLBRC::func_ov084_021610d8(void) {}
ARM void ActorUnkLBRC::func_ov084_021610e4(void) {}
ARM void ActorUnkLBRC::func_ov084_021611a0(void) {}
ARM void ActorUnkLBRC::func_ov084_021611d8(void) {}
