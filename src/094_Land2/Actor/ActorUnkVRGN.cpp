//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkVRGN.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkVRGN ActorTypeUnkVRGN::gInstance;

ARM ActorTypeUnkVRGN *ActorTypeUnkVRGN::GetInstance() {
    return &ActorTypeUnkVRGN::gInstance;
}

ARM Actor *ActorTypeUnkVRGN::Create() {
    return new(HeapIndex_2) ActorUnkVRGN();
}

ARM ActorTypeUnkVRGN::ActorTypeUnkVRGN() :
    ActorType(ActorId_VRGN) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkVRGN::ActorUnkVRGN() {}

ARM void ActorUnkVRGN::func_ov094_0216843c(void) {}
ARM void ActorUnkVRGN::func_ov094_02168468(void) {}
ARM void ActorUnkVRGN::func_ov094_0216849c(void) {}
ARM void ActorUnkVRGN::func_ov094_02168588(void) {}
ARM void ActorUnkVRGN::func_ov094_021685bc(void) {}
ARM void ActorUnkVRGN::func_ov094_02168624(void) {}
ARM void ActorUnkVRGN::func_ov094_0216897c(void) {}
ARM void ActorUnkVRGN::func_ov094_02168990(void) {}
ARM void ActorUnkVRGN::func_ov094_021689ac(void) {}
