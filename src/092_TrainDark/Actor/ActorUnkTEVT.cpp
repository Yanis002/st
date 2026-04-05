//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTEVT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkTEVT ActorTypeUnkTEVT::gInstance;

ARM ActorTypeUnkTEVT *ActorTypeUnkTEVT::GetInstance() {
    return &ActorTypeUnkTEVT::gInstance;
}

ARM Actor *ActorTypeUnkTEVT::Create() {
    return new(HeapIndex_2) ActorUnkTEVT();
}

ARM ActorTypeUnkTEVT::ActorTypeUnkTEVT() :
    ActorType(ActorId_TEVT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkTEVT::ActorUnkTEVT() {}

ARM void ActorUnkTEVT::func_ov092_02177dd0(void) {}
ARM void ActorUnkTEVT::func_ov092_02177df8(void) {}
ARM void ActorUnkTEVT::func_ov092_02177fb4(void) {}
ARM void ActorUnkTEVT::func_ov092_02178050(void) {}
ARM void ActorUnkTEVT::func_ov092_02178054(void) {}
ARM void ActorUnkTEVT::func_ov092_02178488(void) {}
ARM void ActorUnkTEVT::func_ov092_02178498(void) {}
ARM void ActorUnkTEVT::func_ov092_021784ac(void) {}
ARM void ActorUnkTEVT::func_ov092_021784c8(void) {}
ARM void ActorUnkTEVT::func_ov092_021784ec(void) {}
