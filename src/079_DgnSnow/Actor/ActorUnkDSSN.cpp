//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSSN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDSSN ActorTypeUnkDSSN::gInstance;

ARM ActorTypeUnkDSSN *ActorTypeUnkDSSN::GetInstance() {
    return &ActorTypeUnkDSSN::gInstance;
}

ARM Actor *ActorTypeUnkDSSN::Create() {
    return new(HeapIndex_2) ActorUnkDSSN();
}

ARM ActorTypeUnkDSSN::ActorTypeUnkDSSN() :
    ActorType(ActorId_DSSN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDSSN::ActorUnkDSSN() {}

ARM void ActorUnkDSSN::func_ov079_021559c4(void) {}
ARM void ActorUnkDSSN::func_ov079_021559e4(void) {}
ARM void ActorUnkDSSN::func_ov079_02155a34(void) {}
ARM void ActorUnkDSSN::func_ov079_02155a54(void) {}
