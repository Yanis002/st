//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMDS();

    /* 4C */ virtual ~ActorUnkRMDS() override;

    void func_ov086_0215daa8(void);
    void func_ov086_0215dad0(void);
    void func_ov086_0215db44(void);
    void func_ov086_0215dbb0(void);
    void func_ov086_0215dbb4(void);
    void func_ov086_0215dbc8(void);
    void func_ov086_0215dbdc(void);
    void func_ov086_0215dbe8(void);
    void func_ov086_0215dc38(void);
    void func_ov086_0215dc60(void);
    void func_ov086_0215dc90(void);
};

class ActorTypeUnkRMDS : public ActorType {
public:
    static ActorTypeUnkRMDS gInstance;

    /* 00 (base) */

    ActorTypeUnkRMDS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMDS *GetInstance();
};
