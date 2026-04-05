//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBANI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBANI ActorTypeUnkBANI::gInstance;

ARM ActorTypeUnkBANI *ActorTypeUnkBANI::GetInstance() {
    return &ActorTypeUnkBANI::gInstance;
}

ARM Actor *ActorTypeUnkBANI::Create() {
    return new(HeapIndex_2) ActorUnkBANI();
}

ARM ActorTypeUnkBANI::ActorTypeUnkBANI() :
    ActorType(ActorId_BANI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBANI::ActorUnkBANI() {}

ARM void ActorUnkBANI::func_ov069_02157f2c(void) {}
ARM void ActorUnkBANI::func_ov069_02158144(void) {}
ARM void ActorUnkBANI::func_ov069_02158158(void) {}
ARM void ActorUnkBANI::func_ov069_0215819c(void) {}
ARM void ActorUnkBANI::func_ov069_021581c4(void) {}
ARM void ActorUnkBANI::func_ov069_021581f4(void) {}
ARM void ActorUnkBANI::func_ov069_02158218(void) {}
ARM void ActorUnkBANI::func_ov069_021582d4(void) {}
ARM void ActorUnkBANI::func_ov069_021582fc(void) {}
ARM void ActorUnkBANI::func_ov069_02158324(void) {}
ARM void ActorUnkBANI::func_ov069_02158358(void) {}
ARM void ActorUnkBANI::func_ov069_021583e4(void) {}
ARM void ActorUnkBANI::func_ov069_02158638(void) {}
ARM void ActorUnkBANI::func_ov069_0215871c(void) {}
ARM void ActorUnkBANI::func_ov069_02158748(void) {}
ARM void ActorUnkBANI::func_ov069_021587a0(void) {}
ARM void ActorUnkBANI::func_ov069_02158d00(void) {}
ARM void ActorUnkBANI::func_ov069_02158d24(void) {}
ARM void ActorUnkBANI::func_ov069_02158d50(void) {}
ARM void ActorUnkBANI::func_ov069_02158d6c(void) {}
ARM void ActorUnkBANI::func_ov069_02158d94(void) {}
ARM void ActorUnkBANI::func_ov069_02158db4(void) {}
