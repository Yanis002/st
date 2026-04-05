//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGRCF.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkGRCF ActorTypeUnkGRCF::gInstance;

ARM ActorTypeUnkGRCF *ActorTypeUnkGRCF::GetInstance() {
    return &ActorTypeUnkGRCF::gInstance;
}

ARM Actor *ActorTypeUnkGRCF::Create() {
    return new(HeapIndex_2) ActorUnkGRCF();
}

ARM ActorTypeUnkGRCF::ActorTypeUnkGRCF() :
    ActorType(ActorId_GRCF) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkGRCF::ActorUnkGRCF() {}

ARM void ActorUnkGRCF::func_ov038_0211ecbc(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ecdc(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ed38(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ee34(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ee48(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ee64(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ee78(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ee84(void) {}
ARM void ActorUnkGRCF::func_ov038_0211eea8(void) {}
ARM void ActorUnkGRCF::func_ov038_0211eedc(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ef08(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ef88(void) {}
ARM void ActorUnkGRCF::func_ov038_0211efec(void) {}
ARM void ActorUnkGRCF::func_ov038_0211f03c(void) {}
ARM void ActorUnkGRCF::func_ov038_0211f044(void) {}
ARM void ActorUnkGRCF::func_ov038_0211f064(void) {}
ARM void ActorUnkGRCF::func_ov038_0211f08c(void) {}
