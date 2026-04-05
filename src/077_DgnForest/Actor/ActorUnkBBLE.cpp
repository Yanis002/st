//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBBLE.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkBBLE ActorTypeUnkBBLE::gInstance;

ARM ActorTypeUnkBBLE *ActorTypeUnkBBLE::GetInstance() {
    return &ActorTypeUnkBBLE::gInstance;
}

ARM Actor *ActorTypeUnkBBLE::Create() {
    return new(HeapIndex_2) ActorUnkBBLE();
}

ARM ActorTypeUnkBBLE::ActorTypeUnkBBLE() :
    ActorType(ActorId_BBLE) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkBBLE::ActorUnkBBLE() {}

ARM void ActorUnkBBLE::func_ov077_02157b48(void) {}
ARM void ActorUnkBBLE::func_ov077_02157b68(void) {}
ARM void ActorUnkBBLE::func_ov077_02157b84(void) {}
ARM void ActorUnkBBLE::func_ov077_02157ba8(void) {}
ARM void ActorUnkBBLE::func_ov077_02157bc8(void) {}
ARM void ActorUnkBBLE::func_ov077_02157c24(void) {}
ARM void ActorUnkBBLE::func_ov077_02157d14(void) {}
ARM void ActorUnkBBLE::func_ov077_02157d48(void) {}
ARM void ActorUnkBBLE::func_ov077_0215804c(void) {}
ARM void ActorUnkBBLE::func_ov077_021580b8(void) {}
ARM void ActorUnkBBLE::func_ov077_02158140(void) {}
ARM void ActorUnkBBLE::func_ov077_0215816c(void) {}
ARM void ActorUnkBBLE::func_ov077_02158220(void) {}
ARM void ActorUnkBBLE::func_ov077_02158268(void) {}
ARM void ActorUnkBBLE::func_ov077_02158348(void) {}
ARM void ActorUnkBBLE::func_ov077_0215837c(void) {}
ARM void ActorUnkBBLE::func_ov077_0215842c(void) {}
ARM void ActorUnkBBLE::func_ov077_0215856c(void) {}
ARM void ActorUnkBBLE::func_ov077_021586dc(void) {}
ARM void ActorUnkBBLE::func_ov077_021587d4(void) {}
ARM void ActorUnkBBLE::func_ov077_0215885c(void) {}
ARM void ActorUnkBBLE::func_ov077_02158918(void) {}
ARM void ActorUnkBBLE::func_ov077_021589c4(void) {}
ARM void ActorUnkBBLE::func_ov077_02158a3c(void) {}
ARM void ActorUnkBBLE::func_ov077_02158a54(void) {}
ARM void ActorUnkBBLE::func_ov077_02158ad8(void) {}
ARM void ActorUnkBBLE::func_ov077_02158b64(void) {}
