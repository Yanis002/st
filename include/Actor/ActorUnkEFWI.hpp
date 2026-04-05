//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFWI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFWI();

    /* 4C */ virtual ~ActorUnkEFWI() override;

    void func_ov098_021816b8(void);
    void func_ov098_02181718(void);
    void func_ov098_02181738(void);
    void func_ov098_021817d4(void);
    void func_ov098_021817f0(void);
    void func_ov098_02181820(void);
    void func_ov098_02181858(void);
};

class ActorTypeUnkEFWI : public ActorType {
public:
    static ActorTypeUnkEFWI gInstance;

    /* 00 (base) */

    ActorTypeUnkEFWI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFWI *GetInstance();
};
