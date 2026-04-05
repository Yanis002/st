//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSRSL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSRSL();

    /* 4C */ virtual ~ActorUnkSRSL() override;

    void func_ov039_02119eb0(void);
};

class ActorTypeUnkSRSL : public ActorType {
public:
    static ActorTypeUnkSRSL gInstance;

    /* 00 (base) */

    ActorTypeUnkSRSL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSRSL *GetInstance();
};
