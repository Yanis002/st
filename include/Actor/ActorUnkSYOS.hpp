//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYOS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYOS();

    /* 4C */ virtual ~ActorUnkSYOS() override;

    void func_ov058_02142da4(void);
};

class ActorTypeUnkSYOS : public ActorType {
public:
    static ActorTypeUnkSYOS gInstance;

    /* 00 (base) */

    ActorTypeUnkSYOS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYOS *GetInstance();
};
