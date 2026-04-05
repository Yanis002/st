//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYKCP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkYKCP();

    /* 4C */ virtual ~ActorUnkYKCP() override;

    void func_ov040_0212c86c(void);
};

class ActorTypeUnkYKCP : public ActorType {
public:
    static ActorTypeUnkYKCP gInstance;

    /* 00 (base) */

    ActorTypeUnkYKCP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkYKCP *GetInstance();
};
