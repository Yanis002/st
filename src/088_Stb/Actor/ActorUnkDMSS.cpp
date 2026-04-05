//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMSS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMSS ActorTypeUnkDMSS::gInstance;

ARM ActorTypeUnkDMSS *ActorTypeUnkDMSS::GetInstance() {
    return &ActorTypeUnkDMSS::gInstance;
}

ARM Actor *ActorTypeUnkDMSS::Create() {
    return new(HeapIndex_2) ActorUnkDMSS();
}

ARM ActorTypeUnkDMSS::ActorTypeUnkDMSS() :
    ActorType(ActorId_DMSS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMSS::ActorUnkDMSS() {}

ARM void ActorUnkDMSS::func_ov088_02171420(void) {}
ARM void ActorUnkDMSS::func_ov088_02171494(void) {}
ARM void ActorUnkDMSS::func_ov088_021714a8(void) {}
ARM void ActorUnkDMSS::func_ov088_021714fc(void) {}
ARM void ActorUnkDMSS::func_ov088_0217150c(void) {}
ARM void ActorUnkDMSS::func_ov088_02171520(void) {}
ARM void ActorUnkDMSS::func_ov088_02171534(void) {}
ARM void ActorUnkDMSS::func_ov088_02171584(void) {}
ARM void ActorUnkDMSS::func_ov088_021715a0(void) {}
ARM void ActorUnkDMSS::func_ov088_021715c8(void) {}
ARM void ActorUnkDMSS::func_ov088_021715f8(void) {}
