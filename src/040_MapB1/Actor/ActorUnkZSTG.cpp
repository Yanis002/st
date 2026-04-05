//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZSTG.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkZSTG ActorTypeUnkZSTG::gInstance;

ARM ActorTypeUnkZSTG *ActorTypeUnkZSTG::GetInstance() {
    return &ActorTypeUnkZSTG::gInstance;
}

ARM Actor *ActorTypeUnkZSTG::Create() {
    return new(HeapIndex_2) ActorUnkZSTG();
}

ARM ActorTypeUnkZSTG::ActorTypeUnkZSTG() :
    ActorType(ActorId_ZSTG) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkZSTG::ActorUnkZSTG() {}

ARM void ActorUnkZSTG::func_ov040_0212a81c(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a83c(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a888(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a8c4(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a8c8(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a900(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a914(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a9bc(void) {}
ARM void ActorUnkZSTG::func_ov040_0212a9dc(void) {}
ARM void ActorUnkZSTG::func_ov040_0212aa74(void) {}
ARM void ActorUnkZSTG::func_ov040_0212aa78(void) {}
ARM void ActorUnkZSTG::func_ov040_0212aaa4(void) {}
ARM void ActorUnkZSTG::func_ov040_0212aae8(void) {}
ARM void ActorUnkZSTG::func_ov040_0212aafc(void) {}
ARM void ActorUnkZSTG::func_ov040_0212ab18(void) {}
ARM void ActorUnkZSTG::func_ov040_0212ab2c(void) {}
ARM void ActorUnkZSTG::func_ov040_0212ab64(void) {}
ARM void ActorUnkZSTG::func_ov040_0212ab6c(void) {}
