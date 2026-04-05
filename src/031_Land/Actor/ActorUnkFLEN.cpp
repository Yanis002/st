//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLEN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFLEN ActorTypeUnkFLEN::gInstance;

ARM ActorTypeUnkFLEN *ActorTypeUnkFLEN::GetInstance() {
    return &ActorTypeUnkFLEN::gInstance;
}

ARM Actor *ActorTypeUnkFLEN::Create() {
    return new(HeapIndex_2) ActorUnkFLEN();
}

ARM ActorTypeUnkFLEN::ActorTypeUnkFLEN() :
    ActorType(ActorId_FLEN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFLEN::ActorUnkFLEN() {}

ARM void ActorUnkFLEN::func_ov031_020f8090(void) {}
ARM void ActorUnkFLEN::func_ov031_020f80b8(void) {}
ARM void ActorUnkFLEN::func_ov031_020f8118(void) {}
ARM void ActorUnkFLEN::func_ov031_020f81b4(void) {}
ARM void ActorUnkFLEN::func_ov031_020f81f8(void) {}
ARM void ActorUnkFLEN::func_ov031_020f829c(void) {}
ARM void ActorUnkFLEN::func_ov031_020f82b0(void) {}
ARM void ActorUnkFLEN::func_ov031_020f82cc(void) {}
