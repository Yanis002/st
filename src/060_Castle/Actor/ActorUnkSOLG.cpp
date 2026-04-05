//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOLG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSOLG ActorTypeUnkSOLG::gInstance;

ARM ActorTypeUnkSOLG *ActorTypeUnkSOLG::GetInstance() {
    return &ActorTypeUnkSOLG::gInstance;
}

ARM Actor *ActorTypeUnkSOLG::Create() {
    return new(HeapIndex_2) ActorUnkSOLG();
}

ARM ActorTypeUnkSOLG::ActorTypeUnkSOLG() :
    ActorType(ActorId_SOLG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSOLG::ActorUnkSOLG() {}
