//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMC3();

    /* 4C */ virtual ~ActorUnkRMC3() override;

    void func_ov060_0215e1e4(void);
    void func_ov060_0215e20c(void);
    void func_ov060_0215e308(void);
    void func_ov060_0215e31c(void);
    void func_ov060_0215e4b0(void);
    void func_ov060_0215e4c8(void);
    void func_ov060_0215e4dc(void);
    void func_ov060_0215e51c(void);
    void func_ov060_0215e540(void);
    void func_ov060_0215e55c(void);
    void func_ov060_0215e5a4(void);
    void func_ov060_0215e5f4(void);
};

class ActorTypeUnkRMC3 : public ActorType {
public:
    static ActorTypeUnkRMC3 gInstance;

    /* 00 (base) */

    ActorTypeUnkRMC3();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMC3 *GetInstance();
};
