//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOVT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGOVT ActorTypeUnkGOVT::gInstance;

ARM ActorTypeUnkGOVT *ActorTypeUnkGOVT::GetInstance() {
    return &ActorTypeUnkGOVT::gInstance;
}

ARM Actor *ActorTypeUnkGOVT::Create() {
    return new(HeapIndex_2) ActorUnkGOVT();
}

ARM ActorTypeUnkGOVT::ActorTypeUnkGOVT() :
    ActorType(ActorId_GOVT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGOVT::ActorUnkGOVT() {}

ARM void ActorUnkGOVT::func_ov030_0214ce94(void) {}
ARM void ActorUnkGOVT::func_ov030_0214ced8(void) {}
ARM void ActorUnkGOVT::func_ov030_0214cf14(void) {}
ARM void ActorUnkGOVT::func_ov030_0214cf58(void) {}
ARM void ActorUnkGOVT::func_ov030_0214cf9c(void) {}
ARM void ActorUnkGOVT::func_ov030_0214cfe0(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d018(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d050(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d054(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d078(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d278(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d594(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d5d4(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d5d8(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d604(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d624(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d644(void) {}
