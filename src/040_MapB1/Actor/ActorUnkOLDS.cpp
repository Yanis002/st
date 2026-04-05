//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOLDS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkOLDS ActorTypeUnkOLDS::gInstance;

ARM ActorTypeUnkOLDS *ActorTypeUnkOLDS::GetInstance() {
    return &ActorTypeUnkOLDS::gInstance;
}

ARM Actor *ActorTypeUnkOLDS::Create() {
    return new(HeapIndex_2) ActorUnkOLDS();
}

ARM ActorTypeUnkOLDS::ActorTypeUnkOLDS() :
    ActorType(ActorId_OLDS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkOLDS::ActorUnkOLDS() {}

ARM void ActorUnkOLDS::func_ov040_0212cd60(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cd8c(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cee4(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cefc(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cf34(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cf5c(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cf74(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cfac(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cfb8(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cfd4(void) {}
ARM void ActorUnkOLDS::func_ov040_0212d040(void) {}
ARM void ActorUnkOLDS::func_ov040_0212d0b0(void) {}
ARM void ActorUnkOLDS::func_ov040_0212d0d8(void) {}
ARM void ActorUnkOLDS::func_ov040_0212d108(void) {}
