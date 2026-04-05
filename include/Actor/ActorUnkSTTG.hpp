//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSTTG();

    /* 4C */ virtual ~ActorUnkSTTG() override;

    void func_ov094_0216a350(void);
    void func_ov094_0216a39c(void);
    void func_ov094_0216a4a0(void);
    void func_ov094_0216a4b4(void);
    void func_ov094_0216a4d4(void);
    void func_ov094_0216a4fc(void);
    void func_ov094_0216a5d4(void);
    void func_ov094_0216a600(void);
    void func_ov094_0216a74c(void);
    void func_ov094_0216a760(void);
    void func_ov094_0216a768(void);
    void func_ov094_0216a788(void);
    void func_ov094_0216a84c(void);
    void func_ov094_0216a870(void);
    void func_ov094_0216a928(void);
    void func_ov094_0216aa78(void);
    void func_ov094_0216aae4(void);
    void func_ov094_0216ab34(void);
    void func_ov094_0216ada8(void);
    void func_ov094_0216aec0(void);
    void func_ov094_0216aee8(void);
    void func_ov094_0216b150(void);
    void func_ov094_0216b188(void);
    void func_ov094_0216b1a4(void);
    void func_ov094_0216b1c0(void);
    void func_ov094_0216b1d4(void);
};

class ActorTypeUnkSTTG : public ActorType {
public:
    static ActorTypeUnkSTTG gInstance;

    /* 00 (base) */

    ActorTypeUnkSTTG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSTTG *GetInstance();
};
