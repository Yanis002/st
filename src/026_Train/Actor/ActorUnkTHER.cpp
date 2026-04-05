//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTHER.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTHER ActorTypeUnkTHER::gInstance;

ARM ActorTypeUnkTHER *ActorTypeUnkTHER::GetInstance() {
    return &ActorTypeUnkTHER::gInstance;
}

ARM Actor *ActorTypeUnkTHER::Create() {
    return new(HeapIndex_2) ActorUnkTHER();
}

ARM ActorTypeUnkTHER::ActorTypeUnkTHER() :
    ActorType(ActorId_THER) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTHER::ActorUnkTHER() {}

ARM void ActorUnkTHER::func_ov026_02111108(void) {}
ARM void ActorUnkTHER::func_ov026_0211117c(void) {}
ARM void ActorUnkTHER::func_ov026_021111a4(void) {}
ARM void ActorUnkTHER::func_ov026_021111fc(void) {}
ARM void ActorUnkTHER::func_ov026_02111280(void) {}
ARM void ActorUnkTHER::func_ov026_021112f0(void) {}
ARM void ActorUnkTHER::func_ov026_0211130c(void) {}
ARM void ActorUnkTHER::func_ov026_02111320(void) {}
