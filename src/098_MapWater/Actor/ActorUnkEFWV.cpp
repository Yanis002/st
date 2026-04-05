//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFWV.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkEFWV ActorTypeUnkEFWV::gInstance;

ARM ActorTypeUnkEFWV *ActorTypeUnkEFWV::GetInstance() {
    return &ActorTypeUnkEFWV::gInstance;
}

ARM Actor *ActorTypeUnkEFWV::Create() {
    return new(HeapIndex_2) ActorUnkEFWV();
}

ARM ActorTypeUnkEFWV::ActorTypeUnkEFWV() :
    ActorType(ActorId_EFWV) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkEFWV::ActorUnkEFWV() {}

ARM void ActorUnkEFWV::func_ov098_0218117c(void) {}
ARM void ActorUnkEFWV::func_ov098_02181218(void) {}
ARM void ActorUnkEFWV::func_ov098_0218122c(void) {}
ARM void ActorUnkEFWV::func_ov098_02181240(void) {}
ARM void ActorUnkEFWV::func_ov098_021812dc(void) {}
ARM void ActorUnkEFWV::func_ov098_02181378(void) {}
ARM void ActorUnkEFWV::func_ov098_021813c8(void) {}
ARM void ActorUnkEFWV::func_ov098_021813dc(void) {}
ARM void ActorUnkEFWV::func_ov098_02181410(void) {}
ARM void ActorUnkEFWV::func_ov098_0218142c(void) {}
ARM void ActorUnkEFWV::func_ov098_02181598(void) {}
ARM void ActorUnkEFWV::func_ov098_021815d0(void) {}
ARM void ActorUnkEFWV::func_ov098_02181600(void) {}
ARM void ActorUnkEFWV::func_ov098_02181624(void) {}
ARM void ActorUnkEFWV::func_ov098_02181634(void) {}
ARM void ActorUnkEFWV::func_ov098_0218163c(void) {}
ARM void ActorUnkEFWV::func_ov098_02181658(void) {}
ARM void ActorUnkEFWV::func_ov098_02181674(void) {}
