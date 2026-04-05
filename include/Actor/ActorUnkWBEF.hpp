//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWBEF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWBEF();

    /* 4C */ virtual ~ActorUnkWBEF() override;

    void func_ov083_0215b0c8(void);
    void func_ov083_0215b108(void);
    void func_ov083_0215b210(void);
    void func_ov083_0215b25c(void);
    void func_ov083_0215b280(void);
    void func_ov083_0215b2cc(void);
    void func_ov083_0215b2f0(void);
    void func_ov083_0215b330(void);
    void func_ov083_0215b368(void);
    void func_ov083_0215b498(void);
    void func_ov083_0215b4c0(void);
    void func_ov083_0215b51c(void);
    void func_ov083_0215b540(void);
    void func_ov083_0215b58c(void);
    void func_ov083_0215b59c(void);
    void func_ov083_0215b614(void);
    void func_ov083_0215b690(void);
    void func_ov083_0215b6b0(void);
    void func_ov083_0215b6d8(void);
};

class ActorTypeUnkWBEF : public ActorType {
public:
    static ActorTypeUnkWBEF gInstance;

    /* 00 (base) */

    ActorTypeUnkWBEF();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWBEF *GetInstance();
};
