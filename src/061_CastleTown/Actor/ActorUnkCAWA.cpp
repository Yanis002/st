//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAWA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCAWA ActorTypeUnkCAWA::gInstance;

ARM ActorTypeUnkCAWA *ActorTypeUnkCAWA::GetInstance() {
    return &ActorTypeUnkCAWA::gInstance;
}

ARM Actor *ActorTypeUnkCAWA::Create() {
    return new(HeapIndex_2) ActorUnkCAWA();
}

ARM ActorTypeUnkCAWA::ActorTypeUnkCAWA() :
    ActorType(ActorId_CAWA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCAWA::ActorUnkCAWA() {}

ARM void ActorUnkCAWA::func_ov061_02158b88(void) {}
ARM void ActorUnkCAWA::func_ov061_02158ba8(void) {}
ARM void ActorUnkCAWA::func_ov061_02158bc8(void) {}
ARM void ActorUnkCAWA::func_ov061_02158ccc(void) {}
ARM void ActorUnkCAWA::func_ov061_02158cf8(void) {}
ARM void ActorUnkCAWA::func_ov061_02158d4c(void) {}
ARM void ActorUnkCAWA::func_ov061_02158e40(void) {}
ARM void ActorUnkCAWA::func_ov061_02158e68(void) {}
ARM void ActorUnkCAWA::func_ov061_02158e98(void) {}
