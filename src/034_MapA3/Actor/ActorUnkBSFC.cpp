//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBSFC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBSFC ActorTypeUnkBSFC::gInstance;

ARM ActorTypeUnkBSFC *ActorTypeUnkBSFC::GetInstance() {
    return &ActorTypeUnkBSFC::gInstance;
}

ARM Actor *ActorTypeUnkBSFC::Create() {
    return new(HeapIndex_2) ActorUnkBSFC();
}

ARM ActorTypeUnkBSFC::ActorTypeUnkBSFC() :
    ActorType(ActorId_BSFC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBSFC::ActorUnkBSFC() {}

ARM void ActorUnkBSFC::func_ov034_021193b0(void) {}
ARM void ActorUnkBSFC::func_ov034_02119420(void) {}
ARM void ActorUnkBSFC::func_ov034_021195a8(void) {}
ARM void ActorUnkBSFC::func_ov034_021195bc(void) {}
ARM void ActorUnkBSFC::func_ov034_02119700(void) {}
ARM void ActorUnkBSFC::func_ov034_02119970(void) {}
ARM void ActorUnkBSFC::func_ov034_02119984(void) {}
ARM void ActorUnkBSFC::func_ov034_02119b24(void) {}
ARM void ActorUnkBSFC::func_ov034_02119c00(void) {}
ARM void ActorUnkBSFC::func_ov034_02119c94(void) {}
ARM void ActorUnkBSFC::func_ov034_02119d54(void) {}
ARM void ActorUnkBSFC::func_ov034_02119d78(void) {}
ARM void ActorUnkBSFC::func_ov034_02119d88(void) {}
ARM void ActorUnkBSFC::func_ov034_02119d90(void) {}
ARM void ActorUnkBSFC::func_ov034_02119d9c(void) {}
ARM void ActorUnkBSFC::func_ov034_02119db8(void) {}
ARM void ActorUnkBSFC::func_ov034_02119e20(void) {}
ARM void ActorUnkBSFC::func_ov034_02119e90(void) {}
