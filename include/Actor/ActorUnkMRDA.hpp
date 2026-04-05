//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMRDA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMRDA();

    /* 4C */ virtual ~ActorUnkMRDA() override;

    void func_ov075_02150c14(void);
};

class ActorTypeUnkMRDA : public ActorType {
public:
    static ActorTypeUnkMRDA gInstance;

    /* 00 (base) */

    ActorTypeUnkMRDA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMRDA *GetInstance();
};
