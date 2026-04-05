//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFRI.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFRI ActorTypeUnkEFRI::gInstance;

ARM ActorTypeUnkEFRI *ActorTypeUnkEFRI::GetInstance() {
    return &ActorTypeUnkEFRI::gInstance;
}

ARM Actor *ActorTypeUnkEFRI::Create() {
    return new(HeapIndex_2) ActorUnkEFRI();
}

ARM ActorTypeUnkEFRI::ActorTypeUnkEFRI() :
    ActorType(ActorId_EFRI) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFRI::ActorUnkEFRI() {}

ARM void ActorUnkEFRI::func_ov098_02181e1c(void) {}
ARM void ActorUnkEFRI::func_ov098_02181e3c(void) {}
ARM void ActorUnkEFRI::func_ov098_02181ed8(void) {}
ARM void ActorUnkEFRI::func_ov098_02181ef4(void) {}
ARM void ActorUnkEFRI::func_ov098_02181f24(void) {}
ARM void ActorUnkEFRI::func_ov098_02181f5c(void) {}
