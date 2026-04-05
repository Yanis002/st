//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYWL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYWL();

    /* 4C */ virtual ~ActorUnkSYWL() override;

    void func_ov058_02142f64(void);
};

class ActorTypeUnkSYWL : public ActorType {
public:
    static ActorTypeUnkSYWL gInstance;

    /* 00 (base) */

    ActorTypeUnkSYWL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYWL *GetInstance();
};
