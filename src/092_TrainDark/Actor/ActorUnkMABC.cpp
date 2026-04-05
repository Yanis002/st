//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMABC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMABC ActorTypeUnkMABC::gInstance;

ARM ActorTypeUnkMABC *ActorTypeUnkMABC::GetInstance() {
    return &ActorTypeUnkMABC::gInstance;
}

ARM Actor *ActorTypeUnkMABC::Create() {
    return new(HeapIndex_2) ActorUnkMABC();
}

ARM ActorTypeUnkMABC::ActorTypeUnkMABC() :
    ActorType(ActorId_MABC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMABC::ActorUnkMABC() {}

ARM void ActorUnkMABC::func_ov092_021745a0(void) {}
ARM void ActorUnkMABC::func_ov092_02174670(void) {}
ARM void ActorUnkMABC::func_ov092_02174730(void) {}
ARM void ActorUnkMABC::func_ov092_02174798(void) {}
ARM void ActorUnkMABC::func_ov092_021748b8(void) {}
ARM void ActorUnkMABC::func_ov092_021748e4(void) {}
ARM void ActorUnkMABC::func_ov092_02174ab4(void) {}
ARM void ActorUnkMABC::func_ov092_02174be8(void) {}
ARM void ActorUnkMABC::func_ov092_02174d9c(void) {}
ARM void ActorUnkMABC::func_ov092_02174f18(void) {}
ARM void ActorUnkMABC::func_ov092_02175134(void) {}
ARM void ActorUnkMABC::func_ov092_021751e4(void) {}
ARM void ActorUnkMABC::func_ov092_02175204(void) {}
ARM void ActorUnkMABC::func_ov092_0217522c(void) {}
