//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYFO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYFO();

    /* 4C */ virtual ~ActorUnkSYFO() override;

    void func_ov058_02143044(void);
};

class ActorTypeUnkSYFO : public ActorType {
public:
    static ActorTypeUnkSYFO gInstance;

    /* 00 (base) */

    ActorTypeUnkSYFO();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYFO *GetInstance();
};
