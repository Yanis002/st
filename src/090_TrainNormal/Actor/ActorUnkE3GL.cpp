//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3GL.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkE3GL ActorTypeUnkE3GL::gInstance;

ARM ActorTypeUnkE3GL *ActorTypeUnkE3GL::GetInstance() {
    return &ActorTypeUnkE3GL::gInstance;
}

ARM Actor *ActorTypeUnkE3GL::Create() {
    return new(HeapIndex_2) ActorUnkE3GL();
}

ARM ActorTypeUnkE3GL::ActorTypeUnkE3GL() :
    ActorType(ActorId_E3GL) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkE3GL::ActorUnkE3GL() {}

ARM void ActorUnkE3GL::func_ov090_02170fd4(void) {}
ARM void ActorUnkE3GL::func_ov090_02171024(void) {}
ARM void ActorUnkE3GL::func_ov090_02171038(void) {}
ARM void ActorUnkE3GL::func_ov090_02171054(void) {}
ARM void ActorUnkE3GL::func_ov090_02171064(void) {}
ARM void ActorUnkE3GL::func_ov090_02171074(void) {}
ARM void ActorUnkE3GL::func_ov090_02171108(void) {}
