//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNICO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNICO();

    /* 4C */ virtual ~ActorUnkNICO() override;

    void func_ov062_02158390(void);
    void func_ov062_021583f0(void);
    void func_ov062_0215851c(void);
    void func_ov062_02158530(void);
    void func_ov062_02158614(void);
    void func_ov062_0215863c(void);
    void func_ov062_0215866c(void);
    void func_ov062_02158690(void);
    void func_ov062_021586bc(void);
    void func_ov062_021586d8(void);
    void func_ov062_02158700(void);
    void func_ov062_02158720(void);
};

class ActorTypeUnkNICO : public ActorType {
public:
    static ActorTypeUnkNICO gInstance;

    /* 00 (base) */

    ActorTypeUnkNICO();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNICO *GetInstance();
};
