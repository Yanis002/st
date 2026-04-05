//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWKTR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWKTR ActorTypeUnkWKTR::gInstance;

ARM ActorTypeUnkWKTR *ActorTypeUnkWKTR::GetInstance() {
    return &ActorTypeUnkWKTR::gInstance;
}

ARM Actor *ActorTypeUnkWKTR::Create() {
    return new(HeapIndex_2) ActorUnkWKTR();
}

ARM ActorTypeUnkWKTR::ActorTypeUnkWKTR() :
    ActorType(ActorId_WKTR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWKTR::ActorUnkWKTR() {}

ARM void ActorUnkWKTR::func_ov030_0214dd58(void) {}
ARM void ActorUnkWKTR::func_ov030_0214dd68(void) {}
ARM void ActorUnkWKTR::func_ov030_0214dee8(void) {}
ARM void ActorUnkWKTR::func_ov030_0214df28(void) {}
ARM void ActorUnkWKTR::func_ov030_0214df3c(void) {}
ARM void ActorUnkWKTR::func_ov030_0214df90(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e014(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e0a0(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e0a8(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e14c(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e16c(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e18c(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e2d0(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e418(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e41c(void) {}
ARM void ActorUnkWKTR::func_ov030_0214e5b8(void) {}
