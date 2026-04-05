//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRUP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTRUP ActorTypeUnkTRUP::gInstance;

ARM ActorTypeUnkTRUP *ActorTypeUnkTRUP::GetInstance() {
    return &ActorTypeUnkTRUP::gInstance;
}

ARM Actor *ActorTypeUnkTRUP::Create() {
    return new(HeapIndex_2) ActorUnkTRUP();
}

ARM ActorTypeUnkTRUP::ActorTypeUnkTRUP() :
    ActorType(ActorId_TRUP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTRUP::ActorUnkTRUP() {}

ARM void ActorUnkTRUP::func_ov026_0211139c(void) {}
ARM void ActorUnkTRUP::func_ov026_02111418(void) {}
ARM void ActorUnkTRUP::func_ov026_02111440(void) {}
ARM void ActorUnkTRUP::func_ov026_02111498(void) {}
ARM void ActorUnkTRUP::func_ov026_02111578(void) {}
ARM void ActorUnkTRUP::func_ov026_021115fc(void) {}
ARM void ActorUnkTRUP::func_ov026_02111618(void) {}
ARM void ActorUnkTRUP::func_ov026_0211162c(void) {}
