//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPBM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSPBM ActorTypeUnkSPBM::gInstance;

ARM ActorTypeUnkSPBM *ActorTypeUnkSPBM::GetInstance() {
    return &ActorTypeUnkSPBM::gInstance;
}

ARM Actor *ActorTypeUnkSPBM::Create() {
    return new(HeapIndex_2) ActorUnkSPBM();
}

ARM ActorTypeUnkSPBM::ActorTypeUnkSPBM() :
    ActorType(ActorId_SPBM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSPBM::ActorUnkSPBM() {}
