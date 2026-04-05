//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTKYT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTKYT ActorTypeUnkTKYT::gInstance;

ARM ActorTypeUnkTKYT *ActorTypeUnkTKYT::GetInstance() {
    return &ActorTypeUnkTKYT::gInstance;
}

ARM Actor *ActorTypeUnkTKYT::Create() {
    return new(HeapIndex_2) ActorUnkTKYT();
}

ARM ActorTypeUnkTKYT::ActorTypeUnkTKYT() :
    ActorType(ActorId_TKYT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTKYT::ActorUnkTKYT() {}

ARM void ActorUnkTKYT::func_ov096_0217abe4(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ac0c(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ac20(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ac3c(void) {}
ARM void ActorUnkTKYT::func_ov096_0217acdc(void) {}
ARM void ActorUnkTKYT::func_ov096_0217acf8(void) {}
ARM void ActorUnkTKYT::func_ov096_0217acfc(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ad00(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ad04(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ad08(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ad1c(void) {}
