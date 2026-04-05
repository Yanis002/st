//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkL2V1.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkL2V1 ActorTypeUnkL2V1::gInstance;

ARM ActorTypeUnkL2V1 *ActorTypeUnkL2V1::GetInstance() {
    return &ActorTypeUnkL2V1::gInstance;
}

ARM Actor *ActorTypeUnkL2V1::Create() {
    return new(HeapIndex_2) ActorUnkL2V1();
}

ARM ActorTypeUnkL2V1::ActorTypeUnkL2V1() :
    ActorType(ActorId_L2V1) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkL2V1::ActorUnkL2V1() {}

ARM void ActorUnkL2V1::func_ov044_0212c200(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c34c(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c360(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c440(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c464(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c54c(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c560(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c594(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c5a4(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c5ac(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c5c8(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c5f8(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c630(void) {}
