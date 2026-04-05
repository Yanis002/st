//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOLDM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkOLDM ActorTypeUnkOLDM::gInstance;

ARM ActorTypeUnkOLDM *ActorTypeUnkOLDM::GetInstance() {
    return &ActorTypeUnkOLDM::gInstance;
}

ARM Actor *ActorTypeUnkOLDM::Create() {
    return new(HeapIndex_2) ActorUnkOLDM();
}

ARM ActorTypeUnkOLDM::ActorTypeUnkOLDM() :
    ActorType(ActorId_OLDM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkOLDM::ActorUnkOLDM() {}

ARM void ActorUnkOLDM::func_ov060_0215cf88(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d0bc(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d124(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d2a0(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d2d0(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d304(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d348(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d360(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d378(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d390(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d39c(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d3a8(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d3ac(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d3bc(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d3c0(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d468(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d490(void) {}
ARM void ActorUnkOLDM::func_ov060_0215d4c0(void) {}
