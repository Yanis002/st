//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPDR.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSPDR ActorTypeUnkSPDR::gInstance;

ARM ActorTypeUnkSPDR *ActorTypeUnkSPDR::GetInstance() {
    return &ActorTypeUnkSPDR::gInstance;
}

ARM Actor *ActorTypeUnkSPDR::Create() {
    return new(HeapIndex_2) ActorUnkSPDR();
}

ARM ActorTypeUnkSPDR::ActorTypeUnkSPDR() :
    ActorType(ActorId_SPDR) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSPDR::ActorUnkSPDR() {}
