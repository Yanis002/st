//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3LV : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkE3LV();

    /* 4C */ virtual ~ActorUnkE3LV() override;

    void func_ov099_02181bf4(void);
    void func_ov099_02181c1c(void);
    void func_ov099_02181d2c(void);
    void func_ov099_02181dd8(void);
    void func_ov099_02181e04(void);
    void func_ov099_02181e18(void);
    void func_ov099_02181e38(void);
    void func_ov099_02181e68(void);
};

class ActorTypeUnkE3LV : public ActorType {
public:
    static ActorTypeUnkE3LV gInstance;

    /* 00 (base) */

    ActorTypeUnkE3LV();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkE3LV *GetInstance();
};
