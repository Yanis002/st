//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWAWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWAWA();

    /* 4C */ virtual ~ActorUnkWAWA() override;

    void func_ov066_0215bf9c(void);
};

class ActorTypeUnkWAWA : public ActorType {
public:
    static ActorTypeUnkWAWA gInstance;

    /* 00 (base) */

    ActorTypeUnkWAWA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWAWA *GetInstance();
};
