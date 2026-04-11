//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "System/SysNew.hpp"

// --- Actor ZLSL ---

static ActorProfileUnkZLSL sActorProfileUnkZLSL;

ARM ActorProfileUnkZLSL *ActorProfileUnkZLSL::GetProfile() {
    return &sActorProfileUnkZLSL;
}

ARM Actor *ActorProfileUnkZLSL::Create() {
    return new(HeapIndex_2) ActorUnkZLSL();
}

ARM ActorProfileUnkZLSL::ActorProfileUnkZLSL() :
    ActorProfile(ActorId_ZLSL) {}

ARM ActorUnkZLSL::ActorUnkZLSL() {}

// --- Actor ZSRS ---

static ActorProfileUnkZSRS sActorProfileUnkZSRS;

ARM ActorProfileUnkZSRS *ActorProfileUnkZSRS::GetProfile() {
    return &sActorProfileUnkZSRS;
}

ARM Actor *ActorProfileUnkZSRS::Create() {
    return new(HeapIndex_2) ActorUnkZSRS();
}

ARM ActorProfileUnkZSRS::ActorProfileUnkZSRS() :
    ActorProfile(ActorId_ZSRS) {}

ARM ActorUnkZSRS::ActorUnkZSRS() {}

ActorProfileUnkZLSL::~ActorProfileUnkZLSL() {}
ActorProfileUnkZSRS::~ActorProfileUnkZSRS() {}