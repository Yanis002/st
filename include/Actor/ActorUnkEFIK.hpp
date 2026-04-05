//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFIK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkEFIK();

    /* 4C */ virtual ~ActorUnkEFIK() override;

    void func_ov000_0209c0a4(void);
    void func_ov000_0209c0cc(void);
    void func_ov000_0209c100(void);
    void func_ov000_0209c140(void);
    void func_ov000_0209c2d0(void);
    void func_ov000_0209c2e4(void);
    void func_ov000_0209c2ec(void);
    void func_ov000_0209c30c(void);
};

class ActorTypeUnkEFIK : public ActorType {
public:
    static ActorTypeUnkEFIK gInstance;

    /* 00 (base) */

    ActorTypeUnkEFIK();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkEFIK *GetInstance();
};
