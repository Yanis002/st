//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOFSW.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkOFSW ActorTypeUnkOFSW::gInstance;

ARM ActorTypeUnkOFSW *ActorTypeUnkOFSW::GetInstance() {
    return &ActorTypeUnkOFSW::gInstance;
}

ARM Actor *ActorTypeUnkOFSW::Create() {
    return new(HeapIndex_2) ActorUnkOFSW();
}

ARM ActorTypeUnkOFSW::ActorTypeUnkOFSW() :
    ActorType(ActorId_OFSW) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkOFSW::ActorUnkOFSW() {}

ARM void ActorUnkOFSW::func_ov077_0215ab24(void) {}
ARM void ActorUnkOFSW::func_ov077_0215ab4c(void) {}
ARM void ActorUnkOFSW::func_ov077_0215ab6c(void) {}
ARM void ActorUnkOFSW::func_ov077_0215abc4(void) {}
ARM void ActorUnkOFSW::func_ov077_0215abd8(void) {}
ARM void ActorUnkOFSW::func_ov077_0215abec(void) {}
