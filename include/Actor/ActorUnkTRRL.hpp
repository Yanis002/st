//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRRL : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTRRL();

    /* 4C */ virtual ~ActorUnkTRRL() override;

    void func_ov034_0211e334(void);
    void func_ov034_0211e364(void);
    void func_ov034_0211e510(void);
    void func_ov034_0211e564(void);
    void func_ov034_0211e5c0(void);
    void func_ov034_0211e790(void);
    void func_ov034_0211e7fc(void);
    void func_ov034_0211e818(void);
    void func_ov034_0211e81c(void);
    void func_ov034_0211e840(void);
};

class ActorTypeUnkTRRL : public ActorType {
public:
    static ActorTypeUnkTRRL gInstance;

    /* 00 (base) */

    ActorTypeUnkTRRL();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTRRL *GetInstance();
};
