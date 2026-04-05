//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMWS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMWS ActorTypeUnkDMWS::gInstance;

ARM ActorTypeUnkDMWS *ActorTypeUnkDMWS::GetInstance() {
    return &ActorTypeUnkDMWS::gInstance;
}

ARM Actor *ActorTypeUnkDMWS::Create() {
    return new(HeapIndex_2) ActorUnkDMWS();
}

ARM ActorTypeUnkDMWS::ActorTypeUnkDMWS() :
    ActorType(ActorId_DMWS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMWS::ActorUnkDMWS() {}

ARM void ActorUnkDMWS::func_ov088_02171664(void) {}
ARM void ActorUnkDMWS::func_ov088_021716d8(void) {}
ARM void ActorUnkDMWS::func_ov088_0217172c(void) {}
ARM void ActorUnkDMWS::func_ov088_0217173c(void) {}
ARM void ActorUnkDMWS::func_ov088_02171750(void) {}
ARM void ActorUnkDMWS::func_ov088_02171764(void) {}
ARM void ActorUnkDMWS::func_ov088_021717b4(void) {}
ARM void ActorUnkDMWS::func_ov088_021717dc(void) {}
ARM void ActorUnkDMWS::func_ov088_0217180c(void) {}
