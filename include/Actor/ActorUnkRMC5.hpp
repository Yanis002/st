//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC5 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMC5();

    /* 4C */ virtual ~ActorUnkRMC5() override;

    void func_ov060_0215e760(void);
    void func_ov060_0215e788(void);
    void func_ov060_0215e7fc(void);
    void func_ov060_0215e800(void);
    void func_ov060_0215e884(void);
    void func_ov060_0215e898(void);
    void func_ov060_0215e8e8(void);
    void func_ov060_0215e920(void);
    void func_ov060_0215e960(void);
};

class ActorTypeUnkRMC5 : public ActorType {
public:
    static ActorTypeUnkRMC5 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMC5();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMC5 *GetInstance();
};
