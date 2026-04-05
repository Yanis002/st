//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYSL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYSL();

    /* 4C */ virtual ~ActorUnkSYSL() override;

    void func_ov058_02142f24(void);
};

class ActorTypeUnkSYSL : public ActorType {
public:
    static ActorTypeUnkSYSL gInstance;

    /* 00 (base) */

    ActorTypeUnkSYSL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYSL *GetInstance();
};
