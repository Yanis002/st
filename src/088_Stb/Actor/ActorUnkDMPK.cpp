//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMPK.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMPK ActorTypeUnkDMPK::gInstance;

ARM ActorTypeUnkDMPK *ActorTypeUnkDMPK::GetInstance() {
    return &ActorTypeUnkDMPK::gInstance;
}

ARM Actor *ActorTypeUnkDMPK::Create() {
    return new(HeapIndex_2) ActorUnkDMPK();
}

ARM ActorTypeUnkDMPK::ActorTypeUnkDMPK() :
    ActorType(ActorId_DMPK) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMPK::ActorUnkDMPK() {}

ARM void ActorUnkDMPK::func_ov088_02170dd8(void) {}
ARM void ActorUnkDMPK::func_ov088_02170e68(void) {}
ARM void ActorUnkDMPK::func_ov088_02170e7c(void) {}
ARM void ActorUnkDMPK::func_ov088_02170fdc(void) {}
ARM void ActorUnkDMPK::func_ov088_02171018(void) {}
ARM void ActorUnkDMPK::func_ov088_02171020(void) {}
ARM void ActorUnkDMPK::func_ov088_02171030(void) {}
ARM void ActorUnkDMPK::func_ov088_02171044(void) {}
ARM void ActorUnkDMPK::func_ov088_02171058(void) {}
ARM void ActorUnkDMPK::func_ov088_02171098(void) {}
ARM void ActorUnkDMPK::func_ov088_021710b8(void) {}
ARM void ActorUnkDMPK::func_ov088_021710d8(void) {}
ARM void ActorUnkDMPK::func_ov088_021710f4(void) {}
ARM void ActorUnkDMPK::func_ov088_0217111c(void) {}
ARM void ActorUnkDMPK::func_ov088_0217114c(void) {}
ARM void ActorUnkDMPK::func_ov088_02171174(void) {}
ARM void ActorUnkDMPK::func_ov088_02171194(void) {}
