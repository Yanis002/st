//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPAR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSPAR ActorTypeUnkSPAR::gInstance;

ARM ActorTypeUnkSPAR *ActorTypeUnkSPAR::GetInstance() {
    return &ActorTypeUnkSPAR::gInstance;
}

ARM Actor *ActorTypeUnkSPAR::Create() {
    return new(HeapIndex_2) ActorUnkSPAR();
}

ARM ActorTypeUnkSPAR::ActorTypeUnkSPAR() :
    ActorType(ActorId_SPAR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSPAR::ActorUnkSPAR() {}
