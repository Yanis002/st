//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNCWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNCWA();

    /* 4C */ virtual ~ActorUnkNCWA() override;

    void func_ov062_0215a024(void);
    void func_ov062_0215a084(void);
    void func_ov062_0215a0a4(void);
    void func_ov062_0215a220(void);
    void func_ov062_0215a238(void);
    void func_ov062_0215a28c(void);
    void func_ov062_0215a380(void);
    void func_ov062_0215a3a8(void);
    void func_ov062_0215a3d8(void);
};

class ActorTypeUnkNCWA : public ActorType {
public:
    static ActorTypeUnkNCWA gInstance;

    /* 00 (base) */

    ActorTypeUnkNCWA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNCWA *GetInstance();
};
