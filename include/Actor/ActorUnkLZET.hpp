//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLZET : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkLZET();

    /* 4C */ virtual ~ActorUnkLZET() override;

    void func_ov096_0217a6cc(void);
    void func_ov096_0217a6f4(void);
    void func_ov096_0217a708(void);
    void func_ov096_0217a724(void);
};

class ActorTypeUnkLZET : public ActorType {
public:
    static ActorTypeUnkLZET gInstance;

    /* 00 (base) */

    ActorTypeUnkLZET();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkLZET *GetInstance();
};
