//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZLSS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkZLSS();

    /* 4C */ virtual ~ActorUnkZLSS() override;

    void func_ov039_0211b538(void);
    void func_ov039_0211b59c(void);
    void func_ov039_0211b840(void);
    void func_ov039_0211b854(void);
    void func_ov039_0211b8a4(void);
    void func_ov039_0211b8fc(void);
    void func_ov039_0211b9a0(void);
    void func_ov039_0211b9ac(void);
    void func_ov039_0211ba00(void);
    void func_ov039_0211ba10(void);
    void func_ov039_0211bb38(void);
    void func_ov039_0211bbe4(void);
    void func_ov039_0211bca4(void);
    void func_ov039_0211bcd8(void);
    void func_ov039_0211bd94(void);
    void func_ov039_0211be40(void);
    void func_ov039_0211be94(void);
    void func_ov039_0211beac(void);
    void func_ov039_0211bec4(void);
    void func_ov039_0211bedc(void);
    void func_ov039_0211bee8(void);
    void func_ov039_0211bf00(void);
    void func_ov039_0211bf20(void);
    void func_ov039_0211bf40(void);
    void func_ov039_0211bf60(void);
    void func_ov039_0211bf6c(void);
    void func_ov039_0211bfa8(void);
    void func_ov039_0211bfd4(void);
    void func_ov039_0211bfe0(void);
    void func_ov039_0211c240(void);
    void func_ov039_0211c2d0(void);
    void func_ov039_0211c354(void);
    void func_ov039_0211c3b4(void);
};

class ActorTypeUnkZLSS : public ActorType {
public:
    static ActorTypeUnkZLSS gInstance;

    /* 00 (base) */

    ActorTypeUnkZLSS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkZLSS *GetInstance();
};
