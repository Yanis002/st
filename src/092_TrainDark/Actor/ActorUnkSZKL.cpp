//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSZKL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSZKL ActorTypeUnkSZKL::gInstance;

ARM ActorTypeUnkSZKL *ActorTypeUnkSZKL::GetInstance() {
    return &ActorTypeUnkSZKL::gInstance;
}

ARM Actor *ActorTypeUnkSZKL::Create() {
    return new(HeapIndex_2) ActorUnkSZKL();
}

ARM ActorTypeUnkSZKL::ActorTypeUnkSZKL() :
    ActorType(ActorId_SZKL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSZKL::ActorUnkSZKL() {}

ARM void ActorUnkSZKL::func_ov092_0217858c(void) {}
ARM void ActorUnkSZKL::func_ov092_021786a0(void) {}
ARM void ActorUnkSZKL::func_ov092_021786b4(void) {}
ARM void ActorUnkSZKL::func_ov092_021786f4(void) {}
ARM void ActorUnkSZKL::func_ov092_0217873c(void) {}
ARM void ActorUnkSZKL::func_ov092_02178774(void) {}
ARM void ActorUnkSZKL::func_ov092_02178800(void) {}
ARM void ActorUnkSZKL::func_ov092_0217883c(void) {}
ARM void ActorUnkSZKL::func_ov092_021788c4(void) {}
ARM void ActorUnkSZKL::func_ov092_0217890c(void) {}
ARM void ActorUnkSZKL::func_ov092_02178944(void) {}
ARM void ActorUnkSZKL::func_ov092_02178990(void) {}
ARM void ActorUnkSZKL::func_ov092_021789f4(void) {}
ARM void ActorUnkSZKL::func_ov092_02178a8c(void) {}
ARM void ActorUnkSZKL::func_ov092_02178ab0(void) {}
ARM void ActorUnkSZKL::func_ov092_02178ac4(void) {}
ARM void ActorUnkSZKL::func_ov092_02178ae4(void) {}
ARM void ActorUnkSZKL::func_ov092_02178b8c(void) {}
ARM void ActorUnkSZKL::func_ov092_02178c08(void) {}
ARM void ActorUnkSZKL::func_ov092_02178c58(void) {}
ARM void ActorUnkSZKL::func_ov092_02178c6c(void) {}
