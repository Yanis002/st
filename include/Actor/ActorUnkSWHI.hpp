//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWHI : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSWHI();

    /* 4C */ virtual ~ActorUnkSWHI() override;

    void func_ov066_0215cb40(void);
    void func_ov066_0215cb80(void);
    void func_ov066_0215cbac(void);
    void func_ov066_0215cbf0(void);
    void func_ov066_0215cc2c(void);
    void func_ov066_0215cc74(void);
    void func_ov066_0215cc88(void);
    void func_ov066_0215ccb4(void);
    void func_ov066_0215ccf4(void);
    void func_ov066_0215ccf8(void);
    void func_ov066_0215cd14(void);
    void func_ov066_0215cd38(void);
    void func_ov066_0215cd50(void);
    void func_ov066_0215cd58(void);
    void func_ov066_0215cda8(void);
    void func_ov066_0215cdd0(void);
};

class ActorTypeUnkSWHI : public ActorType {
public:
    static ActorTypeUnkSWHI gInstance;

    /* 00 (base) */

    ActorTypeUnkSWHI();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSWHI *GetInstance();
};
