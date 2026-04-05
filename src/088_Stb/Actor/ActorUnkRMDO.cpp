//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMDO.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMDO ActorTypeUnkRMDO::gInstance;

ARM ActorTypeUnkRMDO *ActorTypeUnkRMDO::GetInstance() {
    return &ActorTypeUnkRMDO::gInstance;
}

ARM Actor *ActorTypeUnkRMDO::Create() {
    return new(HeapIndex_2) ActorUnkRMDO();
}

ARM ActorTypeUnkRMDO::ActorTypeUnkRMDO() :
    ActorType(ActorId_RMDO) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMDO::ActorUnkRMDO() {}

ARM void ActorUnkRMDO::func_ov088_02171a98(void) {}
ARM void ActorUnkRMDO::func_ov088_02171ab8(void) {}
ARM void ActorUnkRMDO::func_ov088_02171ad8(void) {}
ARM void ActorUnkRMDO::func_ov088_02171adc(void) {}
ARM void ActorUnkRMDO::func_ov088_02171ae0(void) {}
ARM void ActorUnkRMDO::func_ov088_02171af4(void) {}
ARM void ActorUnkRMDO::func_ov088_02171af8(void) {}
ARM void ActorUnkRMDO::func_ov088_02171b00(void) {}
ARM void ActorUnkRMDO::func_ov088_02171b20(void) {}
ARM void ActorUnkRMDO::func_ov088_02171b48(void) {}
