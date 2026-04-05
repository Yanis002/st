//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNORE : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNORE();

    /* 4C */ virtual ~ActorUnkNORE() override;

    void func_ov031_020f7f44(void);
    void func_ov031_020f7f6c(void);
    void func_ov031_020f7f8c(void);
    void func_ov031_020f7fe0(void);
    void func_ov031_020f7ff4(void);
    void func_ov031_020f8010(void);
};

class ActorTypeUnkNORE : public ActorType {
public:
    static ActorTypeUnkNORE gInstance;

    /* 00 (base) */

    ActorTypeUnkNORE();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNORE *GetInstance();
};
