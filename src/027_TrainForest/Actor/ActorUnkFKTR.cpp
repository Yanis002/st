//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFKTR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFKTR ActorTypeUnkFKTR::gInstance;

ARM ActorTypeUnkFKTR *ActorTypeUnkFKTR::GetInstance() {
    return &ActorTypeUnkFKTR::gInstance;
}

ARM Actor *ActorTypeUnkFKTR::Create() {
    return new(HeapIndex_2) ActorUnkFKTR();
}

ARM ActorTypeUnkFKTR::ActorTypeUnkFKTR() :
    ActorType(ActorId_FKTR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFKTR::ActorUnkFKTR() {}

ARM void ActorUnkFKTR::func_ov027_02145144(void) {}
ARM void ActorUnkFKTR::func_ov027_02145154(void) {}
ARM void ActorUnkFKTR::func_ov027_02145358(void) {}
ARM void ActorUnkFKTR::func_ov027_02145398(void) {}
ARM void ActorUnkFKTR::func_ov027_021453ac(void) {}
ARM void ActorUnkFKTR::func_ov027_02145400(void) {}
ARM void ActorUnkFKTR::func_ov027_02145414(void) {}
ARM void ActorUnkFKTR::func_ov027_02145500(void) {}
ARM void ActorUnkFKTR::func_ov027_021455f4(void) {}
ARM void ActorUnkFKTR::func_ov027_02145644(void) {}
ARM void ActorUnkFKTR::func_ov027_02145768(void) {}
ARM void ActorUnkFKTR::func_ov027_02145788(void) {}
ARM void ActorUnkFKTR::func_ov027_021457a8(void) {}
ARM void ActorUnkFKTR::func_ov027_021458ec(void) {}
ARM void ActorUnkFKTR::func_ov027_02145a34(void) {}
ARM void ActorUnkFKTR::func_ov027_02145a38(void) {}
ARM void ActorUnkFKTR::func_ov027_02145d4c(void) {}
