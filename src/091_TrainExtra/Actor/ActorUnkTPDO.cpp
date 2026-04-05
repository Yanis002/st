//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTPDO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTPDO ActorTypeUnkTPDO::gInstance;

ARM ActorTypeUnkTPDO *ActorTypeUnkTPDO::GetInstance() {
    return &ActorTypeUnkTPDO::gInstance;
}

ARM Actor *ActorTypeUnkTPDO::Create() {
    return new(HeapIndex_2) ActorUnkTPDO();
}

ARM ActorTypeUnkTPDO::ActorTypeUnkTPDO() :
    ActorType(ActorId_TPDO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTPDO::ActorUnkTPDO() {}

ARM void ActorUnkTPDO::func_ov091_0216da5c(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dbdc(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dbf0(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dbf8(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dc90(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dcf8(void) {}
ARM void ActorUnkTPDO::func_ov091_0216ddd4(void) {}
ARM void ActorUnkTPDO::func_ov091_0216deb0(void) {}
ARM void ActorUnkTPDO::func_ov091_0216df7c(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e0c0(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e498(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e4f8(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e548(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e564(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e5f4(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e68c(void) {}
