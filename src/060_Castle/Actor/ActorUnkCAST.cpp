//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAST.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAST ActorTypeUnkCAST::gInstance;

ARM ActorTypeUnkCAST *ActorTypeUnkCAST::GetInstance() {
    return &ActorTypeUnkCAST::gInstance;
}

ARM Actor *ActorTypeUnkCAST::Create() {
    return new(HeapIndex_2) ActorUnkCAST();
}

ARM ActorTypeUnkCAST::ActorTypeUnkCAST() :
    ActorType(ActorId_CAST) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAST::ActorUnkCAST() {}

ARM void ActorUnkCAST::func_ov060_0215ec08(void) {}
ARM void ActorUnkCAST::func_ov060_0215ec7c(void) {}
ARM void ActorUnkCAST::func_ov060_0215eca4(void) {}
ARM void ActorUnkCAST::func_ov060_0215eca8(void) {}
ARM void ActorUnkCAST::func_ov060_0215ecbc(void) {}
ARM void ActorUnkCAST::func_ov060_0215ecdc(void) {}
ARM void ActorUnkCAST::func_ov060_0215ecfc(void) {}
ARM void ActorUnkCAST::func_ov060_0215ed24(void) {}
ARM void ActorUnkCAST::func_ov060_0215ed38(void) {}
ARM void ActorUnkCAST::func_ov060_0215ed58(void) {}
