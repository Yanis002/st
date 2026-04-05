//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBTIR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBTIR ActorTypeUnkBTIR::gInstance;

ARM ActorTypeUnkBTIR *ActorTypeUnkBTIR::GetInstance() {
    return &ActorTypeUnkBTIR::gInstance;
}

ARM Actor *ActorTypeUnkBTIR::Create() {
    return new(HeapIndex_2) ActorUnkBTIR();
}

ARM ActorTypeUnkBTIR::ActorTypeUnkBTIR() :
    ActorType(ActorId_BTIR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBTIR::ActorUnkBTIR() {}

ARM void ActorUnkBTIR::func_ov021_020f1a84(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1af8(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1cf0(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1e80(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1e94(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1ecc(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1edc(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1fc4(void) {}
ARM void ActorUnkBTIR::func_ov021_020f1fe4(void) {}
ARM void ActorUnkBTIR::func_ov021_020f2030(void) {}
ARM void ActorUnkBTIR::func_ov021_020f2044(void) {}
ARM void ActorUnkBTIR::func_ov021_020f2074(void) {}
ARM void ActorUnkBTIR::func_ov021_020f20c4(void) {}
ARM void ActorUnkBTIR::func_ov021_020f21e4(void) {}
ARM void ActorUnkBTIR::func_ov021_020f2214(void) {}
ARM void ActorUnkBTIR::func_ov021_020f22d4(void) {}
ARM void ActorUnkBTIR::func_ov021_020f23d4(void) {}
ARM void ActorUnkBTIR::func_ov021_020f23e0(void) {}
ARM void ActorUnkBTIR::func_ov021_020f2400(void) {}
ARM void ActorUnkBTIR::func_ov021_020f2428(void) {}
