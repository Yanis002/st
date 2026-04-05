//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOLB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSOLB();

    /* 4C */ virtual ~ActorUnkSOLB() override;

    void func_ov060_02157f58(void);
};

class ActorTypeUnkSOLB : public ActorType {
public:
    static ActorTypeUnkSOLB gInstance;

    /* 00 (base) */

    ActorTypeUnkSOLB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSOLB *GetInstance();
};
