//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBFR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBFR ActorTypeUnkRBFR::gInstance;

ARM ActorTypeUnkRBFR *ActorTypeUnkRBFR::GetInstance() {
    return &ActorTypeUnkRBFR::gInstance;
}

ARM Actor *ActorTypeUnkRBFR::Create() {
    return new(HeapIndex_2) ActorUnkRBFR();
}

ARM ActorTypeUnkRBFR::ActorTypeUnkRBFR() :
    ActorType(ActorId_RBFR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBFR::ActorUnkRBFR() {}

ARM void ActorUnkRBFR::func_ov078_0215cd0c(void) {}
ARM void ActorUnkRBFR::func_ov078_0215ce24(void) {}
ARM void ActorUnkRBFR::func_ov078_0215ce38(void) {}
ARM void ActorUnkRBFR::func_ov078_0215ced0(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cee8(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cefc(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cf30(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cf4c(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cf7c(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cfb4(void) {}
