//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCNBL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkCNBL ActorTypeUnkCNBL::gInstance;

ARM ActorTypeUnkCNBL *ActorTypeUnkCNBL::GetInstance() {
    return &ActorTypeUnkCNBL::gInstance;
}

ARM Actor *ActorTypeUnkCNBL::Create() {
    return new(HeapIndex_2) ActorUnkCNBL();
}

ARM ActorTypeUnkCNBL::ActorTypeUnkCNBL() :
    ActorType(ActorId_CNBL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkCNBL::ActorUnkCNBL() {}

ARM void ActorUnkCNBL::func_ov026_0210f1a4(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f264(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f26c(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f304(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f30c(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f3e8(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f4c4(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f500(void) {}
ARM void ActorUnkCNBL::func_ov026_0210f678(void) {}
ARM void ActorUnkCNBL::func_ov026_0210fa04(void) {}
ARM void ActorUnkCNBL::func_ov026_0210fc14(void) {}
ARM void ActorUnkCNBL::func_ov026_0210fc64(void) {}
ARM void ActorUnkCNBL::func_ov026_0210fce8(void) {}
ARM void ActorUnkCNBL::func_ov026_0210fd74(void) {}
