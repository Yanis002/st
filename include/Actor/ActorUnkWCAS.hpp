//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWCAS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWCAS();

    /* 4C */ virtual ~ActorUnkWCAS() override;

    void func_ov026_02127f98(void);
};

class ActorTypeUnkWCAS : public ActorType {
public:
    static ActorTypeUnkWCAS gInstance;

    /* 00 (base) */

    ActorTypeUnkWCAS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWCAS *GetInstance();
};
