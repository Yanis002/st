//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMTWP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkMTWP ActorTypeUnkMTWP::gInstance;

ARM ActorTypeUnkMTWP *ActorTypeUnkMTWP::GetInstance() {
    return &ActorTypeUnkMTWP::gInstance;
}

ARM Actor *ActorTypeUnkMTWP::Create() {
    return new(HeapIndex_2) ActorUnkMTWP();
}

ARM ActorTypeUnkMTWP::ActorTypeUnkMTWP() :
    ActorType(ActorId_MTWP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkMTWP::ActorUnkMTWP() {}

ARM void ActorUnkMTWP::func_ov092_0216f704(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f7dc(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f820(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f874(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f8cc(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f8ec(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f90c(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f944(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f984(void) {}
ARM void ActorUnkMTWP::func_ov092_0216fce0(void) {}
ARM void ActorUnkMTWP::func_ov092_0216fd24(void) {}
ARM void ActorUnkMTWP::func_ov092_0217006c(void) {}
ARM void ActorUnkMTWP::func_ov092_021700bc(void) {}
ARM void ActorUnkMTWP::func_ov092_021700e4(void) {}
ARM void ActorUnkMTWP::func_ov092_02170118(void) {}
ARM void ActorUnkMTWP::func_ov092_02170230(void) {}
ARM void ActorUnkMTWP::func_ov092_02170248(void) {}
ARM void ActorUnkMTWP::func_ov092_02170288(void) {}
ARM void ActorUnkMTWP::func_ov092_021702d0(void) {}
