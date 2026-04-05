//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkWAWS ActorTypeUnkWAWS::gInstance;

ARM ActorTypeUnkWAWS *ActorTypeUnkWAWS::GetInstance() {
    return &ActorTypeUnkWAWS::gInstance;
}

ARM Actor *ActorTypeUnkWAWS::Create() {
    return new(HeapIndex_2) ActorUnkWAWS();
}

ARM ActorTypeUnkWAWS::ActorTypeUnkWAWS() :
    ActorType(ActorId_WAWS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkWAWS::ActorUnkWAWS() {}
