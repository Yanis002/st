//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBSN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBSN ActorTypeUnkRBSN::gInstance;

ARM ActorTypeUnkRBSN *ActorTypeUnkRBSN::GetInstance() {
    return &ActorTypeUnkRBSN::gInstance;
}

ARM Actor *ActorTypeUnkRBSN::Create() {
    return new(HeapIndex_2) ActorUnkRBSN();
}

ARM ActorTypeUnkRBSN::ActorTypeUnkRBSN() :
    ActorType(ActorId_RBSN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBSN::ActorUnkRBSN() {}

ARM void ActorUnkRBSN::func_ov080_0215ea64(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ead8(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eaec(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb54(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb58(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb6c(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb80(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ebd0(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ebf4(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ec04(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ec0c(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ec28(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ec50(void) {}
