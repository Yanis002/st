//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSIRO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSIRO();

    /* 4C */ virtual ~ActorUnkSIRO() override;

    void func_ov039_02119f0c(void);
};

class ActorTypeUnkSIRO : public ActorType {
public:
    static ActorTypeUnkSIRO gInstance;

    /* 00 (base) */

    ActorTypeUnkSIRO();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSIRO *GetInstance();
};
