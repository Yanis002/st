//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMGAJ.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMGAJ ActorTypeUnkMGAJ::gInstance;

ARM ActorTypeUnkMGAJ *ActorTypeUnkMGAJ::GetInstance() {
    return &ActorTypeUnkMGAJ::gInstance;
}

ARM Actor *ActorTypeUnkMGAJ::Create() {
    return new(HeapIndex_2) ActorUnkMGAJ();
}

ARM ActorTypeUnkMGAJ::ActorTypeUnkMGAJ() :
    ActorType(ActorId_MGAJ) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMGAJ::ActorUnkMGAJ() {}

ARM void ActorUnkMGAJ::func_ov068_0215e5a8(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e6d4(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e76c(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e7ac(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e7b8(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e7e4(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e894(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e8a0(void) {}
ARM void ActorUnkMGAJ::func_ov068_0215e8c8(void) {}
