//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSGMG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSGMG();

    /* 4C */ virtual ~ActorUnkSGMG() override;

    void func_ov030_0214d800(void);
    void func_ov030_0214d828(void);
    void func_ov030_0214d890(void);
    void func_ov030_0214d8ac(void);
    void func_ov030_0214d8d0(void);
    void func_ov030_0214d8e0(void);
    void func_ov030_0214dbb4(void);
    void func_ov030_0214dc30(void);
    void func_ov030_0214dc80(void);
    void func_ov030_0214dc90(void);
    void func_ov030_0214dca4(void);
};

class ActorTypeUnkSGMG : public ActorType {
public:
    static ActorTypeUnkSGMG gInstance;

    /* 00 (base) */

    ActorTypeUnkSGMG();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSGMG *GetInstance();
};
