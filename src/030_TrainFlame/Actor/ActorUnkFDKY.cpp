//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFDKY.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFDKY ActorTypeUnkFDKY::gInstance;

ARM ActorTypeUnkFDKY *ActorTypeUnkFDKY::GetInstance() {
    return &ActorTypeUnkFDKY::gInstance;
}

ARM Actor *ActorTypeUnkFDKY::Create() {
    return new(HeapIndex_2) ActorUnkFDKY();
}

ARM ActorTypeUnkFDKY::ActorTypeUnkFDKY() :
    ActorType(ActorId_FDKY) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFDKY::ActorUnkFDKY() {}

ARM void ActorUnkFDKY::func_ov030_0214c3b4(void) {}
ARM void ActorUnkFDKY::func_ov030_0214c3e4(void) {}
ARM void ActorUnkFDKY::func_ov030_0214c424(void) {}
ARM void ActorUnkFDKY::func_ov030_0214c494(void) {}
ARM void ActorUnkFDKY::func_ov030_0214c4b4(void) {}
ARM void ActorUnkFDKY::func_ov030_0214c4dc(void) {}
ARM void ActorUnkFDKY::func_ov030_0214c884(void) {}
ARM void ActorUnkFDKY::func_ov030_0214ca24(void) {}
ARM void ActorUnkFDKY::func_ov030_0214ca34(void) {}
ARM void ActorUnkFDKY::func_ov030_0214cab0(void) {}
ARM void ActorUnkFDKY::func_ov030_0214caf0(void) {}
ARM void ActorUnkFDKY::func_ov030_0214cb28(void) {}
ARM void ActorUnkFDKY::func_ov030_0214cb44(void) {}
ARM void ActorUnkFDKY::func_ov030_0214cb50(void) {}
ARM void ActorUnkFDKY::func_ov030_0214cc68(void) {}
ARM void ActorUnkFDKY::func_ov030_0214cdc0(void) {}
ARM void ActorUnkFDKY::func_ov030_0214ce28(void) {}
