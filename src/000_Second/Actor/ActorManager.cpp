#include "Actor/ActorManager.hpp"
#include "Actor/ActorId.hpp"

static ActorId gActorTypeLookupTable[] = {
#define DEFINE_ACTOR_TYPE(id, name) id,
#include "Actor/ActorTypeTable.inl"
#undef DEFINE_ACTOR_TYPE
};

static ActorTypeGetInstance gActorTypes[] = {
#define DEFINE_ACTOR_TYPE(id, name) &ActorType##name::GetInstance,
#include "Actor/ActorTypeTable.inl"
#undef DEFINE_ACTOR_TYPE
};
