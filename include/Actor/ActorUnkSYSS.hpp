//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYSS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYSS();

    /* 4C */ virtual ~ActorUnkSYSS() override;

    void func_ov058_02142de4(void);
};

class ActorTypeUnkSYSS : public ActorType {
public:
    static ActorTypeUnkSYSS gInstance;

    /* 00 (base) */

    ActorTypeUnkSYSS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYSS *GetInstance();
};
