//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEVIC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEVIC();

    /* 4C */ virtual ~ActorUnkEVIC() override;

    void func_ov000_0209bfb8(void);
    void func_ov000_0209bfe0(void);
    void func_ov000_0209c014(void);
    void func_ov000_0209c030(void);
    void func_ov000_0209c044(void);
    void func_ov000_0209c060(void);
};

class ActorTypeUnkEVIC : public ActorType {
public:
    static ActorTypeUnkEVIC gInstance;

    /* 00 (base) */

    ActorTypeUnkEVIC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEVIC *GetInstance();
};
