//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLBCK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkLBCK ActorTypeUnkLBCK::gInstance;

ARM ActorTypeUnkLBCK *ActorTypeUnkLBCK::GetInstance() {
    return &ActorTypeUnkLBCK::gInstance;
}

ARM Actor *ActorTypeUnkLBCK::Create() {
    return new(HeapIndex_2) ActorUnkLBCK();
}

ARM ActorTypeUnkLBCK::ActorTypeUnkLBCK() :
    ActorType(ActorId_LBCK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkLBCK::ActorUnkLBCK() {}

ARM void ActorUnkLBCK::func_ov062_02159044(void) {}
ARM void ActorUnkLBCK::func_ov062_02159078(void) {}
ARM void ActorUnkLBCK::func_ov062_021590a4(void) {}
ARM void ActorUnkLBCK::func_ov062_02159248(void) {}
ARM void ActorUnkLBCK::func_ov062_0215925c(void) {}
ARM void ActorUnkLBCK::func_ov062_02159270(void) {}
ARM void ActorUnkLBCK::func_ov062_0215927c(void) {}
ARM void ActorUnkLBCK::func_ov062_02159618(void) {}
ARM void ActorUnkLBCK::func_ov062_0215963c(void) {}
ARM void ActorUnkLBCK::func_ov062_021596e0(void) {}
ARM void ActorUnkLBCK::func_ov062_02159940(void) {}
ARM void ActorUnkLBCK::func_ov062_0215995c(void) {}
ARM void ActorUnkLBCK::func_ov062_02159978(void) {}
ARM void ActorUnkLBCK::func_ov062_021599a8(void) {}
ARM void ActorUnkLBCK::func_ov062_021599e0(void) {}
