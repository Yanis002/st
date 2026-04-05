//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOLG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSOLG();

    /* 4C */ virtual ~ActorUnkSOLG() override;

    void func_ov060_021592d4(void);
};

class ActorTypeUnkSOLG : public ActorType {
public:
    static ActorTypeUnkSOLG gInstance;

    /* 00 (base) */

    ActorTypeUnkSOLG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSOLG *GetInstance();
};
