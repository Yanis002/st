//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFRL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFRL ActorTypeUnkEFRL::gInstance;

ARM ActorTypeUnkEFRL *ActorTypeUnkEFRL::GetInstance() {
    return &ActorTypeUnkEFRL::gInstance;
}

ARM Actor *ActorTypeUnkEFRL::Create() {
    return new(HeapIndex_2) ActorUnkEFRL();
}

ARM ActorTypeUnkEFRL::ActorTypeUnkEFRL() :
    ActorType(ActorId_EFRL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFRL::ActorUnkEFRL() {}

ARM void ActorUnkEFRL::func_ov099_021814bc(void) {}
ARM void ActorUnkEFRL::func_ov099_021814d0(void) {}
ARM void ActorUnkEFRL::func_ov099_021815fc(void) {}
ARM void ActorUnkEFRL::func_ov099_021816e8(void) {}
ARM void ActorUnkEFRL::func_ov099_02181748(void) {}
ARM void ActorUnkEFRL::func_ov099_0218175c(void) {}
ARM void ActorUnkEFRL::func_ov099_021817b4(void) {}
ARM void ActorUnkEFRL::func_ov099_021817ec(void) {}
ARM void ActorUnkEFRL::func_ov099_0218181c(void) {}
ARM void ActorUnkEFRL::func_ov099_02181840(void) {}
ARM void ActorUnkEFRL::func_ov099_02181850(void) {}
ARM void ActorUnkEFRL::func_ov099_02181858(void) {}
ARM void ActorUnkEFRL::func_ov099_02181874(void) {}
