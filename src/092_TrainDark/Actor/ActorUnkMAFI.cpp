//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMAFI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMAFI ActorTypeUnkMAFI::gInstance;

ARM ActorTypeUnkMAFI *ActorTypeUnkMAFI::GetInstance() {
    return &ActorTypeUnkMAFI::gInstance;
}

ARM Actor *ActorTypeUnkMAFI::Create() {
    return new(HeapIndex_2) ActorUnkMAFI();
}

ARM ActorTypeUnkMAFI::ActorTypeUnkMAFI() :
    ActorType(ActorId_MAFI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMAFI::ActorUnkMAFI() {}

ARM void ActorUnkMAFI::func_ov092_02176b70(void) {}
ARM void ActorUnkMAFI::func_ov092_02176bf8(void) {}
ARM void ActorUnkMAFI::func_ov092_02176c34(void) {}
ARM void ActorUnkMAFI::func_ov092_02176c70(void) {}
ARM void ActorUnkMAFI::func_ov092_02176d64(void) {}
ARM void ActorUnkMAFI::func_ov092_02176da4(void) {}
ARM void ActorUnkMAFI::func_ov092_02176de0(void) {}
ARM void ActorUnkMAFI::func_ov092_02176de4(void) {}
ARM void ActorUnkMAFI::func_ov092_02176eac(void) {}
ARM void ActorUnkMAFI::func_ov092_02176eb0(void) {}
ARM void ActorUnkMAFI::func_ov092_02176efc(void) {}
ARM void ActorUnkMAFI::func_ov092_02176f78(void) {}
ARM void ActorUnkMAFI::func_ov092_02177000(void) {}
ARM void ActorUnkMAFI::func_ov092_02177040(void) {}
ARM void ActorUnkMAFI::func_ov092_02177074(void) {}
ARM void ActorUnkMAFI::func_ov092_021770a4(void) {}
ARM void ActorUnkMAFI::func_ov092_021770dc(void) {}
