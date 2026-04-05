//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRML1();

    /* 4C */ virtual ~ActorUnkRML1() override;

    void func_ov062_02158024(void);
    void func_ov062_0215804c(void);
    void func_ov062_0215806c(void);
    void func_ov062_021580bc(void);
    void func_ov062_021580dc(void);
    void func_ov062_02158104(void);
};

class ActorTypeUnkRML1 : public ActorType {
public:
    static ActorTypeUnkRML1 gInstance;

    /* 00 (base) */

    ActorTypeUnkRML1();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRML1 *GetInstance();
};
