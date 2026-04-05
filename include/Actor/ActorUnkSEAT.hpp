//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSEAT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSEAT();

    /* 4C */ virtual ~ActorUnkSEAT() override;

    void func_ov098_02181fa0(void);
    void func_ov098_02181fc8(void);
    void func_ov098_021820f0(void);
    void func_ov098_02182110(void);
    void func_ov098_0218212c(void);
    void func_ov098_02182140(void);
    void func_ov098_02182160(void);
    void func_ov098_02182180(void);
};

class ActorTypeUnkSEAT : public ActorType {
public:
    static ActorTypeUnkSEAT gInstance;

    /* 00 (base) */

    ActorTypeUnkSEAT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSEAT *GetInstance();
};
