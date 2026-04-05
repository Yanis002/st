//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBDS();

    /* 4C */ virtual ~ActorUnkRBDS() override;

    void func_ov087_021611a8(void);
    void func_ov087_021611d0(void);
    void func_ov087_02161244(void);
    void func_ov087_021612b4(void);
    void func_ov087_021612b8(void);
    void func_ov087_021612cc(void);
    void func_ov087_021612e0(void);
    void func_ov087_021612ec(void);
    void func_ov087_0216133c(void);
    void func_ov087_02161364(void);
    void func_ov087_02161394(void);
};

class ActorTypeUnkRBDS : public ActorType {
public:
    static ActorTypeUnkRBDS gInstance;

    /* 00 (base) */

    ActorTypeUnkRBDS();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBDS *GetInstance();
};
