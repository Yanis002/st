//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFIFI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFIFI ActorTypeUnkFIFI::gInstance;

ARM ActorTypeUnkFIFI *ActorTypeUnkFIFI::GetInstance() {
    return &ActorTypeUnkFIFI::gInstance;
}

ARM Actor *ActorTypeUnkFIFI::Create() {
    return new(HeapIndex_2) ActorUnkFIFI();
}

ARM ActorTypeUnkFIFI::ActorTypeUnkFIFI() :
    ActorType(ActorId_FIFI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFIFI::ActorUnkFIFI() {}

ARM void ActorUnkFIFI::func_ov035_0211e518(void) {}
ARM void ActorUnkFIFI::func_ov035_0211e568(void) {}
ARM void ActorUnkFIFI::func_ov035_0211e59c(void) {}
ARM void ActorUnkFIFI::func_ov035_0211e5d8(void) {}
ARM void ActorUnkFIFI::func_ov035_0211e6d0(void) {}
