//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYDL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYDL();

    /* 4C */ virtual ~ActorUnkSYDL() override;

    void func_ov058_02142fe4(void);
};

class ActorTypeUnkSYDL : public ActorType {
public:
    static ActorTypeUnkSYDL gInstance;

    /* 00 (base) */

    ActorTypeUnkSYDL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYDL *GetInstance();
};
