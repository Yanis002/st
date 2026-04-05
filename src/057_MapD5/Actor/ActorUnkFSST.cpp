//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFSST.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFSST ActorTypeUnkFSST::gInstance;

ARM ActorTypeUnkFSST *ActorTypeUnkFSST::GetInstance() {
    return &ActorTypeUnkFSST::gInstance;
}

ARM Actor *ActorTypeUnkFSST::Create() {
    return new(HeapIndex_2) ActorUnkFSST();
}

ARM ActorTypeUnkFSST::ActorTypeUnkFSST() :
    ActorType(ActorId_FSST) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFSST::ActorUnkFSST() {}

ARM void ActorUnkFSST::func_ov057_0213855c(void) {}
ARM void ActorUnkFSST::func_ov057_02138734(void) {}
ARM void ActorUnkFSST::func_ov057_02138748(void) {}
ARM void ActorUnkFSST::func_ov057_0213892c(void) {}
ARM void ActorUnkFSST::func_ov057_02138950(void) {}
ARM void ActorUnkFSST::func_ov057_02138b84(void) {}
ARM void ActorUnkFSST::func_ov057_02138bd0(void) {}
ARM void ActorUnkFSST::func_ov057_02138c50(void) {}
ARM void ActorUnkFSST::func_ov057_02138d04(void) {}
ARM void ActorUnkFSST::func_ov057_02138dc8(void) {}
ARM void ActorUnkFSST::func_ov057_02138e70(void) {}
ARM void ActorUnkFSST::func_ov057_02138f6c(void) {}
ARM void ActorUnkFSST::func_ov057_02138f98(void) {}
ARM void ActorUnkFSST::func_ov057_02139224(void) {}
ARM void ActorUnkFSST::func_ov057_02139284(void) {}
ARM void ActorUnkFSST::func_ov057_0213943c(void) {}
ARM void ActorUnkFSST::func_ov057_021394ac(void) {}
ARM void ActorUnkFSST::func_ov057_021396c0(void) {}
ARM void ActorUnkFSST::func_ov057_02139940(void) {}
ARM void ActorUnkFSST::func_ov057_02139bbc(void) {}
ARM void ActorUnkFSST::func_ov057_02139be0(void) {}
ARM void ActorUnkFSST::func_ov057_02139c08(void) {}
ARM void ActorUnkFSST::func_ov057_02139c20(void) {}
ARM void ActorUnkFSST::func_ov057_02139d70(void) {}
ARM void ActorUnkFSST::func_ov057_02139d84(void) {}
ARM void ActorUnkFSST::func_ov057_02139de4(void) {}
ARM void ActorUnkFSST::func_ov057_02139e4c(void) {}
