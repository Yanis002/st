//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOCGS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkOCGS ActorTypeUnkOCGS::gInstance;

ARM ActorTypeUnkOCGS *ActorTypeUnkOCGS::GetInstance() {
    return &ActorTypeUnkOCGS::gInstance;
}

ARM Actor *ActorTypeUnkOCGS::Create() {
    return new(HeapIndex_2) ActorUnkOCGS();
}

ARM ActorTypeUnkOCGS::ActorTypeUnkOCGS() :
    ActorType(ActorId_OCGS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkOCGS::ActorUnkOCGS() {}

ARM void ActorUnkOCGS::func_ov086_0215b028(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b0fc(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b110(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b194(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b3e8(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b504(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b5a8(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b5f0(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b628(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b6f4(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b730(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b77c(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b798(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b7c0(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b7f0(void) {}
