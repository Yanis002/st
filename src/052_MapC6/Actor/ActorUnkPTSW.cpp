//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPTSW.hpp"
#include "System/SysNew.hpp"
#include "versions.h"

#if IS_JP

extern ActorTypeUnkPTSW ActorTypeUnkPTSW::gInstance;

ARM ActorTypeUnkPTSW *ActorTypeUnkPTSW::GetInstance() {
    return &ActorTypeUnkPTSW::gInstance;
}

ARM Actor *ActorTypeUnkPTSW::Create() {
    return new(HeapIndex_2) ActorUnkPTSW();
}

ARM ActorTypeUnkPTSW::ActorTypeUnkPTSW() :
    ActorType(ActorId_PTSW) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkPTSW::ActorUnkPTSW() {}

void ActorUnkPTSW::func_ov052_021375fc(void) {}
void ActorUnkPTSW::func_ov052_0213761c(void) {}
void ActorUnkPTSW::func_ov052_02137650(void) {}
void ActorUnkPTSW::func_ov052_02137684(void) {}
void ActorUnkPTSW::func_ov052_02137698(void) {}
void ActorUnkPTSW::func_ov052_02137778(void) {}
void ActorUnkPTSW::func_ov052_0213778c(void) {}
void ActorUnkPTSW::func_ov052_021377a8(void) {}

#endif
