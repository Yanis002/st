//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDKCB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkDKCB ActorTypeUnkDKCB::gInstance;

ARM ActorTypeUnkDKCB *ActorTypeUnkDKCB::GetInstance() {
    return &ActorTypeUnkDKCB::gInstance;
}

ARM Actor *ActorTypeUnkDKCB::Create() {
    return new(HeapIndex_2) ActorUnkDKCB();
}

ARM ActorTypeUnkDKCB::ActorTypeUnkDKCB() :
    ActorType(ActorId_DKCB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkDKCB::ActorUnkDKCB() {}

ARM void ActorUnkDKCB::func_ov092_02178cf4(void) {}
ARM void ActorUnkDKCB::func_ov092_02178db4(void) {}
ARM void ActorUnkDKCB::func_ov092_02178dbc(void) {}
ARM void ActorUnkDKCB::func_ov092_02178e54(void) {}
ARM void ActorUnkDKCB::func_ov092_02178e5c(void) {}
ARM void ActorUnkDKCB::func_ov092_02178f38(void) {}
ARM void ActorUnkDKCB::func_ov092_02179014(void) {}
ARM void ActorUnkDKCB::func_ov092_02179050(void) {}
ARM void ActorUnkDKCB::func_ov092_021791c8(void) {}
ARM void ActorUnkDKCB::func_ov092_021794f0(void) {}
ARM void ActorUnkDKCB::func_ov092_02179650(void) {}
ARM void ActorUnkDKCB::func_ov092_021796a0(void) {}
ARM void ActorUnkDKCB::func_ov092_02179724(void) {}
