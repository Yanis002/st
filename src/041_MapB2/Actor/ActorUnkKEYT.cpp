//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKEYT.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkKEYT ActorTypeUnkKEYT::gInstance;

ARM ActorTypeUnkKEYT *ActorTypeUnkKEYT::GetInstance() {
    return &ActorTypeUnkKEYT::gInstance;
}

ARM Actor *ActorTypeUnkKEYT::Create() {
    return new(HeapIndex_2) ActorUnkKEYT();
}

ARM ActorTypeUnkKEYT::ActorTypeUnkKEYT() :
    ActorType(ActorId_KEYT) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkKEYT::ActorUnkKEYT() {}

ARM void ActorUnkKEYT::func_ov041_02123c04(void) {}
ARM void ActorUnkKEYT::func_ov041_02123c7c(void) {}
ARM void ActorUnkKEYT::func_ov041_02123c90(void) {}
ARM void ActorUnkKEYT::func_ov041_02123cc0(void) {}
ARM void ActorUnkKEYT::func_ov041_02123cf8(void) {}
ARM void ActorUnkKEYT::func_ov041_02123d40(void) {}
ARM void ActorUnkKEYT::func_ov041_02123d88(void) {}
ARM void ActorUnkKEYT::func_ov041_02123eb8(void) {}
ARM void ActorUnkKEYT::func_ov041_02123ff8(void) {}
ARM void ActorUnkKEYT::func_ov041_02124094(void) {}
ARM void ActorUnkKEYT::func_ov041_021240c0(void) {}
ARM void ActorUnkKEYT::func_ov041_02124164(void) {}
ARM void ActorUnkKEYT::func_ov041_02124178(void) {}
