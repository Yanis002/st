//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMZS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkDMZS();

    /* 4C */ virtual ~ActorUnkDMZS() override;

    void func_ov088_0216c39c(void);
    void func_ov088_0216c3c4(void);
    void func_ov088_0216c420(void);
    void func_ov088_0216c444(void);
    void func_ov088_0216c470(void);
    void func_ov088_0216c4d0(void);
    void func_ov088_0216c6b0(void);
};

class ActorTypeUnkDMZS : public ActorType {
public:
    static ActorTypeUnkDMZS gInstance;

    /* 00 (base) */

    ActorTypeUnkDMZS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkDMZS *GetInstance();
};
