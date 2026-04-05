//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNCCA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNCCA();

    /* 4C */ virtual ~ActorUnkNCCA() override;

    void func_ov040_0212ac98(void);
};

class ActorTypeUnkNCCA : public ActorType {
public:
    static ActorTypeUnkNCCA gInstance;

    /* 00 (base) */

    ActorTypeUnkNCCA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNCCA *GetInstance();
};
