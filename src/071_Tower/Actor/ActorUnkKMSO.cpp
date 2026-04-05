//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKMSO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkKMSO ActorTypeUnkKMSO::gInstance;

ARM ActorTypeUnkKMSO *ActorTypeUnkKMSO::GetInstance() {
    return &ActorTypeUnkKMSO::gInstance;
}

ARM Actor *ActorTypeUnkKMSO::Create() {
    return new(HeapIndex_2) ActorUnkKMSO();
}

ARM ActorTypeUnkKMSO::ActorTypeUnkKMSO() :
    ActorType(ActorId_KMSO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkKMSO::ActorUnkKMSO() {}

ARM void ActorUnkKMSO::func_ov071_0216018c(void) {}
ARM void ActorUnkKMSO::func_ov071_02160288(void) {}
ARM void ActorUnkKMSO::func_ov071_0216029c(void) {}
ARM void ActorUnkKMSO::func_ov071_02160368(void) {}
ARM void ActorUnkKMSO::func_ov071_021603c4(void) {}
ARM void ActorUnkKMSO::func_ov071_02160400(void) {}
ARM void ActorUnkKMSO::func_ov071_02160430(void) {}
ARM void ActorUnkKMSO::func_ov071_021604c8(void) {}
ARM void ActorUnkKMSO::func_ov071_021605a8(void) {}
ARM void ActorUnkKMSO::func_ov071_02160684(void) {}
ARM void ActorUnkKMSO::func_ov071_02160688(void) {}
ARM void ActorUnkKMSO::func_ov071_021608e4(void) {}
ARM void ActorUnkKMSO::func_ov071_02160900(void) {}
ARM void ActorUnkKMSO::func_ov071_02160930(void) {}
