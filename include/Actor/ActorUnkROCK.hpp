//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkROCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkROCK();

    /* 4C */ virtual ~ActorUnkROCK() override;

    void func_ov031_020e8854(void);
    void func_ov031_020e88e0(void);
    void func_ov031_020e897c(void);
    void func_ov031_020e89ac(void);
    void func_ov031_020e8a48(void);
    void func_ov031_020e8acc(void);
    void func_ov031_020e8afc(void);
    void func_ov031_020e8ba0(void);
    void func_ov031_020e8c08(void);
    void func_ov031_020e8c4c(void);
    void func_ov031_020e8c74(void);
    void func_ov031_020e8ca4(void);
};

class ActorTypeUnkROCK : public ActorType {
public:
    static ActorTypeUnkROCK gInstance;

    /* 00 (base) */

    ActorTypeUnkROCK();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkROCK *GetInstance();
};
