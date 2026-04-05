//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkHYSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkHYSW();

    /* 4C */ virtual ~ActorUnkHYSW() override;

    void func_ov057_0213aa2c(void);
    void func_ov057_0213aa54(void);
    void func_ov057_0213aa74(void);
    void func_ov057_0213aab8(void);
    void func_ov057_0213ab2c(void);
    void func_ov057_0213ab40(void);
    void func_ov057_0213abac(void);
    void func_ov057_0213abc0(void);
    void func_ov057_0213abdc(void);
};

class ActorTypeUnkHYSW : public ActorType {
public:
    static ActorTypeUnkHYSW gInstance;

    /* 00 (base) */

    ActorTypeUnkHYSW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkHYSW *GetInstance();
};
