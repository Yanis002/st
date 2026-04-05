//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVV : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMVV();

    /* 4C */ virtual ~ActorUnkRMVV() override;

    void func_ov059_02162490(void);
    void func_ov059_021624b8(void);
    void func_ov059_02162578(void);
    void func_ov059_02162618(void);
    void func_ov059_02162644(void);
    void func_ov059_02162694(void);
    void func_ov059_0216269c(void);
    void func_ov059_021626cc(void);
    void func_ov059_02162704(void);
};

class ActorTypeUnkRMVV : public ActorType {
public:
    static ActorTypeUnkRMVV gInstance;

    /* 00 (base) */

    ActorTypeUnkRMVV();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMVV *GetInstance();
};
