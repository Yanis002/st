//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCLBT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkCLBT();

    /* 4C */ virtual ~ActorUnkCLBT() override;

    void func_ov096_0217a768(void);
    void func_ov096_0217a790(void);
    void func_ov096_0217a7cc(void);
    void func_ov096_0217a80c(void);
    void func_ov096_0217a858(void);
    void func_ov096_0217a894(void);
    void func_ov096_0217a8cc(void);
    void func_ov096_0217a910(void);
    void func_ov096_0217a948(void);
    void func_ov096_0217a9e4(void);
    void func_ov096_0217ab28(void);
    void func_ov096_0217ab3c(void);
    void func_ov096_0217ab58(void);
    void func_ov096_0217ab6c(void);
    void func_ov096_0217ab7c(void);
};

class ActorTypeUnkCLBT : public ActorType {
public:
    static ActorTypeUnkCLBT gInstance;

    /* 00 (base) */

    ActorTypeUnkCLBT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkCLBT *GetInstance();
};
