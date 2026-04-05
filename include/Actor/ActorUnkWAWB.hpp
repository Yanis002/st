//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWAWB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWAWB();

    /* 4C */ virtual ~ActorUnkWAWB() override;

    void func_ov066_0215bac8(void);
    void func_ov066_0215bb44(void);
    void func_ov066_0215bb64(void);
    void func_ov066_0215bbb0(void);
    void func_ov066_0215bd1c(void);
    void func_ov066_0215bd90(void);
    void func_ov066_0215bde4(void);
    void func_ov066_0215bed8(void);
    void func_ov066_0215bee0(void);
    void func_ov066_0215beec(void);
    void func_ov066_0215bf14(void);
    void func_ov066_0215bf44(void);
    void func_ov066_0215bf58(void);
};

class ActorTypeUnkWAWB : public ActorType {
public:
    static ActorTypeUnkWAWB gInstance;

    /* 00 (base) */

    ActorTypeUnkWAWB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWAWB *GetInstance();
};
