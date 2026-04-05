//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTLKT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTLKT ActorTypeUnkTLKT::gInstance;

ARM ActorTypeUnkTLKT *ActorTypeUnkTLKT::GetInstance() {
    return &ActorTypeUnkTLKT::gInstance;
}

ARM Actor *ActorTypeUnkTLKT::Create() {
    return new(HeapIndex_2) ActorUnkTLKT();
}

ARM ActorTypeUnkTLKT::ActorTypeUnkTLKT() :
    ActorType(ActorId_TLKT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTLKT::ActorUnkTLKT() {}

ARM void ActorUnkTLKT::func_ov031_020e4130(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4164(void) {}
ARM void ActorUnkTLKT::func_ov031_020e41a4(void) {}
ARM void ActorUnkTLKT::func_ov031_020e41ec(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4238(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4274(void) {}
ARM void ActorUnkTLKT::func_ov031_020e42ac(void) {}
ARM void ActorUnkTLKT::func_ov031_020e42f0(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4320(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4514(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4570(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4584(void) {}
ARM void ActorUnkTLKT::func_ov031_020e4594(void) {}
