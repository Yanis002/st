//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMLCK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMLCK ActorTypeUnkMLCK::gInstance;

ARM ActorTypeUnkMLCK *ActorTypeUnkMLCK::GetInstance() {
    return &ActorTypeUnkMLCK::gInstance;
}

ARM Actor *ActorTypeUnkMLCK::Create() {
    return new(HeapIndex_2) ActorUnkMLCK();
}

ARM ActorTypeUnkMLCK::ActorTypeUnkMLCK() :
    ActorType(ActorId_MLCK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMLCK::ActorUnkMLCK() {}

ARM void ActorUnkMLCK::func_ov031_020fabb4(void) {}
ARM void ActorUnkMLCK::func_ov031_020fac64(void) {}
ARM void ActorUnkMLCK::func_ov031_020fad3c(void) {}
ARM void ActorUnkMLCK::func_ov031_020fad88(void) {}
ARM void ActorUnkMLCK::func_ov031_020fada8(void) {}
ARM void ActorUnkMLCK::func_ov031_020fadb4(void) {}
ARM void ActorUnkMLCK::func_ov031_020fae08(void) {}
ARM void ActorUnkMLCK::func_ov031_020fae20(void) {}
ARM void ActorUnkMLCK::func_ov031_020faeb0(void) {}
ARM void ActorUnkMLCK::func_ov031_020faeb4(void) {}
ARM void ActorUnkMLCK::func_ov031_020faf04(void) {}
ARM void ActorUnkMLCK::func_ov031_020faf24(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb104(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb11c(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb184(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb1b0(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb1cc(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb1e8(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb204(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb250(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb278(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb298(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb2ac(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb2bc(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb2cc(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb2dc(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb2ec(void) {}
ARM void ActorUnkMLCK::func_ov031_020fb2fc(void) {}
