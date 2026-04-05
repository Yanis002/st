//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAMY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCAMY();

    /* 4C */ virtual ~ActorUnkCAMY() override;

    void func_ov036_0211afac(void);
    void func_ov036_0211b008(void);
    void func_ov036_0211b0c4(void);
    void func_ov036_0211b11c(void);
    void func_ov036_0211b148(void);
    void func_ov036_0211b1ac(void);
    void func_ov036_0211b1e4(void);
    void func_ov036_0211b214(void);
    void func_ov036_0211b228(void);
    void func_ov036_0211b238(void);
};

class ActorTypeUnkCAMY : public ActorType {
public:
    static ActorTypeUnkCAMY gInstance;

    /* 00 (base) */

    ActorTypeUnkCAMY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCAMY *GetInstance();
};
