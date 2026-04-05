//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBLON.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBLON ActorTypeUnkBLON::gInstance;

ARM ActorTypeUnkBLON *ActorTypeUnkBLON::GetInstance() {
    return &ActorTypeUnkBLON::gInstance;
}

ARM Actor *ActorTypeUnkBLON::Create() {
    return new(HeapIndex_2) ActorUnkBLON();
}

ARM ActorTypeUnkBLON::ActorTypeUnkBLON() :
    ActorType(ActorId_BLON) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBLON::ActorUnkBLON() {}

ARM void ActorUnkBLON::func_ov093_021775c4(void) {}
ARM void ActorUnkBLON::func_ov093_02177618(void) {}
ARM void ActorUnkBLON::func_ov093_02177640(void) {}
ARM void ActorUnkBLON::func_ov093_021776ec(void) {}
ARM void ActorUnkBLON::func_ov093_02177700(void) {}
ARM void ActorUnkBLON::func_ov093_02177724(void) {}
ARM void ActorUnkBLON::func_ov093_021778c4(void) {}
ARM void ActorUnkBLON::func_ov093_021778dc(void) {}
ARM void ActorUnkBLON::func_ov093_02177904(void) {}
ARM void ActorUnkBLON::func_ov093_02177934(void) {}
