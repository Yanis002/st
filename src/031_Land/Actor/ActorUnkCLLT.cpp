//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLLT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCLLT ActorTypeUnkCLLT::gInstance;

ARM ActorTypeUnkCLLT *ActorTypeUnkCLLT::GetInstance() {
    return &ActorTypeUnkCLLT::gInstance;
}

ARM Actor *ActorTypeUnkCLLT::Create() {
    return new(HeapIndex_2) ActorUnkCLLT();
}

ARM ActorTypeUnkCLLT::ActorTypeUnkCLLT() :
    ActorType(ActorId_CLLT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCLLT::ActorUnkCLLT() {}

ARM void ActorUnkCLLT::func_ov031_020fb364(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb38c(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb3c8(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb40c(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb450(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb470(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb498(void) {}
