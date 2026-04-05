//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSMCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkSMCT();

    /* 4C */ virtual ~ActorUnkSMCT() override;

    void func_ov091_02169c30(void);
    void func_ov091_02169c58(void);
    void func_ov091_02169c9c(void);
    void func_ov091_02169cd8(void);
    void func_ov091_02169d80(void);
    void func_ov091_02169da0(void);
    void func_ov091_02169dc8(void);
};

class ActorTypeUnkSMCT : public ActorType {
public:
    static ActorTypeUnkSMCT gInstance;

    /* 00 (base) */

    ActorTypeUnkSMCT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkSMCT *GetInstance();
};
