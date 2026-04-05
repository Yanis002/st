//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBL2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkRBL2();

    /* 4C */ virtual ~ActorUnkRBL2() override;

    void func_ov044_0212bd78(void);
    void func_ov044_0212bda0(void);
    void func_ov044_0212be20(void);
    void func_ov044_0212bea8(void);
    void func_ov044_0212bf34(void);
    void func_ov044_0212bfc0(void);
    void func_ov044_0212c04c(void);
    void func_ov044_0212c050(void);
    void func_ov044_0212c14c(void);
    void func_ov044_0212c16c(void);
    void func_ov044_0212c194(void);
};

class ActorTypeUnkRBL2 : public ActorType {
public:
    static ActorTypeUnkRBL2 gInstance;

    /* 00 (base) */

    ActorTypeUnkRBL2();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkRBL2 *GetInstance();
};
