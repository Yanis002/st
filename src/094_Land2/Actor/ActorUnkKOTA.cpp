//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKOTA.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkKOTA ActorTypeUnkKOTA::gInstance;

ARM ActorTypeUnkKOTA *ActorTypeUnkKOTA::GetInstance() {
    return &ActorTypeUnkKOTA::gInstance;
}

ARM Actor *ActorTypeUnkKOTA::Create() {
    return new(HeapIndex_2) ActorUnkKOTA();
}

ARM ActorTypeUnkKOTA::ActorTypeUnkKOTA() :
    ActorType(ActorId_KOTA) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkKOTA::ActorUnkKOTA() {}

ARM void ActorUnkKOTA::func_ov094_0216e408(void) {}
ARM void ActorUnkKOTA::func_ov094_0216e43c(void) {}
ARM void ActorUnkKOTA::func_ov094_0216e444(void) {}
ARM void ActorUnkKOTA::func_ov094_0216e490(void) {}
ARM void ActorUnkKOTA::func_ov094_0216e4a4(void) {}
ARM void ActorUnkKOTA::func_ov094_0216e4f0(void) {}
ARM void ActorUnkKOTA::func_ov094_0216e5a4(void) {}
ARM void ActorUnkKOTA::func_ov094_0216e9fc(void) {}
ARM void ActorUnkKOTA::func_ov094_0216ed94(void) {}
ARM void ActorUnkKOTA::func_ov094_0216edd0(void) {}
ARM void ActorUnkKOTA::func_ov094_0216ede4(void) {}
ARM void ActorUnkKOTA::func_ov094_0216ee00(void) {}
