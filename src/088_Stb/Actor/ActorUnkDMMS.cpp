//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMMS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMMS ActorTypeUnkDMMS::gInstance;

ARM ActorTypeUnkDMMS *ActorTypeUnkDMMS::GetInstance() {
    return &ActorTypeUnkDMMS::gInstance;
}

ARM Actor *ActorTypeUnkDMMS::Create() {
    return new(HeapIndex_2) ActorUnkDMMS();
}

ARM ActorTypeUnkDMMS::ActorTypeUnkDMMS() :
    ActorType(ActorId_DMMS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMMS::ActorUnkDMMS() {}

ARM void ActorUnkDMMS::func_ov088_02171bb4(void) {}
ARM void ActorUnkDMMS::func_ov088_02171c28(void) {}
ARM void ActorUnkDMMS::func_ov088_02171c7c(void) {}
ARM void ActorUnkDMMS::func_ov088_02171c8c(void) {}
ARM void ActorUnkDMMS::func_ov088_02171ca0(void) {}
ARM void ActorUnkDMMS::func_ov088_02171cb4(void) {}
ARM void ActorUnkDMMS::func_ov088_02171d04(void) {}
ARM void ActorUnkDMMS::func_ov088_02171d2c(void) {}
ARM void ActorUnkDMMS::func_ov088_02171d5c(void) {}
