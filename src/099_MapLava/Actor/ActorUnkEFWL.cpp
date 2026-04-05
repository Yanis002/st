//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFWL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFWL ActorTypeUnkEFWL::gInstance;

ARM ActorTypeUnkEFWL *ActorTypeUnkEFWL::GetInstance() {
    return &ActorTypeUnkEFWL::gInstance;
}

ARM Actor *ActorTypeUnkEFWL::Create() {
    return new(HeapIndex_2) ActorUnkEFWL();
}

ARM ActorTypeUnkEFWL::ActorTypeUnkEFWL() :
    ActorType(ActorId_EFWL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFWL::ActorUnkEFWL() {}

ARM void ActorUnkEFWL::func_ov099_02181114(void) {}
ARM void ActorUnkEFWL::func_ov099_02181128(void) {}
ARM void ActorUnkEFWL::func_ov099_02181230(void) {}
ARM void ActorUnkEFWL::func_ov099_021812ec(void) {}
ARM void ActorUnkEFWL::func_ov099_0218133c(void) {}
ARM void ActorUnkEFWL::func_ov099_02181350(void) {}
ARM void ActorUnkEFWL::func_ov099_02181384(void) {}
ARM void ActorUnkEFWL::func_ov099_021813b4(void) {}
ARM void ActorUnkEFWL::func_ov099_021813dc(void) {}
ARM void ActorUnkEFWL::func_ov099_02181400(void) {}
ARM void ActorUnkEFWL::func_ov099_0218142c(void) {}
ARM void ActorUnkEFWL::func_ov099_02181448(void) {}
