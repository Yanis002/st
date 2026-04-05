//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRCMS();

    /* 4C */ virtual ~ActorUnkRCMS() override;

    void func_ov055_0213beac(void);
    void func_ov055_0213bef0(void);
    void func_ov055_0213bf24(void);
    void func_ov055_0213bf60(void);
    void func_ov055_0213bf7c(void);
    void func_ov055_0213bf98(void);
    void func_ov055_0213bfd4(void);
    void func_ov055_0213bff8(void);
    void func_ov055_0213c01c(void);
    void func_ov055_0213c090(void);
    void func_ov055_0213c214(void);
    void func_ov055_0213c228(void);
    void func_ov055_0213c23c(void);
    void func_ov055_0213c26c(void);
    void func_ov055_0213c2a4(void);
    void func_ov055_0213c2f4(void);
    void func_ov055_0213c34c(void);
    void func_ov055_0213c350(void);
    void func_ov055_0213c354(void);
    void func_ov055_0213c358(void);
    void func_ov055_0213c39c(void);
    void func_ov055_0213c3b0(void);
    void func_ov055_0213c478(void);
    void func_ov055_0213c498(void);
    void func_ov055_0213c630(void);
    void func_ov055_0213c640(void);
    void func_ov055_0213c6a4(void);
    void func_ov055_0213c6b8(void);
    void func_ov055_0213c6bc(void);
    void func_ov055_0213c6fc(void);
    void func_ov055_0213c808(void);
    void func_ov055_0213ca5c(void);
    void func_ov055_0213ca80(void);
    void func_ov055_0213cb78(void);
    void func_ov055_0213cd34(void);
};

class ActorTypeUnkRCMS : public ActorType {
public:
    static ActorTypeUnkRCMS gInstance;

    /* 00 (base) */

    ActorTypeUnkRCMS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRCMS *GetInstance();
};
