//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBDS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBDS ActorTypeUnkRBDS::gInstance;

ARM ActorTypeUnkRBDS *ActorTypeUnkRBDS::GetInstance() {
    return &ActorTypeUnkRBDS::gInstance;
}

ARM Actor *ActorTypeUnkRBDS::Create() {
    return new(HeapIndex_2) ActorUnkRBDS();
}

ARM ActorTypeUnkRBDS::ActorTypeUnkRBDS() :
    ActorType(ActorId_RBDS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBDS::ActorUnkRBDS() {}

ARM void ActorUnkRBDS::func_ov087_021611d0(void) {}
ARM void ActorUnkRBDS::func_ov087_02161244(void) {}
ARM void ActorUnkRBDS::func_ov087_021612b4(void) {}
ARM void ActorUnkRBDS::func_ov087_021612b8(void) {}
ARM void ActorUnkRBDS::func_ov087_021612cc(void) {}
ARM void ActorUnkRBDS::func_ov087_021612e0(void) {}
ARM void ActorUnkRBDS::func_ov087_021612ec(void) {}
ARM void ActorUnkRBDS::func_ov087_0216133c(void) {}
ARM void ActorUnkRBDS::func_ov087_02161364(void) {}
ARM void ActorUnkRBDS::func_ov087_02161394(void) {}
