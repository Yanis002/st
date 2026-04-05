//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYSN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYSN();

    /* 4C */ virtual ~ActorUnkSYSN() override;

    void func_ov058_0214311c(void);
};

class ActorTypeUnkSYSN : public ActorType {
public:
    static ActorTypeUnkSYSN gInstance;

    /* 00 (base) */

    ActorTypeUnkSYSN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYSN *GetInstance();
};
