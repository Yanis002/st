//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFOMS();

    /* 4C */ virtual ~ActorUnkFOMS() override;

    void func_ov040_0212ac3c(void);
};

class ActorTypeUnkFOMS : public ActorType {
public:
    static ActorTypeUnkFOMS gInstance;

    /* 00 (base) */

    ActorTypeUnkFOMS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFOMS *GetInstance();
};
