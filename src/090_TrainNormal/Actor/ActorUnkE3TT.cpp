//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3TT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkE3TT ActorTypeUnkE3TT::gInstance;

ARM ActorTypeUnkE3TT *ActorTypeUnkE3TT::GetInstance() {
    return &ActorTypeUnkE3TT::gInstance;
}

ARM Actor *ActorTypeUnkE3TT::Create() {
    return new(HeapIndex_2) ActorUnkE3TT();
}

ARM ActorTypeUnkE3TT::ActorTypeUnkE3TT() :
    ActorType(ActorId_E3TT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkE3TT::ActorUnkE3TT() {}

ARM void ActorUnkE3TT::func_ov090_02171174(void) {}
ARM void ActorUnkE3TT::func_ov090_021711a4(void) {}
ARM void ActorUnkE3TT::func_ov090_021711d4(void) {}
ARM void ActorUnkE3TT::func_ov090_02171404(void) {}
ARM void ActorUnkE3TT::func_ov090_02171418(void) {}
ARM void ActorUnkE3TT::func_ov090_02171434(void) {}
