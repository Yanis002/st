//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFSB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFSB ActorTypeUnkEFSB::gInstance;

ARM ActorTypeUnkEFSB *ActorTypeUnkEFSB::GetInstance() {
    return &ActorTypeUnkEFSB::gInstance;
}

ARM Actor *ActorTypeUnkEFSB::Create() {
    return new(HeapIndex_2) ActorUnkEFSB();
}

ARM ActorTypeUnkEFSB::ActorTypeUnkEFSB() :
    ActorType(ActorId_EFSB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFSB::ActorUnkEFSB() {}

ARM void ActorUnkEFSB::func_ov031_020fb504(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb614(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb6cc(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb704(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb718(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb720(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb790(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb7c0(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb7f8(void) {}
