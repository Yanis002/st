//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOCTS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkOCTS ActorTypeUnkOCTS::gInstance;

ARM ActorTypeUnkOCTS *ActorTypeUnkOCTS::GetInstance() {
    return &ActorTypeUnkOCTS::gInstance;
}

ARM Actor *ActorTypeUnkOCTS::Create() {
    return new(HeapIndex_2) ActorUnkOCTS();
}

ARM ActorTypeUnkOCTS::ActorTypeUnkOCTS() :
    ActorType(ActorId_OCTS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkOCTS::ActorUnkOCTS() {}

ARM void ActorUnkOCTS::func_ov042_02123538(void) {}
ARM void ActorUnkOCTS::func_ov042_02123600(void) {}
ARM void ActorUnkOCTS::func_ov042_02123614(void) {}
ARM void ActorUnkOCTS::func_ov042_02123698(void) {}
ARM void ActorUnkOCTS::func_ov042_021238dc(void) {}
ARM void ActorUnkOCTS::func_ov042_0212398c(void) {}
ARM void ActorUnkOCTS::func_ov042_021239f0(void) {}
ARM void ActorUnkOCTS::func_ov042_02123a38(void) {}
ARM void ActorUnkOCTS::func_ov042_02123a70(void) {}
ARM void ActorUnkOCTS::func_ov042_02123b3c(void) {}
ARM void ActorUnkOCTS::func_ov042_02123b78(void) {}
ARM void ActorUnkOCTS::func_ov042_02123bc4(void) {}
ARM void ActorUnkOCTS::func_ov042_02123be0(void) {}
ARM void ActorUnkOCTS::func_ov042_02123c08(void) {}
ARM void ActorUnkOCTS::func_ov042_02123c38(void) {}
