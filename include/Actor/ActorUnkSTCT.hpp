//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSTCT();

    /* 4C */ virtual ~ActorUnkSTCT() override;

    void func_ov091_02169e0c(void);
    void func_ov091_02169e34(void);
    void func_ov091_02169ea8(void);
    void func_ov091_02169eec(void);
    void func_ov091_02169f1c(void);
    void func_ov091_02169f3c(void);
    void func_ov091_02169f64(void);
};

class ActorTypeUnkSTCT : public ActorType {
public:
    static ActorTypeUnkSTCT gInstance;

    /* 00 (base) */

    ActorTypeUnkSTCT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSTCT *GetInstance();
};
