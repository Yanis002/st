//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMTB();

    /* 4C */ virtual ~ActorUnkRMTB() override;

    void func_ov059_02162ba8(void);
    void func_ov059_02162bd0(void);
    void func_ov059_02162bf0(void);
    void func_ov059_02162c40(void);
    void func_ov059_02162c60(void);
};

class ActorTypeUnkRMTB : public ActorType {
public:
    static ActorTypeUnkRMTB gInstance;

    /* 00 (base) */

    ActorTypeUnkRMTB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMTB *GetInstance();
};
