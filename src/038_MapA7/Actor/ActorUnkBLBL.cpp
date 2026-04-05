//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBLBL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBLBL ActorTypeUnkBLBL::gInstance;

ARM ActorTypeUnkBLBL *ActorTypeUnkBLBL::GetInstance() {
    return &ActorTypeUnkBLBL::gInstance;
}

ARM Actor *ActorTypeUnkBLBL::Create() {
    return new(HeapIndex_2) ActorUnkBLBL();
}

ARM ActorTypeUnkBLBL::ActorTypeUnkBLBL() :
    ActorType(ActorId_BLBL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBLBL::ActorUnkBLBL() {}

ARM void ActorUnkBLBL::func_ov038_0211eabc(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eadc(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb0c(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb14(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb64(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb90(void) {}
ARM void ActorUnkBLBL::func_ov038_0211ebbc(void) {}
ARM void ActorUnkBLBL::func_ov038_0211ebe8(void) {}
ARM void ActorUnkBLBL::func_ov038_0211ec18(void) {}
ARM void ActorUnkBLBL::func_ov038_0211ec50(void) {}
