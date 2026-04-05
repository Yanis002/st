//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWOB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSWOB ActorTypeUnkSWOB::gInstance;

ARM ActorTypeUnkSWOB *ActorTypeUnkSWOB::GetInstance() {
    return &ActorTypeUnkSWOB::gInstance;
}

ARM Actor *ActorTypeUnkSWOB::Create() {
    return new(HeapIndex_2) ActorUnkSWOB();
}

ARM ActorTypeUnkSWOB::ActorTypeUnkSWOB() :
    ActorType(ActorId_SWOB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSWOB::ActorUnkSWOB() {}

ARM void ActorUnkSWOB::func_ov000_0209a910(void) {}
ARM void ActorUnkSWOB::func_ov000_0209a948(void) {}
ARM void ActorUnkSWOB::func_ov000_0209a9b4(void) {}
ARM void ActorUnkSWOB::func_ov000_0209aa30(void) {}
ARM void ActorUnkSWOB::func_ov000_0209ac64(void) {}
ARM void ActorUnkSWOB::func_ov000_0209ac78(void) {}
ARM void ActorUnkSWOB::func_ov000_0209ac94(void) {}
