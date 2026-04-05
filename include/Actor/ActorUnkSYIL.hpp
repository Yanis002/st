//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYIL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYIL();

    /* 4C */ virtual ~ActorUnkSYIL() override;

    void func_ov058_02142fa4(void);
};

class ActorTypeUnkSYIL : public ActorType {
public:
    static ActorTypeUnkSYIL gInstance;

    /* 00 (base) */

    ActorTypeUnkSYIL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYIL *GetInstance();
};
