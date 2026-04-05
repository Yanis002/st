//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCASE : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCASE();

    /* 4C */ virtual ~ActorUnkCASE() override;

    void func_ov063_0215ab28(void);
    void func_ov063_0215ab70(void);
    void func_ov063_0215aba4(void);
    void func_ov063_0215abd8(void);
    void func_ov063_0215ac4c(void);
    void func_ov063_0215ac68(void);
    void func_ov063_0215ac8c(void);
    void func_ov063_0215acc8(void);
    void func_ov063_0215acec(void);
    void func_ov063_0215ad48(void);
    void func_ov063_0215ae6c(void);
    void func_ov063_0215ae80(void);
    void func_ov063_0215ae94(void);
    void func_ov063_0215aefc(void);
    void func_ov063_0215af54(void);
    void func_ov063_0215af58(void);
    void func_ov063_0215af5c(void);
    void func_ov063_0215af60(void);
    void func_ov063_0215afa4(void);
    void func_ov063_0215afb8(void);
    void func_ov063_0215b054(void);
    void func_ov063_0215b090(void);
    void func_ov063_0215b1bc(void);
    void func_ov063_0215b244(void);
    void func_ov063_0215b2b0(void);
    void func_ov063_0215b2c4(void);
    void func_ov063_0215b2c8(void);
    void func_ov063_0215b2ec(void);
    void func_ov063_0215b624(void);
    void func_ov063_0215b6c8(void);
    void func_ov063_0215b724(void);
    void func_ov063_0215b7cc(void);
    void func_ov063_0215b814(void);
    void func_ov063_0215b854(void);
    void func_ov063_0215b8e8(void);
    void func_ov063_0215b99c(void);
    void func_ov063_0215ba48(void);
    void func_ov063_0215ba64(void);
    void func_ov063_0215ba80(void);
    void func_ov063_0215bab0(void);
    void func_ov063_0215bae8(void);
    void func_ov063_0215bafc(void);
    void func_ov063_0215bb34(void);
    void func_ov063_0215bb88(void);
    void func_ov063_0215bb8c(void);
    void func_ov063_0215bb90(void);
    void func_ov063_0215bba4(void);
    void func_ov063_0215bbd4(void);
    void func_ov063_0215bbfc(void);
};

class ActorTypeUnkCASE : public ActorType {
public:
    static ActorTypeUnkCASE gInstance;

    /* 00 (base) */

    ActorTypeUnkCASE();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCASE *GetInstance();
};
