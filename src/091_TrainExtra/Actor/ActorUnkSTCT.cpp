//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSTCT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkSTCT ActorTypeUnkSTCT::gInstance;

ARM ActorTypeUnkSTCT *ActorTypeUnkSTCT::GetInstance() {
    return &ActorTypeUnkSTCT::gInstance;
}

ARM Actor *ActorTypeUnkSTCT::Create() {
    return new(HeapIndex_2) ActorUnkSTCT();
}

ARM ActorTypeUnkSTCT::ActorTypeUnkSTCT() :
    ActorType(ActorId_STCT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkSTCT::ActorUnkSTCT() {}

ARM void ActorUnkSTCT::func_ov091_02169e34(void) {}
ARM void ActorUnkSTCT::func_ov091_02169ea8(void) {}
ARM void ActorUnkSTCT::func_ov091_02169eec(void) {}
ARM void ActorUnkSTCT::func_ov091_02169f1c(void) {}
ARM void ActorUnkSTCT::func_ov091_02169f3c(void) {}
ARM void ActorUnkSTCT::func_ov091_02169f64(void) {}
