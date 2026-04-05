//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkQKSD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkQKSD ActorTypeUnkQKSD::gInstance;

ARM ActorTypeUnkQKSD *ActorTypeUnkQKSD::GetInstance() {
    return &ActorTypeUnkQKSD::gInstance;
}

ARM Actor *ActorTypeUnkQKSD::Create() {
    return new(HeapIndex_2) ActorUnkQKSD();
}

ARM ActorTypeUnkQKSD::ActorTypeUnkQKSD() :
    ActorType(ActorId_QKSD) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkQKSD::ActorUnkQKSD() {}

ARM void ActorUnkQKSD::func_ov086_0215bb8c(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bc50(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bc64(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bcc8(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bcdc(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bcf0(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bd10(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bd2c(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bd54(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bd84(void) {}
