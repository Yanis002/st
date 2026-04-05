//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFOMA();

    /* 4C */ virtual ~ActorUnkFOMA() override;

    void func_ov040_0212b088(void);
};

class ActorTypeUnkFOMA : public ActorType {
public:
    static ActorTypeUnkFOMA gInstance;

    /* 00 (base) */

    ActorTypeUnkFOMA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFOMA *GetInstance();
};
