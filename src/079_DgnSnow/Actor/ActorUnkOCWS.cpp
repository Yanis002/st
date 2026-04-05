//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOCWS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkOCWS ActorTypeUnkOCWS::gInstance;

ARM ActorTypeUnkOCWS *ActorTypeUnkOCWS::GetInstance() {
    return &ActorTypeUnkOCWS::gInstance;
}

ARM Actor *ActorTypeUnkOCWS::Create() {
    return new(HeapIndex_2) ActorUnkOCWS();
}

ARM ActorTypeUnkOCWS::ActorTypeUnkOCWS() :
    ActorType(ActorId_OCWS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkOCWS::ActorUnkOCWS() {}

ARM void ActorUnkOCWS::func_ov079_02155150(void) {}
ARM void ActorUnkOCWS::func_ov079_02155228(void) {}
ARM void ActorUnkOCWS::func_ov079_0215523c(void) {}
ARM void ActorUnkOCWS::func_ov079_021552e8(void) {}
ARM void ActorUnkOCWS::func_ov079_02155530(void) {}
ARM void ActorUnkOCWS::func_ov079_0215564c(void) {}
ARM void ActorUnkOCWS::func_ov079_0215566c(void) {}
ARM void ActorUnkOCWS::func_ov079_02155710(void) {}
ARM void ActorUnkOCWS::func_ov079_02155758(void) {}
ARM void ActorUnkOCWS::func_ov079_02155790(void) {}
ARM void ActorUnkOCWS::func_ov079_0215585c(void) {}
ARM void ActorUnkOCWS::func_ov079_02155898(void) {}
ARM void ActorUnkOCWS::func_ov079_021558e4(void) {}
ARM void ActorUnkOCWS::func_ov079_02155900(void) {}
ARM void ActorUnkOCWS::func_ov079_02155928(void) {}
ARM void ActorUnkOCWS::func_ov079_02155958(void) {}
