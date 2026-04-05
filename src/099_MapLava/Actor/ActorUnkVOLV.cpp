//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkVOLV.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkVOLV ActorTypeUnkVOLV::gInstance;

ARM ActorTypeUnkVOLV *ActorTypeUnkVOLV::GetInstance() {
    return &ActorTypeUnkVOLV::gInstance;
}

ARM Actor *ActorTypeUnkVOLV::Create() {
    return new(HeapIndex_2) ActorUnkVOLV();
}

ARM ActorTypeUnkVOLV::ActorTypeUnkVOLV() :
    ActorType(ActorId_VOLV) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkVOLV::ActorUnkVOLV() {}

ARM void ActorUnkVOLV::func_ov099_021818e0(void) {}
ARM void ActorUnkVOLV::func_ov099_021819fc(void) {}
ARM void ActorUnkVOLV::func_ov099_02181ae8(void) {}
ARM void ActorUnkVOLV::func_ov099_02181b14(void) {}
ARM void ActorUnkVOLV::func_ov099_02181b28(void) {}
ARM void ActorUnkVOLV::func_ov099_02181b48(void) {}
ARM void ActorUnkVOLV::func_ov099_02181b78(void) {}
ARM void ActorUnkVOLV::func_ov099_02181bb0(void) {}
