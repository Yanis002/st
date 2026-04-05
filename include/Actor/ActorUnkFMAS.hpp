//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFMAS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFMAS();

    /* 4C */ virtual ~ActorUnkFMAS() override;

    void func_ov035_0211aa98(void);
};

class ActorTypeUnkFMAS : public ActorType {
public:
    static ActorTypeUnkFMAS gInstance;

    /* 00 (base) */

    ActorTypeUnkFMAS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFMAS *GetInstance();
};
