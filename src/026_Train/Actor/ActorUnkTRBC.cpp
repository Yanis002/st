//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRBC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTRBC ActorTypeUnkTRBC::gInstance;

ARM ActorTypeUnkTRBC *ActorTypeUnkTRBC::GetInstance() {
    return &ActorTypeUnkTRBC::gInstance;
}

ARM Actor *ActorTypeUnkTRBC::Create() {
    return new(HeapIndex_2) ActorUnkTRBC();
}

ARM ActorTypeUnkTRBC::ActorTypeUnkTRBC() :
    ActorType(ActorId_TRBC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTRBC::ActorUnkTRBC() {}

ARM void ActorUnkTRBC::func_ov026_0210fe1c(void) {}
ARM void ActorUnkTRBC::func_ov026_0210fec0(void) {}
ARM void ActorUnkTRBC::func_ov026_0210fed8(void) {}
ARM void ActorUnkTRBC::func_ov026_0210ff24(void) {}
ARM void ActorUnkTRBC::func_ov026_02110024(void) {}
ARM void ActorUnkTRBC::func_ov026_0211006c(void) {}
ARM void ActorUnkTRBC::func_ov026_021100ac(void) {}
ARM void ActorUnkTRBC::func_ov026_02110140(void) {}
ARM void ActorUnkTRBC::func_ov026_02110150(void) {}
ARM void ActorUnkTRBC::func_ov026_021101c8(void) {}
ARM void ActorUnkTRBC::func_ov026_021101cc(void) {}
ARM void ActorUnkTRBC::func_ov026_021101f4(void) {}
ARM void ActorUnkTRBC::func_ov026_02110214(void) {}
ARM void ActorUnkTRBC::func_ov026_0211023c(void) {}
