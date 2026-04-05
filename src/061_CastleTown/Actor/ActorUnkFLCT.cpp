//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLCT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFLCT ActorTypeUnkFLCT::gInstance;

ARM ActorTypeUnkFLCT *ActorTypeUnkFLCT::GetInstance() {
    return &ActorTypeUnkFLCT::gInstance;
}

ARM Actor *ActorTypeUnkFLCT::Create() {
    return new(HeapIndex_2) ActorUnkFLCT();
}

ARM ActorTypeUnkFLCT::ActorTypeUnkFLCT() :
    ActorType(ActorId_FieldCastleTown) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFLCT::ActorUnkFLCT() {}

ARM void ActorUnkFLCT::func_ov061_021591f8(void) {}
ARM void ActorUnkFLCT::func_ov061_0215926c(void) {}
ARM void ActorUnkFLCT::func_ov061_02159280(void) {}
ARM void ActorUnkFLCT::func_ov061_021592e8(void) {}
ARM void ActorUnkFLCT::func_ov061_021592ec(void) {}
ARM void ActorUnkFLCT::func_ov061_02159360(void) {}
ARM void ActorUnkFLCT::func_ov061_02159374(void) {}
ARM void ActorUnkFLCT::func_ov061_021593c4(void) {}
ARM void ActorUnkFLCT::func_ov061_021593e0(void) {}
ARM void ActorUnkFLCT::func_ov061_02159408(void) {}
