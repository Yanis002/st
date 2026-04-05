//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSWCH();

    /* 4C */ virtual ~ActorUnkSWCH() override;

    void func_ov031_020f7ab4(void);
    void func_ov031_020f7adc(void);
    void func_ov031_020f7b0c(void);
    void func_ov031_020f7b20(void);
    void func_ov031_020f7b88(void);
    void func_ov031_020f7b98(void);
    void func_ov031_020f7bac(void);
    void func_ov031_020f7bc8(void);
    void func_ov031_020f7bdc(void);
    void func_ov031_020f7c0c(void);
    void func_ov031_020f7c3c(void);
    void func_ov031_020f7d94(void);
};

class ActorTypeUnkSWCH : public ActorType {
public:
    static ActorTypeUnkSWCH gInstance;

    /* 00 (base) */

    ActorTypeUnkSWCH();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSWCH *GetInstance();
};
