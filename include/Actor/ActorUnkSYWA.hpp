//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYWA();

    /* 4C */ virtual ~ActorUnkSYWA() override;

    void func_ov058_021431ec(void);
};

class ActorTypeUnkSYWA : public ActorType {
public:
    static ActorTypeUnkSYWA gInstance;

    /* 00 (base) */

    ActorTypeUnkSYWA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYWA *GetInstance();
};
