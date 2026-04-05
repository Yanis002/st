//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAMS ActorTypeUnkCAMS::gInstance;

ARM ActorTypeUnkCAMS *ActorTypeUnkCAMS::GetInstance() {
    return &ActorTypeUnkCAMS::gInstance;
}

ARM Actor *ActorTypeUnkCAMS::Create() {
    return new(HeapIndex_2) ActorUnkCAMS();
}

ARM ActorTypeUnkCAMS::ActorTypeUnkCAMS() :
    ActorType(ActorId_CAMS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAMS::ActorUnkCAMS() {}
