//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMBC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRMBC();

    /* 4C */ virtual ~ActorUnkRMBC() override;

    void func_ov062_0215a41c(void);
    void func_ov062_0215a444(void);
    void func_ov062_0215a464(void);
    void func_ov062_0215a4b4(void);
    void func_ov062_0215a4d4(void);
    void func_ov062_0215a4fc(void);
};

class ActorTypeUnkRMBC : public ActorType {
public:
    static ActorTypeUnkRMBC gInstance;

    /* 00 (base) */

    ActorTypeUnkRMBC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRMBC *GetInstance();
};
