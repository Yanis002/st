//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLBR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkBLBR();

    /* 4C */ virtual ~ActorUnkBLBR() override;

    void func_ov038_0211cdc8(void);
    void func_ov038_0211ce20(void);
    void func_ov038_0211cef8(void);
    void func_ov038_0211cfd0(void);
    void func_ov038_0211d0d0(void);
    void func_ov038_0211d1c0(void);
    void func_ov038_0211d2d8(void);
    void func_ov038_0211d52c(void);
    void func_ov038_0211dbe0(void);
    void func_ov038_0211dc54(void);
    void func_ov038_0211dce8(void);
    void func_ov038_0211dd84(void);
    void func_ov038_0211ddf4(void);
    void func_ov038_0211de64(void);
    void func_ov038_0211deb8(void);
    void func_ov038_0211e1c0(void);
    void func_ov038_0211e280(void);
    void func_ov038_0211e2b0(void);
    void func_ov038_0211e2e0(void);
    void func_ov038_0211e330(void);
    void func_ov038_0211e35c(void);
    void func_ov038_0211e388(void);
    void func_ov038_0211e3b4(void);
    void func_ov038_0211e3e4(void);
    void func_ov038_0211e41c(void);
    void func_ov038_0211e430(void);
    void func_ov038_0211e43c(void);
    void func_ov038_0211e460(void);
    void func_ov038_0211e50c(void);
    void func_ov038_0211e548(void);
    void func_ov038_0211e6a0(void);
    void func_ov038_0211e6a4(void);
    void func_ov038_0211e6ec(void);
    void func_ov038_0211e714(void);
    void func_ov038_0211e734(void);
    void func_ov038_0211e75c(void);
    void func_ov038_0211e770(void);
    void func_ov038_0211e77c(void);
    void func_ov038_0211e7a0(void);
    void func_ov038_0211e7e8(void);
    void func_ov038_0211e82c(void);
    void func_ov038_0211e8d8(void);
    void func_ov038_0211e980(void);
    void func_ov038_0211e99c(void);
    void func_ov038_0211e9bc(void);
    void func_ov038_0211e9ec(void);
    void func_ov038_0211ea0c(void);
    void func_ov038_0211ea34(void);
};

class ActorTypeUnkBLBR : public ActorType {
public:
    static ActorTypeUnkBLBR gInstance;

    /* 00 (base) */

    ActorTypeUnkBLBR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkBLBR *GetInstance();
};
