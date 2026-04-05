//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSWT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDSWT ActorTypeUnkDSWT::gInstance;

ARM ActorTypeUnkDSWT *ActorTypeUnkDSWT::GetInstance() {
    return &ActorTypeUnkDSWT::gInstance;
}

ARM Actor *ActorTypeUnkDSWT::Create() {
    return new(HeapIndex_2) ActorUnkDSWT();
}

ARM ActorTypeUnkDSWT::ActorTypeUnkDSWT() :
    ActorType(ActorId_DSWT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDSWT::ActorUnkDSWT() {}

ARM void ActorUnkDSWT::func_ov082_02157ac8(void) {}
ARM void ActorUnkDSWT::func_ov082_02157ae8(void) {}
ARM void ActorUnkDSWT::func_ov082_02157b38(void) {}
ARM void ActorUnkDSWT::func_ov082_02157b58(void) {}
