//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJSP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkAJSP ActorTypeUnkAJSP::gInstance;

ARM ActorTypeUnkAJSP *ActorTypeUnkAJSP::GetInstance() {
    return &ActorTypeUnkAJSP::gInstance;
}

ARM Actor *ActorTypeUnkAJSP::Create() {
    return new(HeapIndex_2) ActorUnkAJSP();
}

ARM ActorTypeUnkAJSP::ActorTypeUnkAJSP() :
    ActorType(ActorId_AJSP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkAJSP::ActorUnkAJSP() {}

ARM void ActorUnkAJSP::func_ov068_02160978(void) {}
ARM void ActorUnkAJSP::func_ov068_02160a08(void) {}
ARM void ActorUnkAJSP::func_ov068_02160ad0(void) {}
ARM void ActorUnkAJSP::func_ov068_02160b04(void) {}
ARM void ActorUnkAJSP::func_ov068_02160b2c(void) {}
