//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGORP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGORP();

    /* 4C */ virtual ~ActorUnkGORP() override;

    void func_ov040_0212adf8(void);
};

class ActorTypeUnkGORP : public ActorType {
public:
    static ActorTypeUnkGORP gInstance;

    /* 00 (base) */

    ActorTypeUnkGORP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGORP *GetInstance();
};
