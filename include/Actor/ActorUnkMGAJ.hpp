//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMGAJ : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMGAJ();

    /* 4C */ virtual ~ActorUnkMGAJ() override;

    void func_ov068_0215e548(void);
    void func_ov068_0215e5a8(void);
    void func_ov068_0215e6d4(void);
    void func_ov068_0215e76c(void);
    void func_ov068_0215e7ac(void);
    void func_ov068_0215e7b8(void);
    void func_ov068_0215e7e4(void);
    void func_ov068_0215e894(void);
    void func_ov068_0215e8a0(void);
    void func_ov068_0215e8c8(void);
    void _ZN18UnkStruct_027e0d7019func_ov068_0215e8f8Ev(void);
};

class ActorTypeUnkMGAJ : public ActorType {
public:
    static ActorTypeUnkMGAJ gInstance;

    /* 00 (base) */

    ActorTypeUnkMGAJ();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMGAJ *GetInstance();
};
