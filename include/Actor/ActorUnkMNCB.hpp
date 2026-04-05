//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMNCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkMNCB();

    /* 4C */ virtual ~ActorUnkMNCB() override;

    void func_ov094_0216fabc(void);
    void func_ov094_0216fb00(void);
    void func_ov094_0216fbc0(void);
    void func_ov094_0216fbd4(void);
    void func_ov094_0216fbdc(void);
    void func_ov094_0216fc74(void);
    void func_ov094_0216fc7c(void);
    void func_ov094_0216fd58(void);
    void func_ov094_0216fe34(void);
    void func_ov094_0216fe70(void);
    void func_ov094_0216ffe8(void);
    void func_ov094_02170374(void);
    void func_ov094_02170584(void);
    void func_ov094_021705d4(void);
    void func_ov094_02170658(void);
    void func_ov094_021706e4(void);
};

class ActorTypeUnkMNCB : public ActorType {
public:
    static ActorTypeUnkMNCB gInstance;

    /* 00 (base) */

    ActorTypeUnkMNCB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkMNCB *GetInstance();
};
