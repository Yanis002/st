//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTCAM : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTCAM();

    /* 4C */ virtual ~ActorUnkTCAM() override;

    void func_ov093_02177258(void);
    void func_ov093_02177280(void);
    void func_ov093_021772a0(void);
    void func_ov093_021772bc(void);
    void func_ov093_0217733c(void);
    void func_ov093_02177474(void);
    void func_ov093_0217747c(void);
    void func_ov093_0217748c(void);
    void func_ov093_02177528(void);
    void func_ov093_0217753c(void);
    void func_ov093_02177558(void);
};

class ActorTypeUnkTCAM : public ActorType {
public:
    static ActorTypeUnkTCAM gInstance;

    /* 00 (base) */

    ActorTypeUnkTCAM();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTCAM *GetInstance();
};
