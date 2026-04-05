//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSNST.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSNST ActorTypeUnkSNST::gInstance;

ARM ActorTypeUnkSNST *ActorTypeUnkSNST::GetInstance() {
    return &ActorTypeUnkSNST::gInstance;
}

ARM Actor *ActorTypeUnkSNST::Create() {
    return new(HeapIndex_2) ActorUnkSNST();
}

ARM ActorTypeUnkSNST::ActorTypeUnkSNST() :
    ActorType(ActorId_SNST) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSNST::ActorUnkSNST() {}

ARM void ActorUnkSNST::func_ov026_0211aa50(void) {}
ARM void ActorUnkSNST::func_ov026_0211ab1c(void) {}
ARM void ActorUnkSNST::func_ov026_0211ab30(void) {}
ARM void ActorUnkSNST::func_ov026_0211abc0(void) {}
ARM void ActorUnkSNST::func_ov026_0211ac3c(void) {}
ARM void ActorUnkSNST::func_ov026_0211ac44(void) {}
ARM void ActorUnkSNST::func_ov026_0211ac70(void) {}
ARM void ActorUnkSNST::func_ov026_0211aca4(void) {}
ARM void ActorUnkSNST::func_ov026_0211acc0(void) {}
ARM void ActorUnkSNST::func_ov026_0211ace8(void) {}
ARM void ActorUnkSNST::func_ov026_0211ad18(void) {}
