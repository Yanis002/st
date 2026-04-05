//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYDS();

    /* 4C */ virtual ~ActorUnkSYDS() override;

    void func_ov058_02142ea4(void);
};

class ActorTypeUnkSYDS : public ActorType {
public:
    static ActorTypeUnkSYDS gInstance;

    /* 00 (base) */

    ActorTypeUnkSYDS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYDS *GetInstance();
};
