//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITWP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkITWP();

    /* 4C */ virtual ~ActorUnkITWP() override;

    void func_ov105_02188e78(void);
};

class ActorTypeUnkITWP : public ActorType {
public:
    static ActorTypeUnkITWP gInstance;

    /* 00 (base) */

    ActorTypeUnkITWP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkITWP *GetInstance();
};
