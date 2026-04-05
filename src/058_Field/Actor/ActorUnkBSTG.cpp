//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBSTG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBSTG ActorTypeUnkBSTG::gInstance;

ARM ActorTypeUnkBSTG *ActorTypeUnkBSTG::GetInstance() {
    return &ActorTypeUnkBSTG::gInstance;
}

ARM Actor *ActorTypeUnkBSTG::Create() {
    return new(HeapIndex_2) ActorUnkBSTG();
}

ARM ActorTypeUnkBSTG::ActorTypeUnkBSTG() :
    ActorType(ActorId_BSTG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBSTG::ActorUnkBSTG() {}

ARM void ActorUnkBSTG::func_ov058_0214d774(void) {}
ARM void ActorUnkBSTG::func_ov058_0214d794(void) {}
ARM void ActorUnkBSTG::func_ov058_0214d79c(void) {}
ARM void ActorUnkBSTG::func_ov058_0214d7d0(void) {}
ARM void ActorUnkBSTG::func_ov058_0214d7e4(void) {}
ARM void ActorUnkBSTG::func_ov058_0214d800(void) {}
