//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMWT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMWT ActorTypeUnkDMWT::gInstance;

ARM ActorTypeUnkDMWT *ActorTypeUnkDMWT::GetInstance() {
    return &ActorTypeUnkDMWT::gInstance;
}

ARM Actor *ActorTypeUnkDMWT::Create() {
    return new(HeapIndex_2) ActorUnkDMWT();
}

ARM ActorTypeUnkDMWT::ActorTypeUnkDMWT() :
    ActorType(ActorId_DMWT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMWT::ActorUnkDMWT() {}

ARM void ActorUnkDMWT::func_ov088_02171878(void) {}
ARM void ActorUnkDMWT::func_ov088_021718ec(void) {}
ARM void ActorUnkDMWT::func_ov088_02171940(void) {}
ARM void ActorUnkDMWT::func_ov088_02171950(void) {}
ARM void ActorUnkDMWT::func_ov088_02171964(void) {}
ARM void ActorUnkDMWT::func_ov088_02171978(void) {}
ARM void ActorUnkDMWT::func_ov088_021719c8(void) {}
ARM void ActorUnkDMWT::func_ov088_021719d4(void) {}
ARM void ActorUnkDMWT::func_ov088_021719fc(void) {}
ARM void ActorUnkDMWT::func_ov088_02171a2c(void) {}
