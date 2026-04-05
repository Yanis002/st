//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRER.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTRER ActorTypeUnkTRER::gInstance;

ARM ActorTypeUnkTRER *ActorTypeUnkTRER::GetInstance() {
    return &ActorTypeUnkTRER::gInstance;
}

ARM Actor *ActorTypeUnkTRER::Create() {
    return new(HeapIndex_2) ActorUnkTRER();
}

ARM ActorTypeUnkTRER::ActorTypeUnkTRER() :
    ActorType(ActorId_TRER) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTRER::ActorUnkTRER() {}

ARM void ActorUnkTRER::func_ov027_02144894(void) {}
ARM void ActorUnkTRER::func_ov027_02144944(void) {}
ARM void ActorUnkTRER::func_ov027_021449dc(void) {}
ARM void ActorUnkTRER::func_ov027_02144a18(void) {}
ARM void ActorUnkTRER::func_ov027_02144cf0(void) {}
ARM void ActorUnkTRER::func_ov027_02144d48(void) {}
ARM void ActorUnkTRER::func_ov027_02144db8(void) {}
ARM void ActorUnkTRER::func_ov027_02144ecc(void) {}
ARM void ActorUnkTRER::func_ov027_02144ed0(void) {}
ARM void ActorUnkTRER::func_ov027_02144f48(void) {}
ARM void ActorUnkTRER::func_ov027_02144f4c(void) {}
ARM void ActorUnkTRER::func_ov027_02144f58(void) {}
ARM void ActorUnkTRER::func_ov027_02144f5c(void) {}
ARM void ActorUnkTRER::func_ov027_02144f9c(void) {}
ARM void ActorUnkTRER::func_ov027_0214504c(void) {}
ARM void ActorUnkTRER::func_ov027_0214506c(void) {}
ARM void ActorUnkTRER::func_ov027_02145094(void) {}
