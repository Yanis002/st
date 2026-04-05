//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWTM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSWTM ActorTypeUnkSWTM::gInstance;

ARM ActorTypeUnkSWTM *ActorTypeUnkSWTM::GetInstance() {
    return &ActorTypeUnkSWTM::gInstance;
}

ARM Actor *ActorTypeUnkSWTM::Create() {
    return new(HeapIndex_2) ActorUnkSWTM();
}

ARM ActorTypeUnkSWTM::ActorTypeUnkSWTM() :
    ActorType(ActorId_SWTM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSWTM::ActorUnkSWTM() {}

ARM void ActorUnkSWTM::func_ov000_0209ad00(void) {}
ARM void ActorUnkSWTM::func_ov000_0209ad5c(void) {}
ARM void ActorUnkSWTM::func_ov000_0209ada4(void) {}
ARM void ActorUnkSWTM::func_ov000_0209adf4(void) {}
ARM void ActorUnkSWTM::func_ov000_0209ae68(void) {}
ARM void ActorUnkSWTM::func_ov000_0209af50(void) {}
ARM void ActorUnkSWTM::func_ov000_0209af54(void) {}
ARM void ActorUnkSWTM::func_ov000_0209afe4(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b038(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b160(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b184(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b1d0(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b218(void) {}
THUMB void ActorUnkSWTM::func_ov000_0209b22c(void) {}
THUMB void ActorUnkSWTM::func_ov000_0209b248(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b264(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b298(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b420(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b5ec(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b620(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b804(void) {}
ARM void ActorUnkSWTM::func_ov000_0209b9ac(void) {}
ARM void ActorUnkSWTM::func_ov000_0209ba04(void) {}
ARM void ActorUnkSWTM::func_ov000_0209bbb8(void) {}
ARM void ActorUnkSWTM::func_ov000_0209bce8(void) {}
ARM void ActorUnkSWTM::func_ov000_0209bd28(void) {}
ARM void ActorUnkSWTM::func_ov000_0209bf28(void) {}
ARM void ActorUnkSWTM::func_ov000_0209bf54(void) {}
