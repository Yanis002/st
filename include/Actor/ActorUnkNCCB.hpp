//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNCCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkNCCB();

    /* 4C */ virtual ~ActorUnkNCCB() override;

    void func_ov062_02159bd8(void);
    void func_ov062_02159c40(void);
    void func_ov062_02159c60(void);
    void func_ov062_02159cac(void);
    void func_ov062_02159db0(void);
    void func_ov062_02159e2c(void);
    void func_ov062_02159e80(void);
    void func_ov062_02159f74(void);
    void func_ov062_02159f9c(void);
    void func_ov062_02159fcc(void);
    void func_ov062_02159fe0(void);
};

class ActorTypeUnkNCCB : public ActorType {
public:
    static ActorTypeUnkNCCB gInstance;

    /* 00 (base) */

    ActorTypeUnkNCCB();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkNCCB *GetInstance();
};
