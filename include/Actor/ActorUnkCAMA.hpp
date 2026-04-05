//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAMA();

    /* 4C */ virtual ~ActorUnkCAMA() override;

    void func_ov061_02158610(void);
};

class ActorTypeUnkCAMA : public ActorType {
public:
    static ActorTypeUnkCAMA gInstance;

    /* 00 (base) */

    ActorTypeUnkCAMA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAMA *GetInstance();
};
