//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkJOLN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkJOLN ActorTypeUnkJOLN::gInstance;

ARM ActorTypeUnkJOLN *ActorTypeUnkJOLN::GetInstance() {
    return &ActorTypeUnkJOLN::gInstance;
}

ARM Actor *ActorTypeUnkJOLN::Create() {
    return new(HeapIndex_2) ActorUnkJOLN();
}

ARM ActorTypeUnkJOLN::ActorTypeUnkJOLN() :
    ActorType(ActorId_JOLN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkJOLN::ActorUnkJOLN() {}

ARM void ActorUnkJOLN::func_ov061_02158f30(void) {}
ARM void ActorUnkJOLN::func_ov061_02159048(void) {}
ARM void ActorUnkJOLN::func_ov061_0215906c(void) {}
ARM void ActorUnkJOLN::func_ov061_02159078(void) {}
ARM void ActorUnkJOLN::func_ov061_02159080(void) {}
ARM void ActorUnkJOLN::func_ov061_02159134(void) {}
ARM void ActorUnkJOLN::func_ov061_0215915c(void) {}
ARM void ActorUnkJOLN::func_ov061_0215918c(void) {}
