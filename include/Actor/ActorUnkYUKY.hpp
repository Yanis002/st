//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYUKY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkYUKY();

    /* 4C */ virtual ~ActorUnkYUKY() override;

    void func_ov036_0211b550(void);
    void func_ov036_0211b5ac(void);
    void func_ov036_0211b668(void);
    void func_ov036_0211b6cc(void);
    void func_ov036_0211b6f8(void);
    void func_ov036_0211b770(void);
    void func_ov036_0211b7a8(void);
    void func_ov036_0211b7d8(void);
    void func_ov036_0211b7ec(void);
    void func_ov036_0211b7fc(void);
};

class ActorTypeUnkYUKY : public ActorType {
public:
    static ActorTypeUnkYUKY gInstance;

    /* 00 (base) */

    ActorTypeUnkYUKY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkYUKY *GetInstance();
};
