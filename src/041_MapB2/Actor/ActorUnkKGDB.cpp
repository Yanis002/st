//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKGDB.hpp"
#include "System/SysNew.hpp"

extern ActorTypeUnkKGDB ActorTypeUnkKGDB::gInstance;

ARM ActorTypeUnkKGDB *ActorTypeUnkKGDB::GetInstance() {
    return &ActorTypeUnkKGDB::gInstance;
}

ARM Actor *ActorTypeUnkKGDB::Create() {
    return new(HeapIndex_2) ActorUnkKGDB();
}

ARM ActorTypeUnkKGDB::ActorTypeUnkKGDB() :
    ActorType(ActorId_KGDB) {}

ARM /* (TODO: verify if this is accurate) */ ActorUnkKGDB::ActorUnkKGDB() {}

ARM void ActorUnkKGDB::func_ov041_02123720(void) {}
ARM void ActorUnkKGDB::func_ov041_0212375c(void) {}
ARM void ActorUnkKGDB::func_ov041_02123770(void) {}
ARM void ActorUnkKGDB::func_ov041_021237e4(void) {}
ARM void ActorUnkKGDB::func_ov041_0212382c(void) {}
ARM void ActorUnkKGDB::func_ov041_02123a2c(void) {}
ARM void ActorUnkKGDB::func_ov041_02123ac0(void) {}
ARM void ActorUnkKGDB::func_ov041_02123b5c(void) {}
