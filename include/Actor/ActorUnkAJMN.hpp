//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJMN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkAJMN();

    /* 4C */ virtual ~ActorUnkAJMN() override;

    void func_ov068_02157fd0(void);
    void func_ov068_02158020(void);
    void func_ov068_0215809c(void);
    void func_ov068_021580c0(void);
    void func_ov068_021580ec(void);
    void func_ov068_02158124(void);
    void func_ov068_0215815c(void);
    void func_ov068_02158168(void);
    void func_ov068_021581b0(void);
    void func_ov068_021581e8(void);
    void func_ov068_021581ec(void);
    void func_ov068_02158210(void);
    void func_ov068_02158230(void);
    void func_ov068_02158404(void);
    void func_ov068_02158408(void);
    void func_ov068_0215852c(void);
    void func_ov068_02158530(void);
    void func_ov068_02158600(void);
    void func_ov068_02158604(void);
    void func_ov068_0215866c(void);
    void func_ov068_02158718(void);
    void func_ov068_021587cc(void);
    void func_ov068_02158838(void);
    void func_ov068_0215891c(void);
    void func_ov068_0215898c(void);
    void func_ov068_02158a18(void);
    void func_ov068_02158ad0(void);
};

class ActorTypeUnkAJMN : public ActorType {
public:
    static ActorTypeUnkAJMN gInstance;

    /* 00 (base) */

    ActorTypeUnkAJMN();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkAJMN *GetInstance();
};
