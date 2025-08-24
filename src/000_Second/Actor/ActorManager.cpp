#include "Actor/ActorManager.hpp"
#include "Actor/ActorId.hpp"
#include "global.h"

static ActorId gActorTypeLookupTable[] = {
#define DEFINE_ACTOR_TYPE(id, name) ActorId_##name,
#include "Actor/ActorTypeTable.inl"
#undef DEFINE_ACTOR_TYPE
};

// static ActorTypeGetInstance gActorTypes[] = {
// #define DEFINE_ACTOR_TYPE(id, name) &ActorType##name::GetInstance,
// #include "Actor/ActorTypeTable.inl"
// #undef DEFINE_ACTOR_TYPE
// };

DTCM_BEGIN;
ActorManager *gActorManager;
DTCM_END;
