//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC6 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMC6();

    /* 4C */ virtual ~ActorUnkRMC6() override;

    void func_ov060_0215e0bc(void);
    void func_ov060_0215e0e4(void);
    void func_ov060_0215e104(void);
    void func_ov060_0215e108(void);
    void func_ov060_0215e158(void);
    void func_ov060_0215e178(void);
    void func_ov060_0215e1a0(void);
};

class ActorTypeUnkRMC6 : public ActorType {
public:
    static ActorTypeUnkRMC6 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMC6();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMC6 *GetInstance();
};
