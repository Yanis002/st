//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCLZN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCLZN();

    /* 4C */ virtual ~ActorUnkCLZN() override;

    void func_ov021_020f38f8(void);
    void func_ov021_020f3920(void);
    void func_ov021_020f3940(void);
    void func_ov021_020f3964(void);
    void func_ov021_020f3968(void);
    void func_ov021_020f397c(void);
    void func_ov021_020f3998(void);
};

class ActorTypeUnkCLZN : public ActorType {
public:
    static ActorTypeUnkCLZN gInstance;

    /* 00 (base) */

    ActorTypeUnkCLZN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCLZN *GetInstance();
};
