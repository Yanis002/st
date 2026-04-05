//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSD.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkRMSD ActorTypeUnkRMSD::gInstance;

ARM ActorTypeUnkRMSD *ActorTypeUnkRMSD::GetInstance() {
    return &ActorTypeUnkRMSD::gInstance;
}

ARM Actor *ActorTypeUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ARM ActorTypeUnkRMSD::ActorTypeUnkRMSD() :
    ActorType(ActorId_RMSD) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkRMSD::ActorUnkRMSD() {}

ARM void ActorUnkRMSD::func_ov063_0215c394(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c408(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c45c(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c474(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c488(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c4c8(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c508(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c538(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c570(void) {}
