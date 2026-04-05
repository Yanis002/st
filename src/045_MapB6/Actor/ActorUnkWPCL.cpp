//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWPCL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWPCL ActorTypeUnkWPCL::gInstance;

ARM ActorTypeUnkWPCL *ActorTypeUnkWPCL::GetInstance() {
    return &ActorTypeUnkWPCL::gInstance;
}

ARM Actor *ActorTypeUnkWPCL::Create() {
    return new(HeapIndex_2) ActorUnkWPCL();
}

ARM ActorTypeUnkWPCL::ActorTypeUnkWPCL() :
    ActorType(ActorId_WPCL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWPCL::ActorUnkWPCL() {}

ARM void ActorUnkWPCL::func_ov045_02128f14(void) {}
ARM void ActorUnkWPCL::func_ov045_02128f58(void) {}
ARM void ActorUnkWPCL::func_ov045_02128fec(void) {}
ARM void ActorUnkWPCL::func_ov045_0212900c(void) {}
