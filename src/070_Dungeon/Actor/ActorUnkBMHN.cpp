//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBMHN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBMHN ActorTypeUnkBMHN::gInstance;

ARM ActorTypeUnkBMHN *ActorTypeUnkBMHN::GetInstance() {
    return &ActorTypeUnkBMHN::gInstance;
}

ARM Actor *ActorTypeUnkBMHN::Create() {
    return new(HeapIndex_2) ActorUnkBMHN();
}

ARM ActorTypeUnkBMHN::ActorTypeUnkBMHN() :
    ActorType(ActorId_BMHN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBMHN::ActorUnkBMHN() {}

ARM void ActorUnkBMHN::func_ov070_02143628(void) {}
ARM void ActorUnkBMHN::func_ov070_02143674(void) {}
ARM void ActorUnkBMHN::func_ov070_02143688(void) {}
ARM void ActorUnkBMHN::func_ov070_021436a4(void) {}
ARM void ActorUnkBMHN::func_ov070_021436b8(void) {}
ARM void ActorUnkBMHN::func_ov070_021436d8(void) {}
ARM void ActorUnkBMHN::func_ov070_021436dc(void) {}
ARM void ActorUnkBMHN::func_ov070_0214375c(void) {}
ARM void ActorUnkBMHN::func_ov070_021437d0(void) {}
ARM void ActorUnkBMHN::func_ov070_021438e8(void) {}
ARM void ActorUnkBMHN::func_ov070_02143920(void) {}
ARM void ActorUnkBMHN::func_ov070_02143958(void) {}
