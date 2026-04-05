//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYKEP.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkYKEP ActorTypeUnkYKEP::gInstance;

ARM ActorTypeUnkYKEP *ActorTypeUnkYKEP::GetInstance() {
    return &ActorTypeUnkYKEP::gInstance;
}

ARM Actor *ActorTypeUnkYKEP::Create() {
    return new(HeapIndex_2) ActorUnkYKEP();
}

ARM ActorTypeUnkYKEP::ActorTypeUnkYKEP() :
    ActorType(ActorId_YKEP) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkYKEP::ActorUnkYKEP() {}

ARM void ActorUnkYKEP::func_ov040_0212c974(void) {}
ARM void ActorUnkYKEP::func_ov040_0212c9f8(void) {}
ARM void ActorUnkYKEP::func_ov040_0212cb54(void) {}
ARM void ActorUnkYKEP::func_ov040_0212cbe8(void) {}
ARM void ActorUnkYKEP::func_ov040_0212cc0c(void) {}
ARM void ActorUnkYKEP::func_ov040_0212cc3c(void) {}
ARM void ActorUnkYKEP::func_ov040_0212cc74(void) {}
ARM void ActorUnkYKEP::func_ov040_0212cc88(void) {}
ARM void ActorUnkYKEP::func_ov040_0212cc9c(void) {}
