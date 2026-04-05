//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMET.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDMET ActorTypeUnkDMET::gInstance;

ARM ActorTypeUnkDMET *ActorTypeUnkDMET::GetInstance() {
    return &ActorTypeUnkDMET::gInstance;
}

ARM Actor *ActorTypeUnkDMET::Create() {
    return new(HeapIndex_2) ActorUnkDMET();
}

ARM ActorTypeUnkDMET::ActorTypeUnkDMET() :
    ActorType(ActorId_DMET) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDMET::ActorUnkDMET() {}

ARM void ActorUnkDMET::func_ov088_02171fe8(void) {}
ARM void ActorUnkDMET::func_ov088_0217205c(void) {}
ARM void ActorUnkDMET::func_ov088_02172070(void) {}
ARM void ActorUnkDMET::func_ov088_021720c4(void) {}
ARM void ActorUnkDMET::func_ov088_021720d4(void) {}
ARM void ActorUnkDMET::func_ov088_021720e8(void) {}
ARM void ActorUnkDMET::func_ov088_021720fc(void) {}
ARM void ActorUnkDMET::func_ov088_0217213c(void) {}
ARM void ActorUnkDMET::func_ov088_02172148(void) {}
ARM void ActorUnkDMET::func_ov088_02172164(void) {}
ARM void ActorUnkDMET::func_ov088_0217218c(void) {}
ARM void ActorUnkDMET::func_ov088_021721bc(void) {}
