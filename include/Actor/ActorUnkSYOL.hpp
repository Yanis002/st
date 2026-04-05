//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYOL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYOL();

    /* 4C */ virtual ~ActorUnkSYOL() override;

    void func_ov058_02142ee4(void);
};

class ActorTypeUnkSYOL : public ActorType {
public:
    static ActorTypeUnkSYOL gInstance;

    /* 00 (base) */

    ActorTypeUnkSYOL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYOL *GetInstance();
};
