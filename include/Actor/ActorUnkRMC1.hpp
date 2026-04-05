//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMC1();

    /* 4C */ virtual ~ActorUnkRMC1() override;

    void func_ov060_0215d8b8(void);
    void func_ov060_0215d8e0(void);
    void func_ov060_0215d900(void);
    void func_ov060_0215d950(void);
    void func_ov060_0215d988(void);
    void func_ov060_0215d9c8(void);
};

class ActorTypeUnkRMC1 : public ActorType {
public:
    static ActorTypeUnkRMC1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMC1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMC1 *GetInstance();
};
