//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGOCP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGOCP();

    /* 4C */ virtual ~ActorUnkGOCP() override;

    void func_ov040_0212aea0(void);
};

class ActorTypeUnkGOCP : public ActorType {
public:
    static ActorTypeUnkGOCP gInstance;

    /* 00 (base) */

    ActorTypeUnkGOCP();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGOCP *GetInstance();
};
