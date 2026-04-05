//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTERY : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTERY();

    /* 4C */ virtual ~ActorUnkTERY() override;

    void func_ov036_0211be10(void);
    void func_ov036_0211be6c(void);
    void func_ov036_0211bea0(void);
    void func_ov036_0211becc(void);
    void func_ov036_0211bf88(void);
    void func_ov036_0211bf9c(void);
    void func_ov036_0211c000(void);
    void func_ov036_0211c02c(void);
    void func_ov036_0211c0e4(void);
    void func_ov036_0211c0ec(void);
    void func_ov036_0211c108(void);
    void func_ov036_0211c140(void);
    void func_ov036_0211c170(void);
    void func_ov036_0211c184(void);
    void func_ov036_0211c194(void);
};

class ActorTypeUnkTERY : public ActorType {
public:
    static ActorTypeUnkTERY gInstance;

    /* 00 (base) */

    ActorTypeUnkTERY();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTERY *GetInstance();
};
