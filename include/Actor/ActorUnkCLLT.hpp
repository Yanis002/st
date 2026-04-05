//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCLLT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCLLT();

    /* 4C */ virtual ~ActorUnkCLLT() override;

    void func_ov031_020fb33c(void);
    void func_ov031_020fb364(void);
    void func_ov031_020fb38c(void);
    void func_ov031_020fb3c8(void);
    void func_ov031_020fb40c(void);
    void func_ov031_020fb450(void);
    void func_ov031_020fb470(void);
    void func_ov031_020fb498(void);
};

class ActorTypeUnkCLLT : public ActorType {
public:
    static ActorTypeUnkCLLT gInstance;

    /* 00 (base) */

    ActorTypeUnkCLLT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCLLT *GetInstance();
};
