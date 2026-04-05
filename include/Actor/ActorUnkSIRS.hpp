//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSIRS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSIRS();

    /* 4C */ virtual ~ActorUnkSIRS() override;

    void func_ov039_02119fb0(void);
    void func_ov039_0211a01c(void);
    void func_ov039_0211a28c(void);
    void func_ov039_0211a3ac(void);
    void func_ov039_0211a404(void);
    void func_ov039_0211a460(void);
    void func_ov039_0211a510(void);
    void func_ov039_0211a564(void);
    void func_ov039_0211a630(void);
    void func_ov039_0211a774(void);
    void func_ov039_0211a7e0(void);
    void func_ov039_0211a800(void);
    void func_ov039_0211a828(void);
    void func_ov039_0211a8b8(void);
    void func_ov039_0211a950(void);
    void func_ov039_0211a970(void);
    void func_ov039_0211a9a0(void);
    void func_ov039_0211a9d8(void);
    void func_ov039_0211a9ec(void);
    void func_ov039_0211aa00(void);
    void func_ov039_0211aa14(void);
    void func_ov039_0211aa28(void);
    void func_ov039_0211aa60(void);
    void func_ov039_0211aa88(void);
    void func_ov039_0211aab4(void);
    void func_ov039_0211aad4(void);
};

class ActorTypeUnkSIRS : public ActorType {
public:
    static ActorTypeUnkSIRS gInstance;

    /* 00 (base) */

    ActorTypeUnkSIRS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSIRS *GetInstance();
};
