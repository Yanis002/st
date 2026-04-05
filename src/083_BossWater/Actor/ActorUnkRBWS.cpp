//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBWS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRBWS ActorTypeUnkRBWS::gInstance;

ARM ActorTypeUnkRBWS *ActorTypeUnkRBWS::GetInstance() {
    return &ActorTypeUnkRBWS::gInstance;
}

ARM Actor *ActorTypeUnkRBWS::Create() {
    return new(HeapIndex_2) ActorUnkRBWS();
}

ARM ActorTypeUnkRBWS::ActorTypeUnkRBWS() :
    ActorType(ActorId_RBWS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRBWS::ActorUnkRBWS() {}

ARM void ActorUnkRBWS::func_ov083_0215c1f0(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c264(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c2a0(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c2a4(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c2c4(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c2e4(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c30c(void) {}
