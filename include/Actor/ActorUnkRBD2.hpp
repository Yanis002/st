//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBD2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBD2();

    /* 4C */ virtual ~ActorUnkRBD2() override;

    void func_ov087_021613d8(void);
    void func_ov087_02161400(void);
    void func_ov087_021615bc(void);
    void func_ov087_021616cc(void);
    void func_ov087_021616d0(void);
    void func_ov087_0216174c(void);
    void func_ov087_0216176c(void);
    void func_ov087_021617e8(void);
    void func_ov087_02161828(void);
    void func_ov087_02161880(void);
    void func_ov087_0216193c(void);
    void func_ov087_0216198c(void);
    void func_ov087_021619cc(void);
};

class ActorTypeUnkRBD2 : public ActorType {
public:
    static ActorTypeUnkRBD2 gInstance;

    /* 00 (base) */

    ActorTypeUnkRBD2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBD2 *GetInstance();
};
