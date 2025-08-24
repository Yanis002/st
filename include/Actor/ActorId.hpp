#pragma once

#include "types.h"

enum ActorId {
#define DEFINE_ACTOR_TYPE(id, name) ActorId_##name = id,
#include "Actor/ActorTypeTable.inl"
#undef DEFINE_ACTOR_TYPE
};
