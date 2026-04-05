//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVW : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMVW();

    /* 4C */ virtual ~ActorUnkRMVW() override;

    void func_ov059_021621d8(void);
    void func_ov059_02162200(void);
    void func_ov059_021622c0(void);
    void func_ov059_02162360(void);
    void func_ov059_0216238c(void);
    void func_ov059_021623dc(void);
    void func_ov059_021623e4(void);
    void func_ov059_02162414(void);
    void func_ov059_0216244c(void);
};

class ActorTypeUnkRMVW : public ActorType {
public:
    static ActorTypeUnkRMVW gInstance;

    /* 00 (base) */

    ActorTypeUnkRMVW();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMVW *GetInstance();
};
