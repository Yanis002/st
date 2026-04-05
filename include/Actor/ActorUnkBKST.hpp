//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBKST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBKST();

    /* 4C */ virtual ~ActorUnkBKST() override;

    void func_ov074_0215c9fc(void);
    void func_ov074_0215ca3c(void);
    void func_ov074_0215cab4(void);
    void func_ov074_0215cbd4(void);
    void func_ov074_0215cc10(void);
    void func_ov074_0215cc54(void);
    void func_ov074_0215cc78(void);
    void func_ov074_0215ccb4(void);
    void func_ov074_0215cdd8(void);
    void func_ov074_0215cdf8(void);
    void func_ov074_0215ce20(void);
    void func_ov074_0215ce3c(void);
    void func_ov074_0215ce5c(void);
    void func_ov074_0215ce60(void);
    void func_ov074_0215ce80(void);
    void func_ov074_0215ce9c(void);
    void func_ov074_0215cee8(void);
    void func_ov074_0215ceec(void);
    void func_ov074_0215cf08(void);
    void func_ov074_0215cf48(void);
    void func_ov074_0215cf54(void);
    void func_ov074_0215cf80(void);
    void func_ov074_0215cf88(void);
    void func_ov074_0215cfe4(void);
    void func_ov074_0215d06c(void);
    void func_ov074_0215d184(void);
    void func_ov074_0215d4c0(void);
    void func_ov074_0215d6f4(void);
    void func_ov074_0215d714(void);
    void func_ov074_0215d73c(void);
};

class ActorTypeUnkBKST : public ActorType {
public:
    static ActorTypeUnkBKST gInstance;

    /* 00 (base) */

    ActorTypeUnkBKST();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBKST *GetInstance();
};
