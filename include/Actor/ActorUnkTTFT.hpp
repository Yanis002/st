//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTTFT();

    /* 4C */ virtual ~ActorUnkTTFT() override;

    void func_ov030_0214d698(void);
    void func_ov030_0214d6c0(void);
    void func_ov030_0214d710(void);
    void func_ov030_0214d724(void);
    void func_ov030_0214d78c(void);
    void func_ov030_0214d7a0(void);
    void func_ov030_0214d7bc(void);
};

class ActorTypeUnkTTFT : public ActorType {
public:
    static ActorTypeUnkTTFT gInstance;

    /* 00 (base) */

    ActorTypeUnkTTFT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTTFT *GetInstance();
};
