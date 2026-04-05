//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNICO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkNICO ActorTypeUnkNICO::gInstance;

ARM ActorTypeUnkNICO *ActorTypeUnkNICO::GetInstance() {
    return &ActorTypeUnkNICO::gInstance;
}

ARM Actor *ActorTypeUnkNICO::Create() {
    return new(HeapIndex_2) ActorUnkNICO();
}

ARM ActorTypeUnkNICO::ActorTypeUnkNICO() :
    ActorType(ActorId_NICO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkNICO::ActorUnkNICO() {}

ARM void ActorUnkNICO::func_ov062_021583f0(void) {}
ARM void ActorUnkNICO::func_ov062_0215851c(void) {}
ARM void ActorUnkNICO::func_ov062_02158530(void) {}
ARM void ActorUnkNICO::func_ov062_02158614(void) {}
ARM void ActorUnkNICO::func_ov062_0215863c(void) {}
ARM void ActorUnkNICO::func_ov062_0215866c(void) {}
ARM void ActorUnkNICO::func_ov062_02158690(void) {}
ARM void ActorUnkNICO::func_ov062_021586bc(void) {}
ARM void ActorUnkNICO::func_ov062_021586d8(void) {}
ARM void ActorUnkNICO::func_ov062_02158700(void) {}
ARM void ActorUnkNICO::func_ov062_02158720(void) {}
