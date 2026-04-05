//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZELD : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkZELD();

    /* 4C */ virtual ~ActorUnkZELD() override;

    void func_ov039_02119020(void);
    void func_ov039_0211907c(void);
    void func_ov039_02119410(void);
    void func_ov039_02119424(void);
    void func_ov039_02119438(void);
    void func_ov039_0211944c(void);
    void func_ov039_02119460(void);
    void func_ov039_021194a8(void);
    void func_ov039_021194f8(void);
    void func_ov039_02119524(void);
    void func_ov039_021195b4(void);
    void func_ov039_02119654(void);
    void func_ov039_021196e8(void);
    void func_ov039_02119788(void);
    void func_ov039_02119968(void);
    void func_ov039_021199c0(void);
    void func_ov039_02119b5c(void);
    void func_ov039_02119bb4(void);
    void func_ov039_02119d04(void);
    void func_ov039_02119d28(void);
    void func_ov039_02119d38(void);
    void func_ov039_02119d40(void);
    void func_ov039_02119d5c(void);
    void func_ov039_02119d78(void);
    void func_ov039_02119d94(void);
    void func_ov039_02119db8(void);
    void func_ov039_02119de4(void);
    void func_ov039_02119e00(void);
    void func_ov039_02119e28(void);
    void func_ov039_02119e48(void);
};

class ActorTypeUnkZELD : public ActorType {
public:
    static ActorTypeUnkZELD gInstance;

    /* 00 (base) */

    ActorTypeUnkZELD();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkZELD *GetInstance();
};
