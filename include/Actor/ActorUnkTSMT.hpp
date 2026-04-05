//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorType.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTSMT : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;

    ActorUnkTSMT();

    /* 4C */ virtual ~ActorUnkTSMT() override;

    void func_ov091_0216ef60(void);
    void func_ov091_0216ef88(void);
    void func_ov091_0216efc4(void);
    void func_ov091_0216eff4(void);
    void func_ov091_0216f024(void);
    void func_ov091_0216f034(void);
    void func_ov091_0216f048(void);
    void func_ov091_0216f064(void);
    void func_ov091_0216f088(void);
};

class ActorTypeUnkTSMT : public ActorType {
public:
    static ActorTypeUnkTSMT gInstance;

    /* 00 (base) */

    ActorTypeUnkTSMT();

    /* 0C */ virtual Actor *Create();

    static ActorTypeUnkTSMT *GetInstance();
};
