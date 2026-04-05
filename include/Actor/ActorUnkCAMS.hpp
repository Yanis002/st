//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAMS();

    /* 4C */ virtual ~ActorUnkCAMS() override;

    void func_ov061_021585b4(void);
};

class ActorTypeUnkCAMS : public ActorType {
public:
    static ActorTypeUnkCAMS gInstance;

    /* 00 (base) */

    ActorTypeUnkCAMS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAMS *GetInstance();
};
