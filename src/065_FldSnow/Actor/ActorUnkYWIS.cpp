//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYWIS.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkYWIS ActorTypeUnkYWIS::gInstance;

ARM ActorTypeUnkYWIS *ActorTypeUnkYWIS::GetInstance() {
    return &ActorTypeUnkYWIS::gInstance;
}

ARM Actor *ActorTypeUnkYWIS::Create() {
    return new(HeapIndex_2) ActorUnkYWIS();
}

ARM ActorTypeUnkYWIS::ActorTypeUnkYWIS() :
    ActorType(ActorId_YWIS) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkYWIS::ActorUnkYWIS() {}

ARM void ActorUnkYWIS::func_ov065_02159750(void) {}
ARM void ActorUnkYWIS::func_ov065_021597bc(void) {}
ARM void ActorUnkYWIS::func_ov065_021597c4(void) {}
ARM void ActorUnkYWIS::func_ov065_021597f4(void) {}
ARM void ActorUnkYWIS::func_ov065_02159808(void) {}
ARM void ActorUnkYWIS::func_ov065_02159810(void) {}
ARM void ActorUnkYWIS::func_ov065_021598dc(void) {}
ARM void ActorUnkYWIS::func_ov065_021598f0(void) {}
