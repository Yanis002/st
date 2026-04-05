//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYKAP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkYKAP ActorTypeUnkYKAP::gInstance;

ARM ActorTypeUnkYKAP *ActorTypeUnkYKAP::GetInstance() {
    return &ActorTypeUnkYKAP::gInstance;
}

ARM Actor *ActorTypeUnkYKAP::Create() {
    return new(HeapIndex_2) ActorUnkYKAP();
}

ARM ActorTypeUnkYKAP::ActorTypeUnkYKAP() :
    ActorType(ActorId_YKAP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkYKAP::ActorUnkYKAP() {}
