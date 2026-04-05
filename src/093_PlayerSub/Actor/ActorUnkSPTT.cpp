//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPTT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSPTT ActorTypeUnkSPTT::gInstance;

ARM ActorTypeUnkSPTT *ActorTypeUnkSPTT::GetInstance() {
    return &ActorTypeUnkSPTT::gInstance;
}

ARM Actor *ActorTypeUnkSPTT::Create() {
    return new(HeapIndex_2) ActorUnkSPTT();
}

ARM ActorTypeUnkSPTT::ActorTypeUnkSPTT() :
    ActorType(ActorId_SPTT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSPTT::ActorUnkSPTT() {}

ARM void ActorUnkSPTT::func_ov093_02176b00(void) {}
ARM void ActorUnkSPTT::func_ov093_02176c70(void) {}
ARM void ActorUnkSPTT::func_ov093_02176e18(void) {}
ARM void ActorUnkSPTT::func_ov093_02176ea4(void) {}
ARM void ActorUnkSPTT::func_ov093_02176ef8(void) {}
ARM void ActorUnkSPTT::func_ov093_02176fa8(void) {}
ARM void ActorUnkSPTT::func_ov093_021771e4(void) {}
ARM void ActorUnkSPTT::func_ov093_021771f8(void) {}
ARM void ActorUnkSPTT::func_ov093_02177214(void) {}
