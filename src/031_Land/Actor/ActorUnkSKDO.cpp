//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSKDO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSKDO ActorTypeUnkSKDO::gInstance;

ARM ActorTypeUnkSKDO *ActorTypeUnkSKDO::GetInstance() {
    return &ActorTypeUnkSKDO::gInstance;
}

ARM Actor *ActorTypeUnkSKDO::Create() {
    return new(HeapIndex_2) ActorUnkSKDO();
}

ARM ActorTypeUnkSKDO::ActorTypeUnkSKDO() :
    ActorType(ActorId_SKDO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSKDO::ActorUnkSKDO() {}

ARM void ActorUnkSKDO::func_ov031_02106db8(void) {}
ARM void ActorUnkSKDO::func_ov031_02106de0(void) {}
ARM void ActorUnkSKDO::func_ov031_02106de8(void) {}
ARM void ActorUnkSKDO::func_ov031_02106e58(void) {}
ARM void ActorUnkSKDO::func_ov031_02106e90(void) {}
ARM void ActorUnkSKDO::func_ov031_02106e98(void) {}
ARM void ActorUnkSKDO::func_ov031_02106ed4(void) {}
ARM void ActorUnkSKDO::func_ov031_02106ee8(void) {}
