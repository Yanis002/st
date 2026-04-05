//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSRNM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSRNM ActorTypeUnkSRNM::gInstance;

ARM ActorTypeUnkSRNM *ActorTypeUnkSRNM::GetInstance() {
    return &ActorTypeUnkSRNM::gInstance;
}

ARM Actor *ActorTypeUnkSRNM::Create() {
    return new(HeapIndex_2) ActorUnkSRNM();
}

ARM ActorTypeUnkSRNM::ActorTypeUnkSRNM() :
    ActorType(ActorId_SRNM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSRNM::ActorUnkSRNM() {}
