//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLIKE.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkLIKE ActorTypeUnkLIKE::gInstance;

ARM ActorTypeUnkLIKE *ActorTypeUnkLIKE::GetInstance() {
    return &ActorTypeUnkLIKE::gInstance;
}

ARM Actor *ActorTypeUnkLIKE::Create() {
    return new(HeapIndex_2) ActorUnkLIKE();
}

ARM ActorTypeUnkLIKE::ActorTypeUnkLIKE() :
    ActorType(ActorId_LikeLike) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkLIKE::ActorUnkLIKE() {}

ARM void ActorUnkLIKE::func_ov053_02138628(void) {}
ARM void ActorUnkLIKE::func_ov053_02138650(void) {}
ARM void ActorUnkLIKE::func_ov053_0213866c(void) {}
ARM void ActorUnkLIKE::func_ov053_02138690(void) {}
ARM void ActorUnkLIKE::func_ov053_02138788(void) {}
ARM void ActorUnkLIKE::func_ov053_02138ab4(void) {}
ARM void ActorUnkLIKE::func_ov053_02138ac8(void) {}
ARM void ActorUnkLIKE::func_ov053_02138adc(void) {}
ARM void ActorUnkLIKE::func_ov053_02138af0(void) {}
ARM void ActorUnkLIKE::func_ov053_02138bb0(void) {}
ARM void ActorUnkLIKE::func_ov053_02138c78(void) {}
ARM void ActorUnkLIKE::func_ov053_02138cf8(void) {}
ARM void ActorUnkLIKE::func_ov053_021392c4(void) {}
ARM void ActorUnkLIKE::func_ov053_0213942c(void) {}
