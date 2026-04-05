//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOBPC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkOBPC ActorTypeUnkOBPC::gInstance;

ARM ActorTypeUnkOBPC *ActorTypeUnkOBPC::GetInstance() {
    return &ActorTypeUnkOBPC::gInstance;
}

ARM Actor *ActorTypeUnkOBPC::Create() {
    return new(HeapIndex_2) ActorUnkOBPC();
}

ARM ActorTypeUnkOBPC::ActorTypeUnkOBPC() :
    ActorType(ActorId_OBPC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkOBPC::ActorUnkOBPC() {}

ARM void ActorUnkOBPC::func_ov024_020d6ef4(void) {}
ARM void ActorUnkOBPC::func_ov024_020d6f28(void) {}
ARM void ActorUnkOBPC::func_ov024_020d6f74(void) {}
ARM void ActorUnkOBPC::func_ov024_020d6f94(void) {}
ARM void ActorUnkOBPC::func_ov024_020d7050(void) {}
ARM void ActorUnkOBPC::func_ov024_020d7064(void) {}
ARM void ActorUnkOBPC::func_ov024_020d7154(void) {}
ARM void ActorUnkOBPC::func_ov024_020d72bc(void) {}
ARM void ActorUnkOBPC::func_ov024_020d72dc(void) {}
