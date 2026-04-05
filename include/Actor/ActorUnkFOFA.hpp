//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOFA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFOFA();

    /* 4C */ virtual ~ActorUnkFOFA() override;

    void func_ov021_020f39dc(void);
    void func_ov021_020f3a14(void);
    void func_ov021_020f3a34(void);
    void func_ov021_020f3a60(void);
    void func_ov021_020f3a74(void);
    void func_ov021_020f3a90(void);
};

class ActorTypeUnkFOFA : public ActorType {
public:
    static ActorTypeUnkFOFA gInstance;

    /* 00 (base) */

    ActorTypeUnkFOFA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFOFA *GetInstance();
};
