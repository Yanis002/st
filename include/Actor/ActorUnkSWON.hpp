//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWON : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSWON();

    /* 4C */ virtual ~ActorUnkSWON() override;

    void func_ov031_020f7dec(void);
    void func_ov031_020f7e14(void);
    void func_ov031_020f7e34(void);
    void func_ov031_020f7ed0(void);
    void func_ov031_020f7ee4(void);
    void func_ov031_020f7f00(void);
};

class ActorTypeUnkSWON : public ActorType {
public:
    static ActorTypeUnkSWON gInstance;

    /* 00 (base) */

    ActorTypeUnkSWON();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSWON *GetInstance();
};
