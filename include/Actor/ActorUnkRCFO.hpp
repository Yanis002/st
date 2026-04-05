//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCFO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRCFO();

    /* 4C */ virtual ~ActorUnkRCFO() override;

    void func_ov033_0211937c(void);
    void func_ov033_021193a4(void);
    void func_ov033_02119484(void);
    void func_ov033_021194c0(void);
    void func_ov033_02119504(void);
    void func_ov033_02119540(void);
    void func_ov033_0211961c(void);
    void func_ov033_02119828(void);
    void func_ov033_0211983c(void);
};

class ActorTypeUnkRCFO : public ActorType {
public:
    static ActorTypeUnkRCFO gInstance;

    /* 00 (base) */

    ActorTypeUnkRCFO();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRCFO *GetInstance();
};
