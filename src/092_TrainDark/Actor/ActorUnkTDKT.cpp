//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTDKT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTDKT ActorTypeUnkTDKT::gInstance;

ARM ActorTypeUnkTDKT *ActorTypeUnkTDKT::GetInstance() {
    return &ActorTypeUnkTDKT::gInstance;
}

ARM Actor *ActorTypeUnkTDKT::Create() {
    return new(HeapIndex_2) ActorUnkTDKT();
}

ARM ActorTypeUnkTDKT::ActorTypeUnkTDKT() :
    ActorType(ActorId_TDKT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTDKT::ActorUnkTDKT() {}

ARM void ActorUnkTDKT::func_ov092_02177148(void) {}
ARM void ActorUnkTDKT::func_ov092_021771f0(void) {}
ARM void ActorUnkTDKT::func_ov092_02177230(void) {}
ARM void ActorUnkTDKT::func_ov092_02177244(void) {}
ARM void ActorUnkTDKT::func_ov092_02177298(void) {}
ARM void ActorUnkTDKT::func_ov092_021772ac(void) {}
ARM void ActorUnkTDKT::func_ov092_02177634(void) {}
ARM void ActorUnkTDKT::func_ov092_02177b2c(void) {}
ARM void ActorUnkTDKT::func_ov092_02177bdc(void) {}
ARM void ActorUnkTDKT::func_ov092_02177c48(void) {}
ARM void ActorUnkTDKT::func_ov092_02177c58(void) {}
ARM void ActorUnkTDKT::func_ov092_02177c6c(void) {}
ARM void ActorUnkTDKT::func_ov092_02177c88(void) {}
ARM void ActorUnkTDKT::func_ov092_02177ca4(void) {}
ARM void ActorUnkTDKT::func_ov092_02177d00(void) {}
ARM void ActorUnkTDKT::func_ov092_02177d64(void) {}
