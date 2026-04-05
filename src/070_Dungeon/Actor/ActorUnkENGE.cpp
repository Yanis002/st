//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkENGE.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkENGE ActorTypeUnkENGE::gInstance;

ARM ActorTypeUnkENGE *ActorTypeUnkENGE::GetInstance() {
    return &ActorTypeUnkENGE::gInstance;
}

ARM Actor *ActorTypeUnkENGE::Create() {
    return new(HeapIndex_2) ActorUnkENGE();
}

ARM ActorTypeUnkENGE::ActorTypeUnkENGE() :
    ActorType(ActorId_ENGE) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkENGE::ActorUnkENGE() {}

ARM void ActorUnkENGE::func_ov070_0213f3b0(void) {}
ARM void ActorUnkENGE::func_ov070_0213f3e4(void) {}
ARM void ActorUnkENGE::func_ov070_0213f430(void) {}
ARM void ActorUnkENGE::func_ov070_0213f508(void) {}
ARM void ActorUnkENGE::func_ov070_0213f548(void) {}
ARM void ActorUnkENGE::func_ov070_0213f65c(void) {}
ARM void ActorUnkENGE::func_ov070_0213f750(void) {}
ARM void ActorUnkENGE::func_ov070_0213f764(void) {}
ARM void ActorUnkENGE::func_ov070_0213f780(void) {}
