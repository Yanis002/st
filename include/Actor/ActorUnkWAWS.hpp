//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWAWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWAWS();

    /* 4C */ virtual ~ActorUnkWAWS() override;

    void func_ov066_0215ba6c(void);
};

class ActorTypeUnkWAWS : public ActorType {
public:
    static ActorTypeUnkWAWS gInstance;

    /* 00 (base) */

    ActorTypeUnkWAWS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWAWS *GetInstance();
};
