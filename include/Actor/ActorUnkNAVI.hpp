//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNAVI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNAVI();

    /* 4C */ virtual ~ActorUnkNAVI() override;

    void func_ov052_02134db4(void);
    void func_ov052_02134e10(void);
    void func_ov052_02134f8c(void);
    void func_ov052_02134fa0(void);
    void func_ov052_02134fb4(void);
    void func_ov052_02135018(void);
    void func_ov052_02135084(void);
    void func_ov052_021350a4(void);
    void func_ov052_02135100(void);
    void func_ov052_021352b0(void);
    void func_ov052_02135310(void);
    void func_ov052_021353b0(void);
    void func_ov052_021355f8(void);
    void func_ov052_02135674(void);
    void func_ov052_02135830(void);
    void func_ov052_02135854(void);
    void func_ov052_02135990(void);
    void func_ov052_021359b0(void);
    void func_ov052_021359c4(void);
    void func_ov052_021359dc(void);
    void func_ov052_02135a0c(void);
    void func_ov052_02135a44(void);
    void func_ov052_02135a5c(void);
    void func_ov052_02135a7c(void);
    void func_ov052_02135aac(void);
    void func_ov052_02135ab8(void);
    void func_ov052_02135ad8(void);
    void func_ov052_02135af8(void);
    void func_ov052_02135b0c(void);
    void func_ov052_02135b28(void);
    void func_ov052_02135b50(void);
};

class ActorTypeUnkNAVI : public ActorType {
public:
    static ActorTypeUnkNAVI gInstance;

    /* 00 (base) */

    ActorTypeUnkNAVI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNAVI *GetInstance();
};
