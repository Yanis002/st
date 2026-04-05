//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSVC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDSVC();

    /* 4C */ virtual ~ActorUnkDSVC() override;

    void func_ov084_0215af14(void);
    void func_ov084_0215af3c(void);
    void func_ov084_0215af5c(void);
    void func_ov084_0215afac(void);
    void func_ov084_0215afcc(void);
    void func_ov084_0215aff4(void);
};

class ActorTypeUnkDSVC : public ActorType {
public:
    static ActorTypeUnkDSVC gInstance;

    /* 00 (base) */

    ActorTypeUnkDSVC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDSVC *GetInstance();
};
