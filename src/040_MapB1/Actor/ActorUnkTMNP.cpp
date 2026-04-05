//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTMNP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTMNP ActorTypeUnkTMNP::gInstance;

ARM ActorTypeUnkTMNP *ActorTypeUnkTMNP::GetInstance() {
    return &ActorTypeUnkTMNP::gInstance;
}

ARM Actor *ActorTypeUnkTMNP::Create() {
    return new(HeapIndex_2) ActorUnkTMNP();
}

ARM ActorTypeUnkTMNP::ActorTypeUnkTMNP() :
    ActorType(ActorId_TMNP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTMNP::ActorUnkTMNP() {}

ARM void ActorUnkTMNP::func_ov040_0212d1b8(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d1e0(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d23c(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d248(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d268(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d280(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d298(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d2c8(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d2e8(void) {}
ARM void ActorUnkTMNP::func_ov040_0212d310(void) {}
