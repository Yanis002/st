//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMRDL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMRDL ActorTypeUnkMRDL::gInstance;

ARM ActorTypeUnkMRDL *ActorTypeUnkMRDL::GetInstance() {
    return &ActorTypeUnkMRDL::gInstance;
}

ARM Actor *ActorTypeUnkMRDL::Create() {
    return new(HeapIndex_2) ActorUnkMRDL();
}

ARM ActorTypeUnkMRDL::ActorTypeUnkMRDL() :
    ActorType(ActorId_MRDL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMRDL::ActorUnkMRDL() {}

ARM void ActorUnkMRDL::func_ov075_0215df94(void) {}
ARM void ActorUnkMRDL::func_ov075_0215dff4(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e008(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e044(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e050(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e240(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e254(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e270(void) {}
