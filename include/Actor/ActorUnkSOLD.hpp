//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOLD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSOLD();

    /* 4C */ virtual ~ActorUnkSOLD() override;

    void func_ov060_02157ed0(void);
};

class ActorTypeUnkSOLD : public ActorType {
public:
    static ActorTypeUnkSOLD gInstance;

    /* 00 (base) */

    ActorTypeUnkSOLD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSOLD *GetInstance();
};
