//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkHERT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkHERT();

    /* 4C */ virtual ~ActorUnkHERT() override;

    void func_ov031_020eed24(void);
    void func_ov031_020eed64(void);
    void func_ov031_020eede0(void);
    void func_ov031_020eeed8(void);
    void func_ov031_020eeee8(void);
    void func_ov031_020ef1b4(void);
    void func_ov031_020ef208(void);
    void func_ov031_020ef2ec(void);
    void func_ov031_020ef2f8(void);
    void func_ov031_020ef320(void);
    void func_ov031_020ef334(void);
    void func_ov031_020ef35c(void);
    void func_ov031_020ef3a0(void);
    void func_ov031_020ef3b8(void);
    void func_ov031_020ef3d0(void);
    void func_ov031_020ef430(void);
    void func_ov031_020ef444(void);
    void func_ov031_020ef448(void);
    void func_ov031_020ef458(void);
    void func_ov031_020ef4a8(void);
    void func_ov031_020ef528(void);
    void func_ov031_020ef570(void);
    void func_ov031_020ef5e8(void);
    void func_ov031_020ef698(void);
    void func_ov031_020ef6f8(void);
    void func_ov031_020ef730(void);
    void func_ov031_020ef774(void);
    void func_ov031_020ef794(void);
    void func_ov031_020ef7bc(void);
    void func_ov031_020ef7d8(void);
    void func_ov031_020ef7f4(void);
    void func_ov031_020ef808(void);
};

class ActorTypeUnkHERT : public ActorType {
public:
    static ActorTypeUnkHERT gInstance;

    /* 00 (base) */

    ActorTypeUnkHERT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkHERT *GetInstance();
};
