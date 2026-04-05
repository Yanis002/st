//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWKTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkWKTR();

    /* 4C */ virtual ~ActorUnkWKTR() override;

    void func_ov030_0214dcec(void);
    void func_ov030_0214dd58(void);
    void func_ov030_0214dd68(void);
    void func_ov030_0214dee8(void);
    void func_ov030_0214df28(void);
    void func_ov030_0214df3c(void);
    void func_ov030_0214df90(void);
    void func_ov030_0214e014(void);
    void func_ov030_0214e0a0(void);
    void func_ov030_0214e0a8(void);
    void func_ov030_0214e14c(void);
    void func_ov030_0214e16c(void);
    void func_ov030_0214e18c(void);
    void func_ov030_0214e2d0(void);
    void func_ov030_0214e418(void);
    void func_ov030_0214e41c(void);
    void func_ov030_0214e5b8(void);
};

class ActorTypeUnkWKTR : public ActorType {
public:
    static ActorTypeUnkWKTR gInstance;

    /* 00 (base) */

    ActorTypeUnkWKTR();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkWKTR *GetInstance();
};
