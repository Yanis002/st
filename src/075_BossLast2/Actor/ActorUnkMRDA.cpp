//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMRDA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMRDA ActorTypeUnkMRDA::gInstance;

ARM ActorTypeUnkMRDA *ActorTypeUnkMRDA::GetInstance() {
    return &ActorTypeUnkMRDA::gInstance;
}

ARM Actor *ActorTypeUnkMRDA::Create() {
    return new(HeapIndex_2) ActorUnkMRDA();
}

ARM ActorTypeUnkMRDA::ActorTypeUnkMRDA() :
    ActorType(ActorId_MRDA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMRDA::ActorUnkMRDA() {}
