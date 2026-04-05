//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPRPP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkPRPP ActorTypeUnkPRPP::gInstance;

ARM ActorTypeUnkPRPP *ActorTypeUnkPRPP::GetInstance() {
    return &ActorTypeUnkPRPP::gInstance;
}

ARM Actor *ActorTypeUnkPRPP::Create() {
    return new(HeapIndex_2) ActorUnkPRPP();
}

ARM ActorTypeUnkPRPP::ActorTypeUnkPRPP() :
    ActorType(ActorId_PRPP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPRPP::ActorUnkPRPP() {}

ARM void ActorUnkPRPP::func_ov081_02151ad4(void) {}
ARM void ActorUnkPRPP::func_ov081_02151b1c(void) {}
ARM void ActorUnkPRPP::func_ov081_02151b54(void) {}
ARM void ActorUnkPRPP::func_ov081_02151b98(void) {}
ARM void ActorUnkPRPP::func_ov081_02151c28(void) {}
ARM void ActorUnkPRPP::func_ov081_02151c3c(void) {}
ARM void ActorUnkPRPP::func_ov081_02151c74(void) {}
ARM void ActorUnkPRPP::func_ov081_02151cb0(void) {}
ARM void ActorUnkPRPP::func_ov081_02151d64(void) {}
ARM void ActorUnkPRPP::func_ov081_02151dd8(void) {}
ARM void ActorUnkPRPP::func_ov081_02151e10(void) {}
ARM void ActorUnkPRPP::func_ov081_02151ed8(void) {}
ARM void ActorUnkPRPP::func_ov081_02151f50(void) {}
ARM void ActorUnkPRPP::func_ov081_02151f7c(void) {}
ARM void ActorUnkPRPP::func_ov081_02151fa4(void) {}
ARM void ActorUnkPRPP::func_ov081_02151fd4(void) {}
ARM void ActorUnkPRPP::func_ov081_02151fe8(void) {}
