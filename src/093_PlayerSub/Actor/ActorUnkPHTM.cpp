//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPHTM.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkPHTM ActorTypeUnkPHTM::gInstance;

ARM ActorTypeUnkPHTM *ActorTypeUnkPHTM::GetInstance() {
    return &ActorTypeUnkPHTM::gInstance;
}

ARM Actor *ActorTypeUnkPHTM::Create() {
    return new(HeapIndex_2) ActorUnkPHTM();
}

ARM ActorTypeUnkPHTM::ActorTypeUnkPHTM() :
    ActorType(ActorId_PHTM) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPHTM::ActorUnkPHTM() {}

ARM void ActorUnkPHTM::func_ov093_021779e0(void) {}
