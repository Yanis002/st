//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYWS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYWS ActorTypeUnkSYWS::gInstance;

ARM ActorTypeUnkSYWS *ActorTypeUnkSYWS::GetInstance() {
    return &ActorTypeUnkSYWS::gInstance;
}

ARM Actor *ActorTypeUnkSYWS::Create() {
    return new(HeapIndex_2) ActorUnkSYWS();
}

ARM ActorTypeUnkSYWS::ActorTypeUnkSYWS() :
    ActorType(ActorId_SYWS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYWS::ActorUnkSYWS() {}
