//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNCMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNCMB();

    /* 4C */ virtual ~ActorUnkNCMB() override;

    void func_ov062_02159b48(void);
};

class ActorTypeUnkNCMB : public ActorType {
public:
    static ActorTypeUnkNCMB gInstance;

    /* 00 (base) */

    ActorTypeUnkNCMB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNCMB *GetInstance();
};
