//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFRP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFRP ActorTypeUnkEFRP::gInstance;

ARM ActorTypeUnkEFRP *ActorTypeUnkEFRP::GetInstance() {
    return &ActorTypeUnkEFRP::gInstance;
}

ARM Actor *ActorTypeUnkEFRP::Create() {
    return new(HeapIndex_2) ActorUnkEFRP();
}

ARM ActorTypeUnkEFRP::ActorTypeUnkEFRP() :
    ActorType(ActorId_EFRP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFRP::ActorUnkEFRP() {}

ARM void ActorUnkEFRP::func_ov098_02181910(void) {}
ARM void ActorUnkEFRP::func_ov098_021819a0(void) {}
ARM void ActorUnkEFRP::func_ov098_02181a30(void) {}
ARM void ActorUnkEFRP::func_ov098_02181acc(void) {}
ARM void ActorUnkEFRP::func_ov098_02181b1c(void) {}
ARM void ActorUnkEFRP::func_ov098_02181b30(void) {}
ARM void ActorUnkEFRP::func_ov098_02181b88(void) {}
ARM void ActorUnkEFRP::func_ov098_02181ba4(void) {}
ARM void ActorUnkEFRP::func_ov098_02181d10(void) {}
ARM void ActorUnkEFRP::func_ov098_02181d48(void) {}
ARM void ActorUnkEFRP::func_ov098_02181d78(void) {}
