//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDKTR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDKTR ActorTypeUnkDKTR::gInstance;

ARM ActorTypeUnkDKTR *ActorTypeUnkDKTR::GetInstance() {
    return &ActorTypeUnkDKTR::gInstance;
}

ARM Actor *ActorTypeUnkDKTR::Create() {
    return new(HeapIndex_2) ActorUnkDKTR();
}

ARM ActorTypeUnkDKTR::ActorTypeUnkDKTR() :
    ActorType(ActorId_DKTR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDKTR::ActorUnkDKTR() {}

ARM void ActorUnkDKTR::func_ov026_0212b958(void) {}
ARM void ActorUnkDKTR::func_ov026_0212b9b4(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bb68(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bbf8(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bc90(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bc98(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bda0(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bdc0(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bde0(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bfec(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c134(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c138(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c2a8(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c398(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c3c8(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c3f4(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c478(void) {}
