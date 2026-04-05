//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGORY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkGORY();

    /* 4C */ virtual ~ActorUnkGORY() override;

    void func_ov036_0211bb04(void);
    void func_ov036_0211bb64(void);
    void func_ov036_0211bc20(void);
    void func_ov036_0211bc84(void);
    void func_ov036_0211bcb0(void);
    void func_ov036_0211bd44(void);
    void func_ov036_0211bd7c(void);
    void func_ov036_0211bdac(void);
    void func_ov036_0211bdc0(void);
    void func_ov036_0211bdd0(void);
};

class ActorTypeUnkGORY : public ActorType {
public:
    static ActorTypeUnkGORY gInstance;

    /* 00 (base) */

    ActorTypeUnkGORY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkGORY *GetInstance();
};
