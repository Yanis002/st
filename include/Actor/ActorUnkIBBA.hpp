//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkIBBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkIBBA();

    /* 4C */ virtual ~ActorUnkIBBA() override;

    void func_ov044_0212a470(void);
    void func_ov044_0212a4fc(void);
    void func_ov044_0212a5ec(void);
    void func_ov044_0212a73c(void);
    void func_ov044_0212a814(void);
    void func_ov044_0212a828(void);
    void func_ov044_0212a83c(void);
    void func_ov044_0212a850(void);
    void func_ov044_0212a8e4(void);
    void func_ov044_0212a980(void);
    void func_ov044_0212aa1c(void);
    void func_ov044_0212aa64(void);
    void func_ov044_0212ad0c(void);
    void func_ov044_0212ad40(void);
    void func_ov044_0212ad44(void);
    void func_ov044_0212add4(void);
    void func_ov044_0212b020(void);
    void func_ov044_0212b374(void);
    void func_ov044_0212b510(void);
    void func_ov044_0212b538(void);
    void func_ov044_0212b54c(void);
    void func_ov044_0212b5d8(void);
    void func_ov044_0212b614(void);
    void func_ov044_0212b670(void);
    void func_ov044_0212b6a8(void);
    void func_ov044_0212b6c4(void);
    void func_ov044_0212b6e0(void);
    void func_ov044_0212b6fc(void);
};

class ActorTypeUnkIBBA : public ActorType {
public:
    static ActorTypeUnkIBBA gInstance;

    /* 00 (base) */

    ActorTypeUnkIBBA();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkIBBA *GetInstance();
};
