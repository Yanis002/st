//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSYSS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSYSS ActorTypeUnkSYSS::gInstance;

ARM ActorTypeUnkSYSS *ActorTypeUnkSYSS::GetInstance() {
    return &ActorTypeUnkSYSS::gInstance;
}

ARM Actor *ActorTypeUnkSYSS::Create() {
    return new(HeapIndex_2) ActorUnkSYSS();
}

ARM ActorTypeUnkSYSS::ActorTypeUnkSYSS() :
    ActorType(ActorId_SYSS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSYSS::ActorUnkSYSS() {}
