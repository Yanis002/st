//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMC0();

    /* 4C */ virtual ~ActorUnkRMC0() override;

    void func_ov060_0215d504(void);
    void func_ov060_0215d52c(void);
    void func_ov060_0215d594(void);
    void func_ov060_0215d5fc(void);
    void func_ov060_0215d610(void);
    void func_ov060_0215d634(void);
    void func_ov060_0215d648(void);
    void func_ov060_0215d6b0(void);
    void func_ov060_0215d75c(void);
    void func_ov060_0215d770(void);
    void func_ov060_0215d790(void);
    void func_ov060_0215d7e0(void);
    void func_ov060_0215d7fc(void);
    void func_ov060_0215d834(void);
    void func_ov060_0215d874(void);
};

class ActorTypeUnkRMC0 : public ActorType {
public:
    static ActorTypeUnkRMC0 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMC0();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMC0 *GetInstance();
};
