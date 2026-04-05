//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGOCA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGOCA();

    /* 4C */ virtual ~ActorUnkGOCA() override;

    void func_ov067_02157f84(void);
};

class ActorTypeUnkGOCA : public ActorType {
public:
    static ActorTypeUnkGOCA gInstance;

    /* 00 (base) */

    ActorTypeUnkGOCA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGOCA *GetInstance();
};
