//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRNTN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRNTN ActorTypeUnkRNTN::gInstance;

ARM ActorTypeUnkRNTN *ActorTypeUnkRNTN::GetInstance() {
    return &ActorTypeUnkRNTN::gInstance;
}

ARM Actor *ActorTypeUnkRNTN::Create() {
    return new(HeapIndex_2) ActorUnkRNTN();
}

ARM ActorTypeUnkRNTN::ActorTypeUnkRNTN() :
    ActorType(ActorId_RNTN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRNTN::ActorUnkRNTN() {}

ARM void ActorUnkRNTN::func_ov086_0215bdf0(void) {}
ARM void ActorUnkRNTN::func_ov086_0215bfb4(void) {}
ARM void ActorUnkRNTN::func_ov086_0215c3cc(void) {}
ARM void ActorUnkRNTN::func_ov086_0215c838(void) {}
ARM void ActorUnkRNTN::func_ov086_0215c8fc(void) {}
ARM void ActorUnkRNTN::func_ov086_0215ccf8(void) {}
ARM void ActorUnkRNTN::func_ov086_0215cdd8(void) {}
ARM void ActorUnkRNTN::func_ov086_0215cf94(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d154(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d394(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d610(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d890(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d9cc(void) {}
ARM void ActorUnkRNTN::func_ov086_0215da14(void) {}
ARM void ActorUnkRNTN::func_ov086_0215da64(void) {}
