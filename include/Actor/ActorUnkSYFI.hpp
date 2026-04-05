//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYFI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSYFI();

    /* 4C */ virtual ~ActorUnkSYFI() override;

    void func_ov058_021432c0(void);
};

class ActorTypeUnkSYFI : public ActorType {
public:
    static ActorTypeUnkSYFI gInstance;

    /* 00 (base) */

    ActorTypeUnkSYFI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSYFI *GetInstance();
};
