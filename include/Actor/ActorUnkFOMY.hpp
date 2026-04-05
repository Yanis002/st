//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOMY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkFOMY();

    /* 4C */ virtual ~ActorUnkFOMY() override;

    void func_ov036_0211b278(void);
    void func_ov036_0211b2d0(void);
    void func_ov036_0211b38c(void);
    void func_ov036_0211b3f4(void);
    void func_ov036_0211b420(void);
    void func_ov036_0211b484(void);
    void func_ov036_0211b4bc(void);
    void func_ov036_0211b4ec(void);
    void func_ov036_0211b500(void);
    void func_ov036_0211b510(void);
};

class ActorTypeUnkFOMY : public ActorType {
public:
    static ActorTypeUnkFOMY gInstance;

    /* 00 (base) */

    ActorTypeUnkFOMY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkFOMY *GetInstance();
};
