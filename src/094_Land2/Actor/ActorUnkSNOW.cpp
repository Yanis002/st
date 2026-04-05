//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSNOW.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSNOW ActorTypeUnkSNOW::gInstance;

ARM ActorTypeUnkSNOW *ActorTypeUnkSNOW::GetInstance() {
    return &ActorTypeUnkSNOW::gInstance;
}

ARM Actor *ActorTypeUnkSNOW::Create() {
    return new(HeapIndex_2) ActorUnkSNOW();
}

ARM ActorTypeUnkSNOW::ActorTypeUnkSNOW() :
    ActorType(ActorId_SNOW) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSNOW::ActorUnkSNOW() {}

ARM void ActorUnkSNOW::func_ov094_0216db18(void) {}
ARM void ActorUnkSNOW::func_ov094_0216db6c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dc1c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dc4c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd08(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd1c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd30(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd98(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dda8(void) {}
ARM void ActorUnkSNOW::func_ov094_0216de0c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216de2c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216de54(void) {}
