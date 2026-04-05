//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOGB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSOGB();

    /* 4C */ virtual ~ActorUnkSOGB() override;

    void func_ov060_02159360(void);
};

class ActorTypeUnkSOGB : public ActorType {
public:
    static ActorTypeUnkSOGB gInstance;

    /* 00 (base) */

    ActorTypeUnkSOGB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSOGB *GetInstance();
};
