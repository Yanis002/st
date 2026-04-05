//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWAMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWAMA();

    /* 4C */ virtual ~ActorUnkWAMA() override;

    void func_ov040_0212ad40(void);
};

class ActorTypeUnkWAMA : public ActorType {
public:
    static ActorTypeUnkWAMA gInstance;

    /* 00 (base) */

    ActorTypeUnkWAMA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWAMA *GetInstance();
};
