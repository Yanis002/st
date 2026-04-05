//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMAJ.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMAJ ActorTypeUnkRMAJ::gInstance;

ARM ActorTypeUnkRMAJ *ActorTypeUnkRMAJ::GetInstance() {
    return &ActorTypeUnkRMAJ::gInstance;
}

ARM Actor *ActorTypeUnkRMAJ::Create() {
    return new(HeapIndex_2) ActorUnkRMAJ();
}

ARM ActorTypeUnkRMAJ::ActorTypeUnkRMAJ() :
    ActorType(ActorId_RMAJ) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMAJ::ActorUnkRMAJ() {}

ARM void ActorUnkRMAJ::func_ov068_02157ef8(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f18(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f38(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f54(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f58(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f5c(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f70(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f8c(void) {}
