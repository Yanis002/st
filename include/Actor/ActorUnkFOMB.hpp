//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFOMB();

    /* 4C */ virtual ~ActorUnkFOMB() override;

    void func_ov040_0212b148(void);
};

class ActorTypeUnkFOMB : public ActorType {
public:
    static ActorTypeUnkFOMB gInstance;

    /* 00 (base) */

    ActorTypeUnkFOMB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFOMB *GetInstance();
};
