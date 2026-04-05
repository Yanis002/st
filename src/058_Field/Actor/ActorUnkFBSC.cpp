//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFBSC.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkFBSC ActorTypeUnkFBSC::gInstance;

ARM ActorTypeUnkFBSC *ActorTypeUnkFBSC::GetInstance() {
    return &ActorTypeUnkFBSC::gInstance;
}

ARM Actor *ActorTypeUnkFBSC::Create() {
    return new(HeapIndex_2) ActorUnkFBSC();
}

ARM ActorTypeUnkFBSC::ActorTypeUnkFBSC() :
    ActorType(ActorId_FBSC) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkFBSC::ActorUnkFBSC() {}

ARM void ActorUnkFBSC::func_ov058_0214a9e0(void) {}
ARM void ActorUnkFBSC::func_ov058_0214aa38(void) {}
ARM void ActorUnkFBSC::func_ov058_0214aa74(void) {}
ARM void ActorUnkFBSC::func_ov058_0214aab8(void) {}
ARM void ActorUnkFBSC::func_ov058_0214aacc(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab04(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab34(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab68(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab78(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab8c(void) {}
ARM void ActorUnkFBSC::func_ov058_0214aba0(void) {}
ARM void ActorUnkFBSC::func_ov058_0214abb0(void) {}
