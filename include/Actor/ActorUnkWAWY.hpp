//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWAWY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWAWY();

    /* 4C */ virtual ~ActorUnkWAWY() override;

    void func_ov036_0211b83c(void);
    void func_ov036_0211b898(void);
    void func_ov036_0211b954(void);
    void func_ov036_0211b9bc(void);
    void func_ov036_0211b9e8(void);
    void func_ov036_0211ba38(void);
    void func_ov036_0211ba70(void);
    void func_ov036_0211baa0(void);
    void func_ov036_0211bab4(void);
    void func_ov036_0211bac4(void);
};

class ActorTypeUnkWAWY : public ActorType {
public:
    static ActorTypeUnkWAWY gInstance;

    /* 00 (base) */

    ActorTypeUnkWAWY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWAWY *GetInstance();
};
