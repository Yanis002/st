//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYIS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYIS();

    /* 4C */ virtual ~ActorUnkSYIS() override;

    void func_ov058_02142e64(void);
};

class ActorTypeUnkSYIS : public ActorType {
public:
    static ActorTypeUnkSYIS gInstance;

    /* 00 (base) */

    ActorTypeUnkSYIS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYIS *GetInstance();
};
