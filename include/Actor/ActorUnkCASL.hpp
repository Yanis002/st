//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCASL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCASL();

    /* 4C */ virtual ~ActorUnkCASL() override;

    void func_ov060_0215e9a4(void);
    void func_ov060_0215e9cc(void);
    void _ZN18UnkStruct_027e0d70D1Ev(void);
    void func_ov060_0215eafc(void);
    void func_ov060_0215eb10(void);
    void func_ov060_0215eb24(void);
    void func_ov060_0215eb44(void);
    void func_ov060_0215eb6c(void);
    void func_ov060_0215eb9c(void);
};

class ActorTypeUnkCASL : public ActorType {
public:
    static ActorTypeUnkCASL gInstance;

    /* 00 (base) */

    ActorTypeUnkCASL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCASL *GetInstance();
};
