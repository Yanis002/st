//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMOCT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMOCT ActorTypeUnkMOCT::gInstance;

ARM ActorTypeUnkMOCT *ActorTypeUnkMOCT::GetInstance() {
    return &ActorTypeUnkMOCT::gInstance;
}

ARM Actor *ActorTypeUnkMOCT::Create() {
    return new(HeapIndex_2) ActorUnkMOCT();
}

ARM ActorTypeUnkMOCT::ActorTypeUnkMOCT() :
    ActorType(ActorId_MOCT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMOCT::ActorUnkMOCT() {}

ARM void ActorUnkMOCT::func_ov062_0215a568(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a588(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a590(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a5cc(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a634(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a670(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a6ec(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a700(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a71c(void) {}
