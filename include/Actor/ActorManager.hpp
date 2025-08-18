#pragma once

#include "Actor/ActorUnk_ov000_020a8bb0.hpp"
#include "types.h"

class ActorManager {
public:
    /* 00 */ Actor **mActorTable;
    /* 04 */ Actor **mActorTableEnd;

    ActorUnk_ov000_020a8bb0 *func_01fff3b4(unk32 param1);
};

extern ActorManager *gActorManager;
