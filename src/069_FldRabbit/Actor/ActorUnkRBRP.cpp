//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBRP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBRP ActorTypeUnkRBRP::gInstance;

ARM ActorTypeUnkRBRP *ActorTypeUnkRBRP::GetInstance() {
    return &ActorTypeUnkRBRP::gInstance;
}

ARM Actor *ActorTypeUnkRBRP::Create() {
    return new(HeapIndex_2) ActorUnkRBRP();
}

ARM ActorTypeUnkRBRP::ActorTypeUnkRBRP() :
    ActorType(ActorId_RBRP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBRP::ActorUnkRBRP() {}

ARM void ActorUnkRBRP::func_ov069_0215a2cc(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a41c(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a430(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a444(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a474(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a4ac(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a50c(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a548(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a5c8(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a5d8(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a5dc(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a618(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a694(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a720(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a72c(void) {}
ARM void ActorUnkRBRP::func_ov069_0215a75c(void) {}
