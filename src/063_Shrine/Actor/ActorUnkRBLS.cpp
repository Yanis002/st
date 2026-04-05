//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBLS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBLS ActorTypeUnkRBLS::gInstance;

ARM ActorTypeUnkRBLS *ActorTypeUnkRBLS::GetInstance() {
    return &ActorTypeUnkRBLS::gInstance;
}

ARM Actor *ActorTypeUnkRBLS::Create() {
    return new(HeapIndex_2) ActorUnkRBLS();
}

ARM ActorTypeUnkRBLS::ActorTypeUnkRBLS() :
    ActorType(ActorId_RBLS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBLS::ActorUnkRBLS() {}

ARM void ActorUnkRBLS::func_ov063_0215f310(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f3d4(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f3e8(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f474(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f488(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f49c(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f4bc(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f4d8(void) {}
ARM void ActorUnkRBLS::func_ov063_0215f500(void) {}
