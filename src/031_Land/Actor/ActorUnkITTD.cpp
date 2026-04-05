//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkITTD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkITTD ActorTypeUnkITTD::gInstance;

ARM ActorTypeUnkITTD *ActorTypeUnkITTD::GetInstance() {
    return &ActorTypeUnkITTD::gInstance;
}

ARM Actor *ActorTypeUnkITTD::Create() {
    return new(HeapIndex_2) ActorUnkITTD();
}

ARM ActorTypeUnkITTD::ActorTypeUnkITTD() :
    ActorType(ActorId_ITTD) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkITTD::ActorUnkITTD() {}

ARM void ActorUnkITTD::func_ov031_020e593c(void) {}
ARM void ActorUnkITTD::func_ov031_020e5b20(void) {}
ARM void ActorUnkITTD::func_ov031_020e5b34(void) {}
ARM void ActorUnkITTD::func_ov031_020e5c00(void) {}
ARM void ActorUnkITTD::func_ov031_020e5d18(void) {}
ARM void ActorUnkITTD::func_ov031_020e6148(void) {}
ARM void ActorUnkITTD::func_ov031_020e6158(void) {}
ARM void ActorUnkITTD::func_ov031_020e619c(void) {}
ARM void ActorUnkITTD::func_ov031_020e62c0(void) {}
ARM void ActorUnkITTD::func_ov031_020e6314(void) {}
ARM void ActorUnkITTD::func_ov031_020e6340(void) {}
ARM void ActorUnkITTD::func_ov031_020e6398(void) {}
ARM void ActorUnkITTD::func_ov031_020e6410(void) {}
ARM void ActorUnkITTD::func_ov031_020e642c(void) {}
ARM void ActorUnkITTD::func_ov031_020e6474(void) {}
ARM void ActorUnkITTD::func_ov031_020e64c4(void) {}
ARM void ActorUnkITTD::func_ov031_020e64d8(void) {}
ARM void ActorUnkITTD::func_ov031_020e6548(void) {}
ARM void ActorUnkITTD::func_ov031_020e6620(void) {}
ARM void ActorUnkITTD::func_ov031_020e66ec(void) {}
ARM void ActorUnkITTD::func_ov031_020e6700(void) {}
ARM void ActorUnkITTD::func_ov031_020e6714(void) {}
ARM void ActorUnkITTD::func_ov031_020e6774(void) {}
ARM void ActorUnkITTD::func_ov031_020e67dc(void) {}
ARM void ActorUnkITTD::func_ov031_020e6858(void) {}
ARM void ActorUnkITTD::func_ov031_020e68bc(void) {}
ARM void ActorUnkITTD::func_ov031_020e68d8(void) {}
ARM void ActorUnkITTD::func_ov031_020e6900(void) {}
ARM void ActorUnkITTD::func_ov031_020e691c(void) {}
ARM void ActorUnkITTD::func_ov031_020e6974(void) {}
ARM void ActorUnkITTD::func_ov031_020e69cc(void) {}
