//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3ST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkE3ST();

    /* 4C */ virtual ~ActorUnkE3ST() override;

    void func_ov090_02171478(void);
    void func_ov090_021714a0(void);
    void func_ov090_021714e0(void);
    void func_ov090_021714f4(void);
    void func_ov090_02171510(void);
};

class ActorTypeUnkE3ST : public ActorType {
public:
    static ActorTypeUnkE3ST gInstance;

    /* 00 (base) */

    ActorTypeUnkE3ST();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkE3ST *GetInstance();
};
