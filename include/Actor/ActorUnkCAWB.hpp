//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAWB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAWB();

    /* 4C */ virtual ~ActorUnkCAWB() override;

    void func_ov040_0212af44(void);
};

class ActorTypeUnkCAWB : public ActorType {
public:
    static ActorTypeUnkCAWB gInstance;

    /* 00 (base) */

    ActorTypeUnkCAWB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAWB *GetInstance();
};
