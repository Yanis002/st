//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWON.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSWON ActorTypeUnkSWON::gInstance;

ARM ActorTypeUnkSWON *ActorTypeUnkSWON::GetInstance() {
    return &ActorTypeUnkSWON::gInstance;
}

ARM Actor *ActorTypeUnkSWON::Create() {
    return new(HeapIndex_2) ActorUnkSWON();
}

ARM ActorTypeUnkSWON::ActorTypeUnkSWON() :
    ActorType(ActorId_SWON) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSWON::ActorUnkSWON() {}

ARM void ActorUnkSWON::func_ov031_020f7e14(void) {}
ARM void ActorUnkSWON::func_ov031_020f7e34(void) {}
ARM void ActorUnkSWON::func_ov031_020f7ed0(void) {}
ARM void ActorUnkSWON::func_ov031_020f7ee4(void) {}
ARM void ActorUnkSWON::func_ov031_020f7f00(void) {}
