//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWAWC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWAWC();

    /* 4C */ virtual ~ActorUnkWAWC() override;

    void func_ov066_0215c04c(void);
    void func_ov066_0215c0bc(void);
    void func_ov066_0215c0dc(void);
    void func_ov066_0215c120(void);
    void func_ov066_0215c224(void);
    void func_ov066_0215c27c(void);
    void func_ov066_0215c2d0(void);
    void func_ov066_0215c3c4(void);
    void func_ov066_0215c3ec(void);
    void func_ov066_0215c41c(void);
    void func_ov066_0215c430(void);
};

class ActorTypeUnkWAWC : public ActorType {
public:
    static ActorTypeUnkWAWC gInstance;

    /* 00 (base) */

    ActorTypeUnkWAWC();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWAWC *GetInstance();
};
